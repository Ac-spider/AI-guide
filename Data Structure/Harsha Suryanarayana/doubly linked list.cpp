#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    Node* next;
    Node* prev;
};
Node* head;
Node* GetNewNode(int x){
    Node* newNode = new Node();
    newNode -> data = x;
    newNode -> next = NULL;
    newNode -> prev = NULL;
    return newNode;
}

void InsertAtHead(int x){
    Node* newNode = GetNewNode(x);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    head -> prev = newNode;
    newNode -> next = head;
    head = newNode;
}
void Print(){
    Node* temp = head;
    while (temp != NULL){
        printf("%d",temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

void ReversePrint(){
    Node* temp = head;
    if (temp == NULL) return; //empty LIST,return
    while(temp -> next != 0){
        temp = temp -> next;
    }
    while(temp != 0 ){       //pay attention here
        printf("%d",temp -> data);
        temp = temp -> prev; 
    }
    printf("\n");
}

int main()
{
    head = NULL;
    InsertAtHead(2);Print();ReversePrint();
    InsertAtHead(4);Print();ReversePrint();
    InsertAtHead(6);Print();ReversePrint();
}