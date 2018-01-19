// implementation linear search.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#define MAX 20

using namespace std;

// array of items on which linear search will be conducted.
int intArray[MAX] = { 1,2,3,4,5,7,9,10,11,13,14,15,16,17,19,33,43,45,55,61 };

void printline(int count)
{
	int i;

	for (i = 0; i < count - 1; i++) {
		cout << "=";
	}

	cout << "=\n";
}

// this method makes a linear search.
int find(int data) {

	int comparisons = 0;
	int index = -1;
	int i;

	// navigate through all items
	for (i = 0; i < MAX; i++) {

		// count the comparisons made
		comparisons++;

		// if data found, break the loop
		if (data == intArray[i]) {
			index = i;
			break;
		}
	}

	cout << "Total comparisons made: " << comparisons;
	return index;
}

void display() {
	int i;
	cout << "[";

	// navigate through all items
	for (i = 0; i < MAX; i++) {
		cout << intArray[i];
	}

	cout << "]\n";
}

int main()
{
	cout << "input Array: ";
	display();
	printline(50);

	// find location of 1
	int location = find(55);

	// if element was found
	if (location != -1)
		cout << "\nElement found at location : " << location + 1;
	else
		cout << "Element not found.";

    return 0;
}

