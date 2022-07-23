#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define sc second
#define fs first

class Animal{
    public:
    void eat(){
        cout<<"eating"<<" ";
    }
};

class Dog:public Animal{
    public:
    void bark(){
        cout<<"barking"<<" ";
    }
};

class babydog:public Dog{
    public:
    void weep(){
        cout<<"weeping"<<" ";
    }
};

int main(){
    babydog b1;
    b1.eat();
    b1.bark();
    b1.weep();
}

