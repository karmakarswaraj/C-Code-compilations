//swap first and last digits of any number

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int number, firstDigit, lastDigit, count, a, b, SwapNum;
	
	cout << "\nPlease Enter Any Number to find First and Last Digit =  ";
	cin >> number;
	
	count = log10(number);  	
  	firstDigit = number / pow(10, count);
  	
  	lastDigit = number % 10;
  	
  	a = firstDigit * (pow(10, count));
  	b = number % a;
  	number = b / 10;
  	
  	SwapNum = lastDigit * (pow(10, count)) + (number * 10 + firstDigit);
  	
	cout << "\nThe First Digit in a Given Number    = " <<firstDigit; 
	cout << "\nThe Last Digit in a Given Number     = " << lastDigit; 
	cout << "\nAfter Swapping First and Last Digit  = " << SwapNum; 	
 	return 0;
}
