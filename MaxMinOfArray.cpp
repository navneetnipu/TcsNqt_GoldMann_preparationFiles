// Maximum and minimum of an array using minimum number of comparisons
#include<bits/stdc++.h>
using namespace std;
int MaxElement(vector<int> arr){
    int max=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int MinElement(vector<int> arr){
    int min=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    vector<int> array;
    int n;
    int max,min;
    cout<<"enter the integer array:"<<endl;
    while(cin>>n){
        array.push_back(n);
    }
    max=MaxElement(array);
    min=MinElement(array);
    cout<<"Max element is:"<<max <<endl<<"min element is:"<<min<<endl;
    return 0;
}