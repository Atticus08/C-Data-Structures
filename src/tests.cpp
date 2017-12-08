#include <iostream>
#include "tests.h"
#include "SortingFunctions.h"
#include "linkedlist.cpp"

using namespace std;

void sortingTesting() {
	int cont = 0;
	int len = 10;
	int type;

	do {
        system("clear");
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
		}
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
	} while (1);

}

void linkedListTesting() {
	int listOpt;
	linkedlist *list = new linkedlist();

	do {
        system("clear");
		cout << "Choose an options:\n1 - Insert Node At Start\n2 - Insert Node At End\n3 - Remove Node\n4 - Print List\n" 
			 << "5 - Whats the size of the list?\n";
		cin >> listOpt;

		int data;
		int loc;
		switch (listOpt) {
			case 1:						
				cout << "Data to insert (integer): ";
				cin >> data;
				list->insertStart(data);
				break;
			case 2:						
				cout << "Data to insert (integer): ";
				cin >> data;
				list->insertEnd(data);
				break;
			case 3:						
				cout << "Node Position to Remove: ";
				cin >> loc;
				list->removeNode(loc);
				break;
			case 4:
				list->printList();
				break;
			case 5:
				cout << "Size of List: " << list->sizeOfList() << endl;
				break;
			default:
				cout << "Selection Not Recognized\n";
		}
		system( "read -n 1 -s -p \"Press any key to continue...\"" );
	} while(1);
}

