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
void deleteNode(Node* node) {
    // Write your code here.
    if(node->next==NULL) node = NULL;
    node->data = node->next->data;
    node->next = node->next->next; 
}