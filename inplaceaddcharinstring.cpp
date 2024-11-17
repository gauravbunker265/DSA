#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="leetcode is a coding plateform";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            str.replace(i, 1, "@40");
            i+=3;
        }
    }
    for(auto it: str){
        cout<<it<<" ";
    }
    return 0;
}