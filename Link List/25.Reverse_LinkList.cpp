#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
 Node*reverseLinkedList(Node*head) 
{
    // Write your code here
     Node *curr = head;
     Node *perv = NULL;
     Node *next = NULL;

    while(curr!=NULL){
        next = curr->next;
        curr->next = perv;
        perv = curr;
        curr = next;
    }
    return perv;
}