#include<iostream>
#include<vector>
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

void insertAtTail(node *& head,int data){
    node * newNode = new node(data);
    if(head==NULL){
        head = newNode;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtHead(node *&head,int data){
    node * newNode = new node(data);
    newNode->next=head;
    head=newNode;
}

void insertAtKey(node * &head,int key,int value){
    node * newNode = new node(value);
    node * temp = head;
    while(temp->next!=NULL){
        if(temp->next->data==key){
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }
        temp=temp->next;
    }
}

bool searchKey(node* head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void printLinkedList(node * head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteItemWithKeyK(node * &head,int key){
    if(head==NULL){
        return;
    }
    if(head->next == NULL){
        if(head->data==key){
            node * tem = head;
            head=NULL;
            delete tem;
        }
        return;
    }
    if(head->data == key){
        node* tem = head;
        head= head->next;
        delete tem;
        return;
    }

    node * temp = head;
    while(temp->next!=NULL){
        if(temp->next->data==key){
            node* tobeDeleted = temp->next;
            temp->next = temp->next->next;
            delete tobeDeleted;
            return;
        }
        temp=temp->next;
    }

}

int main(){
    node* head =NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    printLinkedList(head);
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,7);
    printLinkedList(head);
    bool isAvailable = searchKey(head,20);
    cout<<isAvailable<<endl;
    insertAtKey(head,1,0);
    printLinkedList(head);
    deleteItemWithKeyK(head,4);
    printLinkedList(head);
    return 0;
}