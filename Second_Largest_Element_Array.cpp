#include<iostream>
using namespace std;
int main(){
    int arr[6]={3,5,7,8,9,10};
    int largest = arr[0];
int second_largest = -1;
for(int i = 0;i<6;i++){
    if(arr[i]>largest){
        second_largest = largest;
        largest = arr[i];

    }
    else if(arr[i]<largest && arr[i]>second_largest){
        second_largest = arr[i];
    }
}
cout<<"Second largest element is:" <<second_largest<<endl;
return 0;}