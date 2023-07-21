#include<iostream>
using namespace std;
#define size 7
class queue{
    int *arr;
    int front;
    int back;
    
    public:
    queue(){
        arr= new int [size];
        front =-1;
        back=-1;
    }

    void push(int x){
        if(back==size-1){
            cout<<"Stack is overflow"<<endl;
            return;
        }
        else{
            back ++;
            arr[back]=x;
        }

        if (front == -1){
            front ++;
        }
    }

    int pop(){
        if(front ==-1 || front > back){
            cout<<"Stack is undrflow"<<endl;
            return -1;
        }
        else{
            int x = front ;
            front ++;
            return x;
        }
    }

    int peek(){
        if(front ==-1 || front > back){
            cout<<"Stack is underflow"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
    
    bool empty(){
        if( front == -1 || front > back ){
            return true;
        }
        else {
            return false;
        }

    }
};

int main(){
    queue q;
    cout<<q.empty()<<endl;
    q.push(4);
    q.push(5);
    q.push(8);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;
    return 0;
}
