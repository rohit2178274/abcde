#include <iostream>

using namespace std;

class Node{
public:
    int value;
    Node *next;

} ;
Node *head;
void insertNode(int n)
{
    Node *ptr = new Node;
    ptr->value = n;
    ptr->next = head;
    head = ptr;
}



void searchInNode(int key)
{
     Node *temp = new Node();
     temp = head;
     int count = 0;
     while(temp!=NULL)
     {
         count++;
         if(key == temp->value)

         {
             cout << "found at place " << count << endl;
             break;
         }
         temp = temp->next;
     }
}

void inseAtPlace(int key,int pos)
{
    Node *temp = new Node();
    Node *ptr = new Node();
    temp->value = key;
    ptr = head;
    for(int i = 0; i<pos-1; i++){
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
}

void insertEnd(int key)
{
    Node *new_node = new Node;
    Node *ptr = new Node;

    ptr = head;
    new_node->value = key;
    new_node->next = NULL;

    while(ptr->next!=NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = new_node;
}

void insertFront(int val)
{
    Node *newNode = new Node;
    newNode->value = val;
    newNode->next = NULL;

    newNode->next = head;
    head = newNode;

}

void printList(Node *n)
{
    while(n!=NULL)
    {
        cout << n->value << " ";
        n = n->next;
    }
    cout << "\n";
}
int main()
{

    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;
    Node *four =  NULL;
    Node *five = NULL;

    head = new Node();
    two = new Node();
    three = new Node();
    four = new Node();
    five = new Node();

    head->value = 10;
    two->value = 20;
    three->value = 33;
    four->value = 12;
    five->value = 8;

    head->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;


    printList(head);
    insertNode(66);
    cout << "\n new linked lsit : " << endl;

    printList(head);
    searchInNode(33);

    cout << "insertion at the middle of the linked list" << endl;
    inseAtPlace(67,3);
    printList(head);


    cout << "insertion at the end of the list " << endl;
    insertEnd(45);
    printList(head);

    cout << "insertion at the begining of the linkedlist :" << endl;
    insertFront(34);
    printList(head);

    return 0;
}
