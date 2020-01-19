# Source to gdb use following commands 

echo "# gdb sources #" >> ~/.gdbinit
echo "source $(pwd)/pptrTest.gdb" >> ~/.gdbinit

# Debug using gdb in Ubuntu terminal
g++ -g array.cpp -o array
gdb array
break 19    // for break point at line 19
run 	    // run program upto break point 
pptrTest    // use custom macro
continue    // let program finish
quit        // exit gdb

#Rename ptrArray.txt to ptrArray_shell.txt

# Debug using gdb in Ubuntu VS code
code .             // opens terminal in current folder
hit debug          // mark break point at line 19
-exec pptrTest     // use custom macro
stop to exit

#Rename ptrArray.txt to ptrArray_vscode.txt

#Compare ptrArray_shell.txt and ptrArray_vscode.txt which have different format output.