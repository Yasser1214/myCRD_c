#################### C project : Create, read, delete inputed integers key-value ####################


A multi-files program that can store, read and delete an integer key-value pair thanks to C structures and linked lists. Each turn an input command is asked then after pressing enter, the output will : 
	- associate the value to the key and display it if you tap any key-value pair for the first time.
	- associate 0 to the key and display it if you tap a key-(-1) pair.
	- display the associated value if you tap a key that has been already associated to a value.
	- display -1 if you tap a key that has not been associated to any value.
	- delete the key-value pair if you associate the value "D" to the key and then display the old value associated to it.
	

#################### Use ####################


UNIX SYSTEMS recommanded way : in your terminal go to the folder containing the file main.c then use the MakeFile thanks to the command line "make". It will automaticly create the executable file "crd.out" and clean it after you shut down the pgm.

UNIX SYSTEMS second way : in your terminal go to the folder containing the file main.c then use the command line "gcc main.c src/*.c -o crd.out" to create the executable then the command line "./crd.out" to execute it. 
			
WINDOWS : download an IDE + a compiler + a control terminal, link theme and according to the type of your terminal use the equivalent of the command lines above.
