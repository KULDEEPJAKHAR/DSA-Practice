#include<iostream>
using namespace std;
int main(){
    string s = "010011011101";
    int j = 0;
    for(int i = 0;i<s.length();i++){
        if(s[i]=='1'){
            s[j]='1';
            j++;

        }
    }
    while(j<s.length()){
        s[j]='0';
        j++;

    }
    cout<<"Result :"<<s;
    return 0;
}