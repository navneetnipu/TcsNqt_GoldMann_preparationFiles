// reverse array without extra space 
#include<bits/stdc++.h>
using namespace std;
void ReverseArray(vector<string> array ,int start,int end){
    string tmp;
    if(start >= end){
       for(int i=0;i<array.size();i++){
           cout<<array[i]<<" ";
       }
        return;
    }
    tmp = array[end];
    array[end]=array[start];
    array[start]=tmp;
    ReverseArray(array,start+1,end-1);
}
void printFunction(vector<string> array,int size){
    int i=0;
    while(i< size){
        cout<<array[i]<<" ";
        i++;
    }
}
int main(){
    vector<string> array;
    string s;
    while(cin>>s && s != "null"){
        array.push_back(s);
    }
    ReverseArray(array,0,array.size()-1);
    return 0;
}