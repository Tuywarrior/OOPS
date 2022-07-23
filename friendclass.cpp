#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define sc second
#define fs first

class Box{
    private:
    int len;
    public:
    Box():len(0){};
    friend int findlen(Box);
};
int findlen(Box b){
    b.len+=10;
    return b.len;
}

int main(){
    Box b;
    cout<<findlen(b);
}

