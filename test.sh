#!/bin/bash
set -euo pipefail

if [ $# -ne 2 ]; then
    echo "<contestID> <problemChar>"
    exit 1
fi

trap 'rm temp_output.txt' EXIT

g++ "${1}/${1}${2}.cpp" -o "${1}/${1}${2}.exe"

"${1}/${1}${2}.exe" < input.txt &> temp_output.txt

diff -y output.txt temp_output.txt
