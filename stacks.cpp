#include <iostream>
using namespace std;

class Stack{
private:
    int arr[5];
    int pos = sizeof(arr)/sizeof(arr[0]);
public:
    Stack(){
        for(int i=0; i<5;i++) arr[i] = 0;
    }
    bool isEmpty(){
        if(pos == 5)return true;
        return false;
    }
    bool isFull(){
        if(pos == 0)return true;
        return false;
    }
    void pop(){
        if (isEmpty()) {
            cout << "There is no element in the array!" << endl;
        }else{
            cout << arr[pos] <<endl;
        }
    }
    void push(int val)
    {    
        if(isFull()){
            cout<< "Stack is Full!"<<endl;
        }else{
            pos--;
            arr[pos] = val;
        }
    }

    void top(){
        if (isEmpty()) {
            cout << "Stack is Empty!" <<endl;
        }else{
            cout<< "The element on top of the stack is: " <<arr[pos] <<endl;
        }
    }

    void display(){
        for(int i=0; i<5; i++){
            if(arr[i]==0) {
                cout<< "";
            }else{
                cout<< arr[i] << endl;
            }
        }
    }
};

int main()
{
    Stack stack;
    stack.push(7);
    stack.push(5);
    stack.push(4);
    stack.push(4);
    stack.push(4);
    stack.display();
    if(stack.isEmpty()){
        cout<< "Stack is Empty" <<endl;
    } 
    
    return 0;
}