#include<stdio.h>
struct node{
    int data;
    struct node* next;
};
struct node * head;
void create_node(int);
void print_node();
void rem_duplicate();
int main(){
    int n,i;
    printf("Enter the number of node sto be inserted : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        create_node(i);
    }
    print_node();
    rem_duplicate();
    print_node();
}
void create_node(int j){
    struct node * temp,*new_node;
    if(head==NULL){
        head = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data to be inserted in the %d node ",j+1);
        scanf("%d",&head->data);
        head->next=NULL;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        new_node= (struct node*)malloc(sizeof(struct node));
        printf("Enter the data to be inserted in the %d node ",j+1);
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        temp->next=new_node;
    }
}
void print_node(){
    struct node* temp;
    temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void rem_duplicate(){
    struct node* temp;
    temp=head;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            temp->next=temp->next->next;
        }
        else{
            temp=temp->next;
        }
    }
}
