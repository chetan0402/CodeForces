@echo off
for /R %%G in (*.exe, *.ilk, *.obj, *.pdb) do (
    echo Deleting %%G
    del /S /Q "%%G"
)