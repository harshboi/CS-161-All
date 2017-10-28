/***************************************************************************************
** Program: Assignment1.cpp
** Author: Harshvardhan Singh
** Date: 1/11/2017
** Description: The program prints the maximum and minimum, signed and unsigned bits
of an integer, long integer and char
** Input: Will be the number of bytes 
** Output: The output will be the maximum number of bits of each type
***************************************************************************************/ 
#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main() {

// maximum and minimum values for the signed and unsigned ints, longs, and shorts

cout << "The maximum value of a signed integer is: " << INT_MAX << endl;
cout << "The maximum value of an unsigned integer is: " << UINT_MAX << endl;
cout << "The minimum value of a signed integer is: " << INT_MIN << endl;
cout << "The minimum unsigned value for all is 0" << endl << endl;

cout << "Maximum signed  char in 8 bits is" << pow(2,8-1)-1 << endl;
cout << "Minimum signed  char in 8 bits is" << (pow(2,8-1))*(-1) << endl;
cout << "Maximum unsigned char in 8 bits is" << (pow(2,8))-1 << endl << endl;

cout << "Maximum signed long number is: " << LONG_MAX << endl;
cout << "Minimum signed long number is: " << LONG_MIN << endl;
cout << "Maximum unsigned long number is: " << ULONG_MAX << endl << endl;

cout << "Minimum signed short number is: " << SHRT_MIN << endl;
cout << "Maximum signed short number is: " << SHRT_MAX << endl;
cout << "Maximum unsigned short number is: " << USHRT_MAX << endl << endl;

// Extra Credit

int x;
cout << "Enter the number of bits: ";
cin >> x;
cout << "Maximum signed " << x << " bits number is " << pow(2,x-1)-1 << endl;
cout << "Minimum signed "<< x <<" bits number is " << (pow(2,x-1))*(-1) << endl;
cout << "Maximum unsigned " << x << " bits number is " << (pow(2,x))-1 << endl;

return 0;

}

