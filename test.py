import os
import subprocess
import difflib

def test_cpp_file(file_path):
    # Validate file path
    if not file_path.endswith(".cpp"):
        print("Error: Provided file is not a C++ source file.")
        return

    # Extract directory and file name
    directory, cpp_file = os.path.split(file_path)
    exe_file = os.path.splitext(cpp_file)[0] + ".exe"

    # Paths for input and output files
    input_file = "input.txt"
    output_file = "output.txt"

    # Check if input.txt and output.txt exist
    if not os.path.exists(input_file):
        print(f"Error: {input_file} not found.")
        return
    if not os.path.exists(output_file):
        print(f"Error: {output_file} not found.")
        return

    # Compile the C++ file
    compile_command = ["g++", file_path, "-o", os.path.join(directory, exe_file)]
    try:
        subprocess.run(compile_command, check=True)
        print(f"Compiled {cpp_file} successfully.")
    except subprocess.CalledProcessError:
        print("Error: Compilation failed.")
        return

    # Run the compiled executable with input.txt
    try:
        with open(input_file, "r") as infile, open("temp_output.txt", "w") as temp_outfile:
            subprocess.run([os.path.join(directory, exe_file)], stdin=infile, stdout=temp_outfile, check=True)
    except subprocess.CalledProcessError:
        print("Error: Execution failed.")
        return

    # Compare the output with output.txt
    with open("temp_output.txt", "r") as temp_outfile, open(output_file, "r") as expected_outfile:
        temp_output = temp_outfile.read().strip()
        expected_output = expected_outfile.read().strip()

        if temp_output == expected_output:
            print("Test passed: Output matches expected output.")
        else:
            print("Test failed: Output does not match expected output.")
            print("Diff:")
            diff = difflib.unified_diff(
                expected_output.splitlines(),
                temp_output.splitlines(),
                lineterm="",
                fromfile="expected_output",
                tofile="actual_output"
            )
            print("\n".join(diff))

    # Clean up temporary files
    os.remove("temp_output.txt")

def callTest(contest_id, problem_character):
    if(type(contest_id) != str):
        contest_id = str(contest_id)
    test_cpp_file("./" + contest_id + "/" + contest_id + problem_character + ".cpp")