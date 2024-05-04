// Q->1 Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
// 0-based indexing.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0; s[i]!='\0'; i++){
        if(i%2!=0)
        s[i]='#';
    }
    cout<<s;
}