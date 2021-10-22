#include<iostream>
using namespace std;

class node{
    public:
int data;
node* next;

node(int val){
    data=val;
    next=NULL;
   }
};
int length(node* head){
    node* temp=head;
    int l=0;
    while (temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    
    return l;
}
node* kappend(node* &head,int k){
node* newhead;
node* newtail;
node* tail=head;
int l=length(head);
k=k%l;
int count=1;
while (tail->next!=NULL)
{
    if(count==(l-k)){
        newtail=tail;

    }
    if(count==(l-k+1)){
        newhead=tail;
    }
      tail=tail->next;
    count++;
    /* code */
}
newtail->next=NULL;
tail->next=head;
return newhead;

}
void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertAtTail(node* &head,int val){
    node* n=new node(val);
    
     if(head==NULL){
    head=n;

         return;
     }
     node* temp=head;
    while (temp->next!=NULL)
    {
      temp=temp->next;
  /* code */
    }
    temp->next=n;    
}
 void display(node* head){
     node* temp=head;
     while(temp!=NULL){
         cout<<temp->data<<"->";
         temp=temp->next;
     }
cout<<"NULL"<<endl;
 }  
int main()
{
 node* head=NULL;
 insertAtTail(head, 1);
 insertAtTail(head, 2);
 insertAtTail(head, 3);
 display(head); 
 insertAtHead(head,4);
 display(head);
 node* newhead=kappend(head, 2);
display(newhead);
   return 0;
}
