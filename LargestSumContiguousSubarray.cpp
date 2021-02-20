// Largest Sum Contiguous Subarray  ** KADANES ALGORITHM ** 
#include<bits/stdc++.h>
using namespace std;
void MaxContiguousSum(vector<int> array){
    int MaxSoFar=0,MaxEndingHere=0;
    int start=0,end=0,s=0;
    for(int i=0;i<array.size();i++){
        MaxEndingHere+=array[i];
        if(MaxSoFar < MaxEndingHere){
            MaxSoFar = MaxEndingHere;
            start=s;
            end=i;

        }
        else if(MaxEndingHere < 0){
            MaxEndingHere=0;
            s=i+1;
        }
    }
    cout<<start<<":"<<end<<endl;
    cout<<"max contiguous sum is:"<<MaxSoFar<<endl;
    cout<<"the maximum contiguous sum subarray is :"<<endl;
    for(int i=start;i<=end;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    cout<<"enter the array element:"<<endl;
    int num;
    vector<int> array;
    while(cin>>num){
        array.push_back(num);
    }
    MaxContiguousSum(array);
    return 0;
}