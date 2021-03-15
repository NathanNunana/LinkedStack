#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(){
        data = 0;
        next = NULL;
    }
    Node(int d){
        data = d;
    }
};

class LinkedStacks{
private: 
    Node* head;
public:
    void push(Node* n){
        if(head == NULL){
            head = n;
            cout << "Node has been pushed to stack" <<endl;
        }else{
            Node* ptr = head;
            n->next = ptr->next;
            head = n->next;
        }
        cout << "Node has been pushed to stack" <<endl;
    }
    void pop(){
        Node* ptr = head;
        if(head == NULL){
            cout<< "Stack underflow!"<<endl;
        }else{
            ptr = ptr->next;
            head = ptr;
            ptr = head;
        }
        cout << "Item has been popped out of the stack" <<endl;
    }
    void top(){
        if(head == NULL){
            cout << "There is no node in stack" << endl;
        }else{
            Node* ptr = head;
            cout << "Element on top of the stack: " << ptr->data <<endl;
        }
    }
    void display(){
        Node* ptr = head;
        if(ptr!=NULL){
            while(ptr!=NULL){
                cout<< ptr->data <<endl;
                ptr = ptr -> next;
            }
        }else{
            cout<< "Stack is empty "<<endl;
        }
        
    }
};

int main(){
    LinkedStacks linkedstack;
    int option, data;

    do{
        cout<< "\nSelect Stack Operation to perform or 0 to quit"<<endl;
        cout<< "1. push()"<<endl;
        cout<< "2. pop()"<<endl;
        cout<< "3. top()"<<endl;
        cout<< "4. display()"<<endl;
        
        cout << "\nOption: ";
        cin>>option;

        Node* node = new Node();

        switch (option){
        case 0:
            break;
        case 1:
            cout<< "Enter data: ";
            cin>>data;
            node->data = data;
            linkedstack.push(node);
            break;
        case 2:
            linkedstack.pop();
            break;
        case 3:
            linkedstack.top();
            break;
        case 4:
            linkedstack.display();
            break;
        default:
            cout<< "Invalid input!"<<endl;
        }

    }while(option!=0);
    return 0;
}
