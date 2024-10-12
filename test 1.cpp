#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

     void InsertAtTail(node *&head, int val)
    {
        node *n = new node(val);
        if (head == NULL) //list is empty
        {
            head = n;
            return;
        }

        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = n;
    }

    void Display(node *head)
    {
        node *temp = head;
        cout<<"Head ";
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "Tail" << endl;
    }

    void InsertAtHead(node *&head, int val)
    {
        node *n = new node(val);
        if (head == NULL)
        {
            head = n;
            return;
        }

        n->next = head;
        head=n;

    }

    bool Search(node * head, int key) {
        node * temp =head;
        while(head!=NULL) {
            if(temp->data==key) {
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
    void sorting(node* &head) {
        node * temp=head;
        if(temp == NULL){
            cout<<"The list is empty";
            return;
        }
        if(temp->data==NULL) {
            cout<<"The list has only one node";
        }

        
    }

int main()
{
    node *head = NULL;
    node *head2 = NULL;
    Display(head);
    int x=5;
    InsertAtTail(head, x);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    Display(head);
    cout<<endl<<endl;
    InsertAtHead(head, 0);
    Display(head);
    cout<<Search(head, 3);
    return 0;
}