#include <iostream>
#include "tests.h"

using namespace std;

int main() {	
	int choice;		   
    
	cout << "What do you want to focus on? (1 - Linked Lists; 2 - Sorting)\nChoice: ";
	cin >> choice;

	switch (choice) {		
		case 1:
			linkedListTesting();
			break;
		case 2:
			sortingTesting();
			break;
		default:
			cout << "Selection Not Recognized\n";
	}			
	return 0;
}
