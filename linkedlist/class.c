#include <stdio.h>
#include<stdlib.h>
typedef struct Node d;
struct Node{
    int data;
    d* next;
};
d* insert_at_begin(d* temphead)
{
    while(temphead!=NULL)
    {
         d* newhead=(d*)malloc(sizeof(d));
         newhead->data=200;
         newhead->next=temphead;
         return newhead;
        
    }
    return NULL;
   
    
}
void linked_listtraverse(d* head)
{
    d* temphead=head;
    while(temphead!=NULL)
    {
        printf("%d ", temphead->data);
        temphead=temphead->next;
    }
    
}
void insertatend(d* head)
{
    d* temp3=head;
    while((temp3->next)!=NULL)
    {
        temp3=temp3->next;
        
    }
    d* endinsert=(d*)malloc(sizeof(d));
    endinsert->data=1000;
    endinsert->next=NULL;
    temp3->next=endinsert;
    
}
int main()
{
    d* head=(d*)malloc(sizeof(d));
    head->data=10;
    d* temp1=(d*)malloc(sizeof(d));
    temp1->data=20;
    head->next=temp1;
    temp1->next=NULL;
    d* head3= insert_at_begin(head);
    insertatend(head3);
    linked_listtraverse(head3);
    
    
    
    
}
