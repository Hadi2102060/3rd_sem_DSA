#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


class linkedList{
    public:
    Node *head;
    Node *tail;


    linkedList(){
        head = NULL;
        tail = NULL;
    }



    void insertatHead(int data){
        Node *newNode = new Node(data);

        if(head == NULL){
            head= newNode;
            tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void insertatTail(int data){
        Node *temp = new Node(data);

        if(head == NULL){
            head= temp;
            tail = temp;
            return;
        }

        tail->next = temp;
        tail = temp;
    }


    void deleteAtTail(){
        if(tail == NULL){
            cout<<" No element in the linked list "<<endl;
            return;

        }
       Node *temp = head;
       while( temp->next != tail){
            temp = temp->next;
       }
       temp->next = NULL;
       tail = temp;
    }




   

    void traversal(){
        Node *temp = head;

        while ( temp->next != NULL){

            cout<<temp->data<<" ";
            temp = temp->next ;

        }  
        
    }
};



int main(){

    linkedList ll ;
    ll.insertatTail(1);
    ll.insertatTail(2);
    ll.insertatTail(3);
    ll.insertatTail(4);
    ll.insertatTail(5);
    ll.insertatTail(6);

    cout<<"The linked list before deleting tail :"<<endl;
    
    ll.traversal();





    cout<<endl <<endl;
    cout<<"delete from tail in the likedlist :"<<endl;
    ll.deleteAtTail();
    ll.traversal();
}