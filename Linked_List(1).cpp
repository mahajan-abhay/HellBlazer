#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
};
void printList(Node* n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main()
{
	Node* head=NULL;
	Node* second=NULL;
	head=new Node();
	second=new Node();
	head->data=15;
	head->next=second;
	second->data=20;
	second->next=NULL;
	printList(head);
	return 0;
}
