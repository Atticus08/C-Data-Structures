#include <iostream>

using namespace std;

struct node {
	int data;
	node *next;
};

class linkedlist {
	private:
	node *head, *tail;

	node* createNode(int data) {
		node *tmpNode = new node;
		tmpNode->data = data;
		tmpNode->next = NULL;
		return tmpNode;
	}

	public:
	int size;

	linkedlist() {
		head = NULL;
		tail = NULL;
		size = 0;
	}

	~linkedlist() {
		delete head;
		delete tail;
	}

	void printList() {
		node *ptr = new node;
		ptr = head;
		while(ptr != NULL) {
			if (ptr == head)
				printf("(H)");
			if (ptr == tail)
				printf("(T)");			
			printf("%d -> ", ptr->data);
			ptr = ptr->next;
			if (ptr == NULL)
				printf("end\n");
		}		
	}
	
	void insertStart(int data) {
		node *tmpNode = createNode(data);
		if(head == NULL) {
			head = tmpNode;
			tail = tmpNode;
			tmpNode = NULL;	
		} else {
			tmpNode->next = head;
			head = tmpNode;									
		}
		size++;	
	}

	void insertEnd(int data) {
		node *tmpNode = createNode(data);
		if(head == NULL) {
			head = tmpNode;
			tail = tmpNode;	
			tmpNode = NULL;
		} else {
			tail->next = tmpNode;
			tail = tmpNode;
		}
		size++;
	}

	void removeNode(int location) {
		node *prev = new node;
		node *ahead = new node;				
		int loc = 0;
		prev = head;
		ahead = head->next;

		if (location == 0) {
			if (size == 1) {
				head = NULL;
				tail = NULL;	
			}
			head = ahead;
			delete prev;			
			--size;
			return;
		}
		while(loc < location - 1 && ahead->next != NULL) {
			prev = ahead;
			ahead = ahead->next;
			loc++;
		}
		prev->next = ahead->next;
		if (ahead == tail)
			tail = prev; 		
		delete ahead;
		--size;
	}

	bool isEmpty() {
		return size == 0;
	}

	int sizeOfList() {
		return size;
	}
	
};