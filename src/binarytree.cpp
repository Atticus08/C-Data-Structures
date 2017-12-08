#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *left, *right;
};

class BinaryTree {
	private:
	Node *root;

	Node *createNode(int data) {
		Node *tmpNode = new Node;
		tmpNode->data = data;
		tmpNode->left = NULL;
		tmpNode->right = NULL:
		return tmpNode;
	}

	public:
	int levels, size;

	binarytree() {
		root = NULL;
		levels = 0;
		size = 0;
	}

	~binarytree() {
		delete root;
	}

	bool searchTree(int searchVal) {
		return true;
	}

	void insertNode(int data) {		
		if (root == NULL) {
			Node *tmpNode = createNode(data); 
			root = tmpNode;
			return true;
		}
		insertNode(data, root);
	}

	void insertNode(int data, Node node) {		
		if (data < node->data) {
			if (node->left != NULL)
				insertNode(data, node->left);
			else {
				node->left = new Node;
				node->left = createNode(data);
			}
		} else {
			if (node->right != NULL)
				insertNode(data, node->right);
			else {
				node->right = new Node;
				node->right = createNode(data);
			}
		}
	}

	void printTree() {
		Node *ptr = new Node;
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
	
	bool isEmpty() {
		return size == 0;
	}

	int sizeOfList() {
		return size;
	}
	
};