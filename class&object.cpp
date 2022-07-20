#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define sc second
#define fs first

class Student{
public:
    int rollno;
    string name;
    
    void insert(int i,string s){
        rollno=i;
        name=s;
    }
    void display(){
        cout<<rollno<<" "<<name;
    }
    
};

int main(){
    Student s1;
    s1.insert(1,"Aaditya");
    s1.display();
}
