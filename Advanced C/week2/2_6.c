#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* pre;
};
struct node * head;
void create_node(int);
void insert_node(int);
void print_node();
int main(){
    int n,i,a;
    printf("Enter the number of nodes to be inserted : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        create_node(i);
    }
    print_node();
    printf("Enter the number of the nodes to be inserted");
    scanf(" %d",&n);
    for(i=0;i<n;i++){
        printf("Data 1:");
        scanf("%d",&a);
        insert_node(a);
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
void insert_node(int a){
    struct node *temp1,*temp2,*new,*temp3;
    new = (struct node*)malloc(sizeof(struct node));
    new->data=a;
    new->next=NULL;
    new->pre=NULL;
    
    temp3,temp1=head;
    temp2=head->next;
    while(temp3->next!=NULL){
        temp3=temp3->next;
    }
    if(a<temp1->data){
        head->pre=new;
        new->next=head;
        head=new;
    }
    else if(temp3->data<a){
        temp3->next=new;
        new->pre=temp3;
    }
    else{
        while(temp1->next!=NULL){
            if(temp1->data<a && temp2->data>a){
                temp1->next=new;
                new->pre=temp1;
                new->next=temp2;
                temp2->pre=new;
                break;
            }
            else{
                temp1=temp1->next;
                temp2=temp1->next;
            }
        }
    }
}
