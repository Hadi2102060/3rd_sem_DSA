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


    ll.head;
    ll.tail;

    

    
    
    ll.traversal();
}