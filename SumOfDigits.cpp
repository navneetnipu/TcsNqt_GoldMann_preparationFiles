// Program for Sum of the digits of a given number
#include<bits/stdc++.h>
using namespace std;
void SumOfDigits(int num,int sum){
    int Q;
    Q=num/10;
    if(Q!=0){
        sum=sum+(num%10);
        num=num/10;
        SumOfDigits(num,sum);
    }
    else{
        sum=sum+num;
        cout<<sum<<endl;
    }
    
}
int main(){
    int num;
    cout<<"enter the integer number:"<<endl;
    cin>>num;
    SumOfDigits(num,0);
    return 0;
}