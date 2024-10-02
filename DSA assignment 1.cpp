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
//task one is about adding a node at the end or tail so the code is
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
//task two is about adding a node at the start or head so the code is
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
//task three is about adding a node at the second last node so the code is given as:
    void InsertAtSecondLast(node *&head, int val) {
      node *n = new node(val);

     if (head == NULL) {
         head = n;
         return;
    }  

      if (head->next == NULL) {
         head->next = n;
         return;
    }

    node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    }

//task four is about deleting at the second last node so the code is given as:
    void DeleteSecondLast(node *&head) {
    if (head == NULL || head->next == NULL) {
        return;
    }
    if (head->next->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    }

//task five is about deleting at the first node so the code is given as:
    void DeleteFirstNode(node *&head) {
    if (head == NULL) {
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
}

///task six is about deleting at the last node so the code is given as:
    void DeleteLastNode(node *&head) {
    if (head == NULL) {
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL; 
    }

};

int main()
{
    node *head = NULL;
    node temp(0);
    temp.Display(head);
    //Question no 1.
    cout<<"Question no. 1: "<<endl;
    temp.InsertAtTail(head, 1000);
    temp.InsertAtTail(head, 2000);
    temp.Display(head);
    cout<<endl<<endl;

    //Question no 2.
    cout<<"Question no. 2: "<<endl;
    temp.InsertAtHead(head, 9000);
    temp.Display(head);
    cout<<endl<<endl;

    //Question no 3.
    cout<<"Question no. 3: "<<endl;
    temp.InsertAtSecondLast(head, 4000);
    temp.Display(head);
    cout<<endl<<endl;

    //Question no. 4
    cout<<"Question no. 4: "<<endl;
    temp.DeleteSecondLast(head);
    temp.Display(head);
    cout<<endl<<endl;

    //Question mo. 5
    cout<<"Question no. 5: "<<endl;
    temp.DeleteFirstNode(head);
    temp.Display(head);
    cout<<endl<<endl;

    //Question no. 6.
    cout<<"Question no. 6: "<<endl;
    temp.DeleteLastNode(head);
    temp.Display(head);
    cout<<endl<<endl;


//this code is completely written by Muhammad Umar 231243
    return 0;
}