playing around with c let see how it goes note to take :

1-#!/bin/bash is called a "shebang" or "hashbang". It's a special directive at the beginning of a shell script that specifies the interpreter that should be used to execute the script. In this case, #!/bin/bash tells the shell to use the Bash interpreter.

2-gcc is a command-line utility that compiles C source code into executable files. $CFILE is a shell variable that holds the name of the C source code file to be compiled. The -o option specifies the name of the output file. In this case, -o cisfun tells gcc to name the executable file "cisfun".

So the command gcc $CFILE -o cisfun compiles the C source code file referenced by the $CFILE variable and generates an executable file named "cisfun". 100-intel : #!/bin/bash is a "shebang" that specifies the interpreter to be used for the script. In this case, it tells the shell to use the Bash interpreter.

gcc is a command-line utility that compiles C source code into executable files. The -S option tells gcc to generate assembly code rather than an executable file. The -masm=intel option specifies that the assembly code should be output in Intel syntax.

$CFILE is a shell variable that holds the name of the C source code file to be compiled. It's likely that this variable has been defined earlier in the script.

So the command gcc -S -masm=intel $CFILE compiles the C source code file referenced by the $CFILE variable and generates assembly code in Intel syntax.
