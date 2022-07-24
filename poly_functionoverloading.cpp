#include <bits/stdc++.h>
using namespace std;
#define ll long long 

class Geeks{
    public:
    void func(int x){
        cout<<x<<"\n";
    }
    void func(double x){
        cout<<x<<"\n";
    }
    void func(int x,int y){
        cout<<x*y<<"\n";
    }
};

int main(){
    Geeks g1;
    g1.func(6);
    g1.func(3.14);
    g1.func(3,2);
}
