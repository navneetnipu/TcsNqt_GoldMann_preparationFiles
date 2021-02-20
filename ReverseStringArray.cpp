/*
Write a program to reverse an array of string.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> array,reverse;
    string s;
    cout<<"enter the string array:"<<endl;
    while(cin>>s && (s != "0")){
        array.push_back(s);
    }
    for(int i=0;i<array.size();i++){
        reverse.push_back(array[array.size()-1-i]);
        cout<<reverse[i]<<" ";
    }
}