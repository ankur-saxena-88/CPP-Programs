/*
Program: Cpp "Hello World!" program.
Date: Friday, 12-02-2021
@author: Ankur Saxena
Platform: Windows 10 Pro/x64/g++ 8.1/Atom
*/

#include<iostream> // Cpp header file
#include<stdlib.h>

using namespace std;

int main() // Main function
{

	system ("cls"); // This function is used to clear the console screen

	/*
	"system()" command is present inside the "stdlib.h" header file or library.
	In Linux OS or MacOS or other Linux distributions, use "clear" command inside the "system ()".
	*/

	cout<<"Hello World!"<<endl;
	cout<<"Welcome to the world of \'C++\' programming language."<<endl;
	cout<<"Let us learn \'C++\' programming language."<<endl;
	cout<<"Have a good day!!"<<endl;

	return 0;
}

/*
Save this file as "HelloWorld.cpp"
Compile: $ g++ HelloWorld.cpp -o HelloWorld [hit Enter]
Execute: $ ./HelloWorld [hit Enter]
Output:

Hello World!
Welcome to the world of 'C++' programming language.
Let us learn 'C++' programming language.
Have a good day!!
*/
