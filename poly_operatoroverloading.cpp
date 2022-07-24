#include <bits/stdc++.h>
using namespace std;
#define ll long long 

class Complex{
    private:
    int real;int img;
    public:
    Complex(int r=0,int i=0){real=r;img=i;}
    Complex operator + (Complex const &obj){
        Complex res;
        res.real=real+obj.real;
        res.img=img+obj.img;
        return res;
    }
    void print(){
        cout<<real<<"+i"<<img<<"\n";
    }
};

int main(){
    Complex c1(3,4),c2(4,3);
    Complex c=c1+c2;
    c.print();
}
