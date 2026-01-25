#include<iostream>
using namespace std;
int  calculateSum(int n){
    int sum = 0;
    for(int i = 1;i<n;i++){
        sum+=i;

    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter a number to print its sum from 1 to n: "<<endl;
    cin>>n;
    
    
    cout<<calculateSum(n)<<endl;
    return 0;
}

