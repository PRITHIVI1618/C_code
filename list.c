#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node *nextnode;
}*head =NULL;
void append(int data){
    struct node *newnode=(struct node*)malloc(sizeof(int));
    newnode->data=data;
    newnode->nextnode=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        struct node *temp=head;
        while(temp->nextnode!=NULL){
            temp= temp->nextnode;
        }
        temp->nextnode=newnode;
    }
}
void disp(){
    struct node *temp=head;
    while(temp->nextnode!=NULL){
        printf(" %d ",temp->data);
        temp=temp->nextnode;
    }printf(" %d ",temp->data);
}
void beg(){
    int data;
    scanf(" %d",&data);
    struct node *newnode1=(struct node*)malloc(sizeof(int));
     newnode1->data=data;
    newnode1->nextnode=head;
    head=newnode1;
   
    }
    void db(){
        struct node *temp=head;
        
        head=head->nextnode;
        free(temp);
    }
     void de(){
        struct node *temp=head;
        while(temp->nextnode->nextnode){
             temp=temp->nextnode;
        }
        
        free(temp->nextnode);
        temp->nextnode=NULL;
    }
    void end(){
        int data;
        scanf(" %d",&data);
    append(data);
    }
    void pos(){
        int n;
        scanf("%d",&n);
        struct node *temp=head;
        for(int i=1;i<n-1;i++){
            temp=temp->nextnode;
        }
        int data;
    scanf(" %d",&data);
    struct node *newnode1=(struct node*)malloc(sizeof(int));
    newnode1->nextnode=temp->nextnode;
    temp->nextnode=newnode1;
    newnode1->data=data;
    }

void inse(){
    int data=10;
    struct node *temp=head;
    while (temp){
        if(temp->data%2==0){struct node *newnode1=(struct node*)malloc(sizeof(int));
     newnode1->data=data;
    newnode1->nextnode=temp->nextnode;
    temp->nextnode=newnode1;
    temp=temp->nextnode;
        }
        temp=temp->nextnode;
    }
}
    void kd(){
        int k;
        scanf("%d",&k);
        int a=1;
         struct node *temp=head;
         struct node *temp1;
         while(temp){
            
              if(a==k-1&&temp->nextnode!=NULL){
                 temp1=temp->nextnode;
                 temp->nextnode=temp1->nextnode;
                  free(temp1);
                  a=0;
                  }
              temp=temp->nextnode;
        a++; }
    } 

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        append(num);
    }
    disp();
  kd();
  printf("\n");
  disp();
    return 0;
}