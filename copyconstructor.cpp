#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define sc second
#define fs first

class Point{
    private:
    int x,y;
    public:
    
    Point(int a,int b){
        x=a;
        y=b;
    }
    Point(const Point &p1){
        x=p1.x;
        y=p1.y;
    }
    int getx(){return x;}
    int gety(){return y;}
};

int main(){
    Point p1(10,15);
    Point p2(p1);
    cout<<p2.getx();
    cout<<p2.gety();
}
