
// Lab Exercise 3 - Arrays
// Instructions:
/*
	[ ] Write a program that performs the following:
		[ ] Prompt the user to input five numbers.
		[ ] Store the input into either an array or a vector.
		[ ] Once the user is finished entering numbers:
			[ ] Display the five numbers in reverse order.
			[ ] Display the highest number entered.
			[ ] Display the lowest number entered.
		[ ] Extra Credit: Allow the user to enter as many numbers as they want(at least 5).
	[ ] Compress(zip) your program and submit it to Blackboard.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << "The array arranging machine" << endl;
	int size;
	cout << "How big of an array? ";
	cin >> size;
	int *pNumbers = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "number " << (i + 1) << ": ";
		cin >> pNumbers[i];
	}
	
	cout << "Now in reverse" << endl;
	_getch();


	_getch();
	return 0;
}
