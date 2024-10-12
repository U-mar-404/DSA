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

     void Insertfirst(node *&head, int val)
    {
        node *n = new node(val);
        if (head == NULL)
        {
            head = n;
            return;
        }
        cout<<"Something already in the list";
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
     void InsertAtTail(node *&head, int val)
    {
        node *n = new node(val);
        if (head == NULL)
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

int main() {
    node *head = NULL;
    Insertfirst(head, 0);
    cout<<"Enter the number of element you want to input: ";
    int f;
    cin>>f;
    for (int i=1;i<=f;i++) {
        cout<<"Enter Value in node number "<< i << ": ";
        int j;
        cin>>j;
        cout<<endl;
        InsertAtTail(head, j);
        Display(head);
        cout<<endl;
    }
    
    Display(head);
    cout<<endl;

}
