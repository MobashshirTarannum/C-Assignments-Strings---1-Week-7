//Q->3  Check whether the given string is palindrome or not.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string x = s;
    reverse(s.begin(),s.end());
    if(x==s) cout<<"palindrome";
    else{
        cout<<"not";
    }
    
}