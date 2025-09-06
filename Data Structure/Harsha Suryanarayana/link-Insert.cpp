#include <iostream>
struct Node{
    int data;
    Node* next;
};
Node* Insert(Node* head, int x){
    Node* temp = new Node();
    temp -> data = x;
    temp -> next = NULL;
    if (head != NULL) temp -> next = head;
    head = temp;
    return head;
}
void Print(Node* head){
    printf("The linked list is: ");
    while (head!= NULL){
        printf("%d ", head -> data);
        head = head -> next;
    }
    printf("\n");
}
int main(){
    Node* head = NULL;
    int n,i,x;
    printf("Enter the elements of the linked list: ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Enter element");
        scanf("%d",&x);
        head = Insert(head, x);
        Print(head);    
    }

}

    

