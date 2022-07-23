#include <bits/stdc++.h>
using namespace std;
#define ll long long 

class Shape{
    public:
    int a;
    int b;
    void get(int n,int m){
        a=n;
        b=m;
    }
};

class Rectangle:public Shape{
    public:
    void getans(){
        cout<<"Area of Rectangle is:"<<a*b<<"\n";
    }
};
class Triangle:public Shape{
    public:
    void getans(){
        cout<<"Area of Triangle is:"<<0.5*a*b<<"\n";
    }
};

int main(){
    Rectangle r;
    Triangle t;
    int n=10,m=20;
    r.get(n,m);
    r.getans();
    t.get(n,m);
    t.getans();
}
