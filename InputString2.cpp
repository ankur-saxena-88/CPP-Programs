/*
 * Program: Write a C++ program that accepts a word or a name from the user and display on the console screen.
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
	string text;

	system ("cls");

	cout <<"Please enter a word or name :"<<endl;

	// take input from user
	cin >> text;

	//print result
	cout<< text;

	return 0;
}

// program end

// Save this file as "InputString2.cpp"
// Compile: $ g++ InputString2.cpp -o InputString2 [hit Enter]
// Execute: $ InputString2 [hit Enter]

/*
Output:

Please enter a word or name :
Ankur
Ankur

Press ENTER or type command to continue
*/

