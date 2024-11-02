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
        temp = tail;
    }




    void insertAtMiddle(int pos, int data){
        Node *newNode = new Node(data);

        if(pos==1){
            insertatHead(data);
            return;
        }


        Node *temp= head;
        if(temp->next ==NULL){
                insertatTail(data);
                return;
        }


        for(int i=1;i<=(pos-1);i++){
            temp= temp->next;
        }
        Node *save = temp->next;
        temp->next = newNode;
        newNode->next = save;
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
    ll.insertatHead(6);
    
    ll.insertAtMiddle(3,10);
    ll.traversal();
}