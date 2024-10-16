#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node * next;
    node * prev;
    node(int val) {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void InsertAtHead(node * &head, int val) {
    node * n= new node(val);
    node * temp=head;
    if(head==NULL) {
        head=n;
        return;
    }
    n->next=head;
    n->prev=NULL;
    head->prev=n;
    head=n;
}

void InsertAtTail(node * &head, int val) {
    node * n=new node(val);
    node * temp=head;
    if(head==NULL) {
        head=n;
        return;
    }
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void DeleteAtHead(node * &head) {
    if(head==NULL) {
        cout<<"List Is Empty!";
        return;
    }
    node * temp = head;
    head->next->prev=NULL;
    head=head->next;
    delete temp;
}

void DeleteAtTail(node* &head) {
    if(head==NULL) {
        cout<<"List Is Empty!";
        return;
    }
    node* temp=head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->prev->next=NULL;
    delete temp;

}

void Display(node * &head) {
    node *temp = head;
        cout<<"Head ";
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "Tail" << endl;
}

int main () {
    node * head = NULL;
    InsertAtHead(head, 1);
    InsertAtHead(head, 2);
    InsertAtHead(head, 3);
    Display(head);
    DeleteAtHead(head);
    Display(head);
    InsertAtTail(head, 3);
    Display(head);
    DeleteAtTail(head);
    Display(head);

}