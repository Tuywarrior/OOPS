#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define sc second
#define fs first

class String{
    private:
    int size;
    string s;
    public:
    String(string s1){
        s=s1;
        size=s1.length();
    }
    void change(string s2){
        s=s2;
    }
    void display(){
        cout<<s<<" ";
    }
    
    
};

int main(){
    String str1("Hello");
    str1.display();
    String str2(str1);
    str2.change("World");
    str2.display();
}
