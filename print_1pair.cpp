#include<iostream>
using namespace std;
int main(){
    string s = "01011101111";
    int count = 0,maxcount = 0;
    for(int i = 0;i<s.length();i++){
        if(s[i]=='1'){
            count++;
            if(count>maxcount)
                maxcount = count;

            }
            else{
                count = 0;
            }
        }
        cout<<maxcount;
    
    return 0;}
