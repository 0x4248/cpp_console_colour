# Console_colour (Makefile)
# A simple header file to add colour to your console output.
####################################################################################################
# By: awesomelewis2007
# GitHub: https:##www.github.com#awesomelewis2007#Console_colour
####################################################################################################
COMPILER = g++
STD = c++11
OUTPUT = main
SRC = main.cpp
HEADERS = src/colour.h 

all: compile run 

compile:
	$(COMPILER) $(SRC) $(HEADERS) -std=$(STD) -o $(OUTPUT) 

run:
	./$(OUTPUT) -a

clean:
	rm  -f $(OUTPUT)
