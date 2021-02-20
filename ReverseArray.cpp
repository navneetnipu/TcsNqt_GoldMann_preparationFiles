/*
Write a program to reverse an array or string.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> array,reverse;
    int i;
    cout<<"enter the elements of the array:"<<endl;
    while(cin>>i){
        array.push_back(i);
    }
    i=0;
    while(i < array.size()){
        reverse.push_back(array[array.size()-1-i]);
        cout<<reverse[i]<<" ";
        i++;
    }
}
