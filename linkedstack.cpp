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
        int val;
        if(head == NULL){
            head = n;
        }else{
            n->next = head;
            head = n->next;
        }
    }
    int pop(){
        int val;
        if(head == NULL){
            val = 0;
        }else{
            val = head->data;
            head = head -> next;    
        }
        return val;
    }
    int top(){
        int val;
        if(head == NULL){
            val = 0;
        }else{
            val = head->data;
        }
        return val;
    }
    void display(){
        Node* ptr = head;
        if(head!=NULL){
            while(head!=NULL){
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
    int option, dta;

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
            cout<<"Push operation\n"<< "Enter data: ";
            cin>>dta;
            node->data = dta;
            linkedstack.push(node);
            cout << "Node pushed to stack" <<endl;
            break;
        case 2:
            cout<<"Pop operation\n"<<endl;
            if(linkedstack.pop()==0){
                cout<<"Stack underflow!!"<<endl;
            }else{
                cout <<"Element poped from stack: "<< linkedstack.pop() <<endl;
            };
            break;
        case 3:
            cout<<"Top operation\n"<<endl;
            if(linkedstack.top()==0){
                cout<<"Stack is Empty"<<endl;
            }else{
                cout<< "Element on top of the stack: " << linkedstack.top() <<endl;
            }
            break;
        case 4:
            cout << "List of nodes in the Stack"<<endl;
            linkedstack.display();
            break;
        default:
            cout<< "Invalid input!"<<endl;
        }

    }while(option!=0);
    return 0;
}
