// A simple C++ program for traversal of a linked list
#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

// This function prints contents of linked list
// starting from the given node
void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}

// Driver code
int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	// allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();
	
	cout<<"enter the element want to insert : ";
	cin>>head->data; // assign data in first node
	cout<<"Elements Inserted in list : ";
	cout<<head->data<<"\n";
	head->next = second; // Link first node with second

	cout<<"enter the element want to insert : ";
	cin>>second->data; // assign data to second node
	cout<<"Elements Inserted in list : ";
	cout<<second->data<<"\n";
	second->next = third;

	cout<<"enter the element want to insert : ";
	cin>>third->data; // assign data to third node
	cout<<"Elements Inserted in list : ";
	cout<<third->data<<"\n";
	third->next = NULL;

	cout<<"The Final list is : ";
	printList(head);

	return 0;
}
