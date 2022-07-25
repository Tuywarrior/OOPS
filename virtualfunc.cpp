#include <bits/stdc++.h>
using namespace std;
#define ll long long 

class base{
    public:
    virtual void print(){
        cout<<"BASE class"<<endl;
    }
    void show(){
        cout<<"BASE class"<<endl;
    }
};

class derived:public base{
    public:
    void print(){
        cout<<"Dervied class"<<endl;
    }
    void show(){
        cout<<"Derived class"<<endl;
    }
};

int main(){
    base *b;
    derived d;
    b=&d;
    b->print();
    b->show();
}
