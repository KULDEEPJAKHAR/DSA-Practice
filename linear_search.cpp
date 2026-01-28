#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int target){
    for(int i = 0;i<size;i++){
        if(arr[i] == target){
            return 1;
        }
    }
    return -1;

}
int main(){
int arr[6] ={3,5,6,8,9,2};
int size = 6;
int target = 8;
cout<<linearSearch(arr,size,target)<<endl;
return 0;
}