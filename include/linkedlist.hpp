#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int value);
};

class linkedList{
    Node* head;
public:
    linkedList();
    Node* getHead(){return head;}
    void display();

    void insert(int newVal);
    Node* reverse(Node* node);
    void deleteNode(int value);
};
