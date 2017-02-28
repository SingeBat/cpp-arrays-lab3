
// Ryan Pomplun & Dylan Jarling
//Lab Exercise 3 - Arrays
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
#include <algorithm>


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
	for (int i = (size - 1); i >= 0; i--)
	{
		cout << pNumbers[i] << ", ";		
	}
	cout << endl;
	_getch();

	int max = pNumbers[0];
	for (int i = 1; i < size; i++)
	{
		if (pNumbers[i] > max)
		{
			max = pNumbers[i];
		}
	}

	int min = pNumbers[0];
	for (int i = 1; i < size; i++)
	{
		if (pNumbers[i] < min)
		{
			min = pNumbers[i];
		}
	}
	
	cout << "With a high of " << max << endl;
	_getch();
	cout << "...and a low of " << min << endl;
	_getch();
	cout << "followed by patches of sunshine, later in the week";
	_getch();
	return 0;
}
