#include <iostream>
struct Node{
    int data;
    Node* next;
};
Node* head = NULL;
void Insert(int x, int n){
    Node* temp = new Node();
    temp -> data = x;
    temp -> next = NULL;
    if (n == 1) {
        temp -> next = head;
        head = temp; 
        return;
    }
    Node* temp2 = head;
    for (int i = 0 ; i < n-2 ; i++){
        temp2 = temp2 -> next;
    }
    temp -> next = temp2 -> next;
    temp2 -> next = temp;
          
}

void Print(Node *p){
    if(p == NULL) return;
    printf("%d",p->data);
    Print(p ->next);
}

void ReversePrint(Node *p){
    if(p==NULL){
        printf("\n");
        return;
    }
    ReversePrint(p->next);
    printf("%d",p->data);
}
int main(){
    Insert(5,1); //5
    Insert(2,2); //5,2
    Insert(3,1); //3,5,2
    Insert(4,3); //3,5,4,2
    Print(head);
    ReversePrint(head);
}
