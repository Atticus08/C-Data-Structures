#include <iostream>
#include "SortingFunctions.h"

using namespace std;

int main() {
	int type;	
	int cont;
	int len = 10;	

	do {
		cout << "How large do you want the integer list to be? \nSize: ";
		cin >> len;	

		if (len < 0 || len > 99999999)
			len = 10;

		int list[len];

		cout << "\nWhat Kind of Sorting Do You Want to Perform? (1 - Bubble, 2 - Insertion)\n";
		cin >> type;

		cout << "Generating Random Set of Numbers...\n";
		for (int i = 0; i < len; i++) {
			list[i] = rand() % len + 1;
			cout << list[i] << " ";
		}
		cout << endl;

		switch (type) {
			case 1:
				cout << "Performing Bubble Sort:\n";
				bubble(list, len);
				break;
			case 2:
				cout << "Performing Insertion Sort\n";
				insertion(list , len);
				break;
			default:
				cout << "Selection Not Recognized\n";
				break;
		}
		cout << "Do you want to continue (y = 1/n = 0)?\n";
		cin >> cont;

	} while (cont != 0);
	
	return 0;
}