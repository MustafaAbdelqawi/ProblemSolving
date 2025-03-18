#include "linkedlist.hpp"

Node::Node(int value){
    data=value;
    next=NULL;
}

linkedList::linkedList(){
    head = nullptr;
}

void
linkedList::display(){
    if (head == nullptr)
    {
        cout << "List is empty...\n";
        return;
    }
    
    // Traverse the list.
    Node* temp = head; 
    while (temp->next != nullptr){ 
        cout << temp->data << endl; 
        temp = temp->next; 
    }
    cout << temp->data << endl;
}

void
linkedList::insert(int newVal){

    Node* newNode = new Node(newVal);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = newNode;
}

Node*
linkedList::reverse(Node* node)
{
    if (node == nullptr)
        return nullptr;
        
    if (node->next == nullptr) {
        head = node;
        return node;
    }
    Node* node1 = reverse(node->next);
    node1->next = node;
    node->next = NULL;
    return node;
}

void
linkedList::deleteNode(int value){
   if(head == nullptr){
        cout << "List is empty...\n";
        return;
    }
    // if the deleted value is the value of the head Node...
    if(head->data == value && head->next != nullptr){
        head = head->next;
        return;
    }
    else if(head->data == value && head->next == nullptr){
        head = nullptr;
        return;
    }

    Node *prevNode = head;
    Node *tempNode;
    Node* temp = head;
    // if the deleted value is the value of the head Node...
    if(temp->data == value && temp->next != nullptr){
        temp = temp->next;
        return;
    }
    else if(temp->data == value && temp->next == nullptr){
        temp = nullptr;
        return;
    }
    while (temp->next != nullptr)
    {
        if(temp->data == value){
            tempNode = temp;
            prevNode->next = temp->next;
            delete tempNode;
            break;
        }
        prevNode = temp;
        temp = temp->next;
    }

    if(temp->data == value){
        tempNode = temp;
        prevNode->next = nullptr;
        delete tempNode;
    }
}