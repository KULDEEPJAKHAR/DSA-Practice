#include<iostream>
using namespace std;
int main(){
    int arr[6] = {6,12,-2,-5,0,7};
    int size = 6;
    int smallest = INT_MAX;
    for(int i  = 0;i<size;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }}
        cout<<"smallest"<<smallest<<endl;
    
    return 0;
}