/*
 * Program: Write a C++ program that accepts a string from the user and display on the console screen.
 * Date: Tuesday, 02-03-2021
 * @author: Ankur Saxena
 * Platform: Windows 10 Pro/x64/g++ 8.0/Vim editor
 * /

/*
Sample testcase:

Input:
Hello! C++ programming is fun...

Output:
Hello! C++ programming is fun...
*/

// method 1: using "get ()" command

#include <iostream> // cpp header file
#include <stdlib.h>

using namespace std;

int main () // main function
{
	char text [125];

	system ("cls");

	cout <<"Please enter a string :"<< endl;

	// take input from the user
	cin.get (text, 125);

	// print the result
	cout << text << endl;

	return 0;
}

// program end

// Save this file as "InputString3.cpp"
// Compile: $ g++ InputString3.cpp -o InputString3 [hit Enter]
// Execute: $ InputString3 [hit Enter]

/*
Output:

Please enter a string :
Hello World! C++ programming is fun...
Hello World! C++ programming is fun...

Press ENTER or type command to continue
*/
