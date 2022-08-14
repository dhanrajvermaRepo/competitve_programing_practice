#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node * next;
    node(int value){
        data = value;
        next = NULL;
    }
};

void insertAtTail(node *&head,int data){
    node*  newNode = new node(data);
    if(head==NULL){
        head=newNode;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void reverse(node *&head){
    if(head==NULL||head->next==NULL){
        return;
    }
    node*prev=NULL;
    node*cur=head;
    node*next=cur->next;
    while(cur!=NULL){
        cur->next=prev;
        prev=cur;
        cur=next;
        if(cur==NULL){
            break;
        }
        next=next->next;
    }
    head=prev;
}

node* recusiveApproach(node*&head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node*newHead = recusiveApproach(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
}

void diaplay(node*head){
    node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"->NULL"<<endl;
    
}






int main(){
    node*head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    diaplay(head);
    // reverse(head);
    recusiveApproach(head);
    diaplay(head);
    return 0;
}