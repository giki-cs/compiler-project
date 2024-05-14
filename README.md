# Compiler Design Project
__Name:__ Khizar 2020196
          Ammar  2020468
          Afeef  2020040

# Running Process
Run the following commands on terminal:

1. ./build.sh
2. ./run.sh codegen ./programs/1-scan+parse/valid/e_approximate.min
3. ./execute.sh ./programs/1-scan+parse/valid/e_approximate.c

## Notes
* `programs`: Test programs are organized by compilation phase and by expected result. Valid programs should output `OK` and status code `0`, while invalid programs should output `Error: <description>` and status code `1`.
  * `Scan+parse`: Runs both the scanner and parser phases
  * `Typecheck`: Runs until the end of the typechecker phase
  * `Codegen`: Runs until your compiler outputs the target code
* `src`: Source code for your assignment
* `build.sh`: Builds your compiler using `Make` or similar. You should replace the commands here if necessary to build your compiler
* `run.sh`: Runs your compiler using two arguments (mode - $1 and input file - $2). You should replace the commands here if necessary to invoke your compiler
* `test.sh`: Automatically runs your compiler against test programs in the programs directory and checks the output