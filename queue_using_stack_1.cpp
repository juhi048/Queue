#include "bits/stdc++.h"
using namespace std;
class que{
    stack <int> s1;
    stack <int> s2;

    public:
    void push(int x){
        s1.push(x);
    }

    int pop(){
        if(s1.empty() and s2.empty()){
            cout<<"Stack are empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        
            int topval =s2.top();
            s2.pop();
            return topval;
        
        
    }

    bool empty(){
        if(s1.empty() and s2.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    que q;
    cout<<q.empty()<<endl;
    q.push(6);
    q.push(4);
    q.push(8);
    cout<<q.empty()<<endl;
    cout<<q.pop()<<endl;
    
 
return 0;
}
