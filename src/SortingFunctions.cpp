#include <iostream>
#include "SortingFunctions.h"

using namespace std;

/**
	Perform bubble sort on array of integers.
*/
void bubble(int list[], int length) {	
	int count;
	int tmpLen = length;
	do {
		count = 0;
		// Iterate through array, compare 2 pointers, and swap when 1st pointer
		// is larger than the 2nd one.
		for (int i = 0; i < tmpLen; i++)
			if (list[i] > list[i+1]) {
				swap(&list[i], &list[i+1]);
				count++;
			}
		// The largest value is already in it's correct order, so we don't move the pointers
		// have to check the values at the end of the list again.
		--tmpLen;
	} while (count != 0 || tmpLen == 1);

	printArray(list, length);
}

/**
	Perform insertion sort on array of integers.
*/
void insertion(int list[], int length) {
	int temp;
	if (length == 1) {
		printArray(list, length);
		return;
	}

	for(int i = 1; i < length; i++) {
		temp = list[i];
		for(int j = i - 1; j >= 0 && list[j] > temp; j--) {		
			list[j+1] = list[j];
			list[j] = temp;		
		}
	}
	printArray(list, length);
}


/**
	Swap elements in array.
 */
void swap(int *p1, int *p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

/**
	Print Elements in Array on Terminal.
 */
void printArray(int arr[], int length) {
	cout << "Printing sorted list!\n";
	for(int i = 0; i < length; i++)
		cout << arr[i] << " ";
	cout << endl;
}

