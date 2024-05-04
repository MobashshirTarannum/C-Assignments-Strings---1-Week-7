//Q->2  Input a string of length n and count all the consonants in the given string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    int count=0;
    string s;
    getline(cin,s);
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        count++;
    }
    cout<<count;
}