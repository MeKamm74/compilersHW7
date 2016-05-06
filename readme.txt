Authors: Michael Kammeyer and Cody Borgschulte

This is the MIPL to Python compiler/translator.

Usage:
mipl path/to/input/file > output.py
python output.py

The output is compatible with python 2.7, standard on most if not all linux distros.

All of the test files are the same as HW7 except for two:

nestedProcDeclWithCalls.txt - This file is similar, but since global
variables don't work with python, and we don't have a way to pass them
from function to function in MIPL, we have replaced those variable
references with constants. 

allKindsOfThings.txt - This file suffers from the same problem as the
previous one. We have written our own file, which uses bits from every 
other test file. The input to expected output is deatiled in the file
itself.

There is a test script - test.sh
It will run through compiling all of the files in sample_input, storing the 
python output in python_output. Then it runs those files with python and stores
the output in final_output. It then runs the diff command between those and
expected_output, ignoring whitespace. You will need to make inputs during the 
process if you use the script, and the results will vary depending on the 
inputs. We mainly used it to quickly create all of the output files and store 
them properly.

All of the sample_oal files are also included as well as the oal interpreter,
so you can compare the results to the ones from HW7. The only differences will 
come from the two aformentioned files.

Thanks for using our compiler!

-MK and CB