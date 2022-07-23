#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define sc second
#define fs first

class Account{
    public:
    float salary=6000;
};

class bonus:public Account{
    public:
    float bon=5000;
};

int main(){
    bonus a;
    cout<<a.salary+a.bon<<" ";
}

