#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* pre;
};
struct node * head;
void create_node(int);
void print_node();
void rotate();
int main(){
    int n,i,r;
    printf("Enter the number of nodes to be inserted : ");
    scanf("%d",&n);
    printf("Enter  the number of rotation to be done : ");
    scanf("%d",&r);
    for(i=0;i<n;i++){
        create_node(i);
    }
    print_node();
    for(i=0;i<r;i++){
      rotate(r); 
    }
    print_node();
}
void create_node(int j){
    struct node * temp,*new_node;
    if(head==NULL){
        head = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data to be inserted in the head %d node ",j+1);
        scanf("%d",&head->data);
        head->next=NULL;
        head->pre=NULL;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        new_node= (struct node*)malloc(sizeof(struct node));
        printf("Enter the data to be inserted in the new_node %d node ",j+1);
        scanf("%d",&new_node->data);
        temp->next=new_node;
        new_node->pre=temp;
        new_node->next=NULL;
    }
}
void print_node(){
    printf("\n");
    struct node* temp;
    temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void rotate(){
    struct node * temp1,*temp2;
    temp1=head;
    temp2=head->next;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=head;
    temp1->next->next=NULL;
    head=temp2;
    head->pre=NULL;
}
