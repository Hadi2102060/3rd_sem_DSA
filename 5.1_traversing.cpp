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
    ll.insertatHead(1);
    ll.insertatHead(2);
    ll.insertatHead(3);
    ll.insertatHead(4);
    ll.insertatHead(5);

    ll.traversal();
}