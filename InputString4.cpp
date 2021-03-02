/*
 * Program: Write a C++ program that accepts a string from the user and display on the console screen.
 * Date: Tuesday, 02-03-2021
 * @author: Ankur Saxena
 * Platform: Windows 10 Pro/x64/g++ 8.0/Vim editor
 */

/*
Sample testcase:

Input:

Hello World! C++ programming is fun...

Output:

Hello World! C++ programming is fun...
*/

// method 2: using "getline ()" command

// program start

#include <iostream> // cpp header file
#include <stdlib.h>

using namespace std;

int main () // main function
{
	string text;

	system ("cls");

	cout << "Please enter a string :" << endl;

	// take input from the user
	getline (cin, text);

	// print the result
	cout << text << endl;

	return 0;
}

// program end

// Save this file as "InputString4.cpp"
// Compile: $ g++ InputString4.cpp -o InputString4 [hit Enter]
// Execute: $ InputString4 [hit Enter]

/*
Output:

Please enter a string :
Hello World! C++ programming is fun...
Hello World! C++ programming is fun...

Press ENTER or type command to continue
*/

