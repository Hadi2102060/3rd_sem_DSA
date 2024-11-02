#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this-> data = data;
        this -> next = NULL;
    }
};

class linked_list{
    public:
    Node *head;
    Node *tail;

    linked_list(){
        head = NULL;
        tail = NULL;
    }



    void insertAtHead(int data){
        Node *newNode = new Node(data);

        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        newNode->next = head;
        head = newNode;
    }

    void insertAtTail(int data){
        Node *temp = new Node(data);

        if(tail==NULL){
            head = temp;
            tail = temp;
        }
        tail->next = temp;
        tail = temp;
    }


    void deleteAtHead(){
        if(head==NULL){
            cout<<" Here no element in the linkedList "<<endl;
            return;
        }
        head = head->next;
    }


    void deleteAtTail(){
        if(tail==NULL){
            cout<<" Here is no element in the linked List "<<endl;
            return;
        }
        Node *temp = head;
        while(temp->next !=tail){

            temp= temp->next;

        }
        temp->next = NULL;
        tail = temp;
    }


    void deleteAtMiddle(int pos){
        if(pos==1){
            deleteAtHead();
            return;
        }

        Node *temp = head;
        for ( int i =1 ; i<(pos-1);i++){
            temp = temp->next;
        }

        if( temp->next->next == NULL){
            deleteAtTail();
            return;
        }

        Node *save = temp->next->next;
        temp->next -> next = NULL;
        temp->next = save;

    }

    void traversal(){
        Node *temp = head;

        while(temp->next != NULL){
            cout<<temp->data<< " ";
            temp = temp->next;
        }
    }
};

int main(){
    linked_list ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail( 4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    cout<<"The linked list before deleting the node :"<<endl;
    ll.traversal();

    cout<<endl<<endl;


    cout<<"After deleting the node then the Linked list is :"<< endl;

    ll.deleteAtMiddle(3);
    ll.traversal();
}