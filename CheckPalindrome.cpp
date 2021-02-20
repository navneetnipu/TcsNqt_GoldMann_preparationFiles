// C Program to Check if a Given String is Palindrome
#include<bits/stdc++.h>
using namespace std;
void IsPalindrome(string s,int start,int end){
    if(start<end){
        if(s[start]!=s[end]){
            cout<<"Not a palindrome!"<<endl;
            return;
        }
        else{
            start+=1;
            end-=1;
            IsPalindrome(s,start,end);
        }
    }
    else
        cout<<"Palindrome!"<<endl;

}
int main(){
    string s;
    cout<<"enter the string:"<<endl;
    cin>>s;
    IsPalindrome(s,0,s.length()-1);
    return 0;
}