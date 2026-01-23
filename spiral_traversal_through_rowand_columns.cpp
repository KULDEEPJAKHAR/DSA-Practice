#include<iostream>
using namespace std;
int main(){
int matrix[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}}
    ;
    int top = 0;
    int bottom = 2;
    int left = 0;
    int right = 2;
    while(top<=bottom&&left<=right){
//left to right
        for(int i = left;i<=right;i++){
            cout<<matrix[top][i]<<" ";}
            top++;
        
        for(int i = top;i<=bottom;i++){
            cout<<matrix[i][right]<<" ";}
            right--;
            
//right to left
        if(top<=bottom){
            for(int i = right;i>=left;i--){
                cout<<matrix[bottom][i]<<" ";}
                bottom--;
        }
//bottom to top
        if(left<=right){
            for(int i = bottom;i>=top;i--){
                cout<<matrix[i][left]<<" ";
            }
            left++;
            }
        }

        return 0;
        
        }

    