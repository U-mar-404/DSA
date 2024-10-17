#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node * next;
    node(int val) {
        data=val;
        next= NULL;
    }
};

    void InsertAtHead(node * &head, int val) {
        node * newnode = new node(val);
        if(head==NULL) {
            head=newnode;
            return;
        }
        newnode->next=head;
        head=newnode;
    }

    void InsertAtTail(node * &head, int val) {
        node * newnode= new node(val);
         if(head==NULL) {
            head=newnode;
            return;
        }
        node * temp=head;
        while(temp->next!=NULL) {
            temp=temp->next;
        }
        temp->next=newnode;
        
    }


void Display(node * &head) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;}
    node *temp = head;
        cout<<"Head ";
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "Tail" << endl;
}

int main() {
    node * head=NULL;

    InsertAtHead(head,5);
    InsertAtHead(head,4);
    InsertAtHead(head,3);
    InsertAtHead(head,2);
    Display(head);
    InsertAtTail(head, 0);
    Display(head);
    InsertAtHead(head, 1);
    Display(head);
    

}