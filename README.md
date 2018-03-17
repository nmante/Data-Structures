# Data Structures Library

This library contains C++ source code for Binary Search Trees, Linked Lists,
Queues and Stacks. 

## How to compile the Library

### Mac/Unix/Linux Users
Once you've cloned the repository or downloaded the zip file to your machine,
go to your terminal and go to the top directory of this library. Run 'make' at the
command line. For beginners, this is how your command line would look

	computer_name:Data-Structures user_name$ make

Once you have run the 'make' command, you will have made the object/shared object files
and you will have all of the example programs so that you can see how to use the
data structures.  Specifically, the top level Makefile (i.e. DataStructures/Makefile)
recursively calls the Makefiles in the child directories (e.g. DataStructures/Stack/Makefile).

### Windows Users
For windows users, you have 2 options:

#### Option 1
Get a Unix like environment: Either a virtual machine, Cygwin, MinGW, etc.
Then run 'make' from the command line in the terminal of those environments.

#### Option 2
Add the files to your Visual Studio project, or whatever IDE you use.

### Use data structures in your own code
If you want to use the data structures in your own code, then you can simply ignore the 
makefiles and move the files.  IMPORTANT, in order to use LinkedList, Stack or Queue,
you must have Node.hpp and Node.cpp in you project as well.  To use BST you must have 
BinaryNode.hpp included in your project as well.

## Use cases
Note: Run the 'make' command from the command line before looking at this section if you want
to run the 'DSExample' executable.  
 
Go to the DataStructures/Examples folder and open up the main.cpp and TestSuite.cpp files.
TestSuite.cpp shows how to invoke the commands for each data structure.

If you want to run the code from the aforementioned files, then you can invoke the executable
'DSExample' from the commandline.  'DSExample' was compiled from the TestSuite and main.cpp files. Additionally, the makefile in the `Examples` folder links all of the static libraries (stack, queue, etc.) to the `DSExample` example program.

	computer_name:Examples user_name$ ./DSExample


