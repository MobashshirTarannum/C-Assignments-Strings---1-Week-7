 //Q->5 Input a string of length less than 10 and convert it into integer without using builtin function.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int num = 0; 
    int n = s.length(); 
    for (int i = 0; i < n; i++) {
        num = num * 10 + (int(s[i]) - 48); 
    }
    cout << num; 
} 
