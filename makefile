#
# PROGRAM: Assign 4   
# PROGRAMMER: Samuel Piecz 
# LOGON ID: Z1732715 
# DATE DUE: 02/22/18 
#
# Compiler variables
CCFLAGS = -ansi -Wall -std=c++11

# Rule to link object code files to create executable file
assignment4: assignment4.o
	g++ $(CCFLAGS) -o assignment4.exe assignment4.o

# Rule to compile source code file to object code
assignment4.o: assignment4.cc
	g++ $(CCFLAGS) -c assignment4.cc

# Pseudo-target to remove object code and executable files
clean:
	-rm -f *.o assignment4.exe
