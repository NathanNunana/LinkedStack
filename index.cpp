#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> numbers = {1, 2, 3, 4, 5}; 
    int size = numbers.size();
    int loc = 2;

    if(5 > size){
        cout<< "Array is full"<<endl;
    }else{
        int i = size;
        do{
            size++;
            i = size;
            numbers[i] = numbers[i-1];
            i--;
        }while(loc<i);
        numbers[loc] = 6;
    }
    for(int i = 0; i < size; i++){
        cout<< numbers[i] <<endl;
    }
    return 0;
}