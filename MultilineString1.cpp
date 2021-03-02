/*
 * Program: Write a C++ program to print the following multiline string on the console screen:
	Hello World!
	Welcome to the world of C++ Programming...
	Let us learn C++ Programming Language...
	C++ Programming is fun!!
 */

/*
 * Date: Tuesday, 02-03-2021
 * @author: Ankur Saxena
 * Platform: Windows 10 Pro/x64/g++ 8.0/Vim editor
 */

// program start


#include <iostream> // cpp header file
#include <stdlib.h>

using namespace std;

int main () // main function
{
	system ("cls"); // used for clear the console screen
	// in linux or macos, use "clear" inside the "system ()" command.
	//
	// printing multiline string
	cout <<"Hello World!"<<"\n"<<"Welcome to the world of C++ Programming..."<<"\n"<<"Let us learn C++ Programming Language..."<<"\n"<<"C++ Programming is fun!!"<<"\n";

	return 0;
}

// program end

// Save this file as "MultilineString1.cpp"
// Compile: $ g++ MultilineString1.cpp -o MultilineString1 [hit Enter]
// Execute: $ MultilineString1.cpp [hit Enter]

/*
Output:

Hello World!
Welcome to the world of C++ Programming...
Let us learn C++ Programming Language...
C++ Programming is fun!!

Press ENTER or type command to continue
*/

