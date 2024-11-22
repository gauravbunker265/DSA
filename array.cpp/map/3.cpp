#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> reletion={"Single", "Married", "Divorced", "Widowed","Single", "Married","Divorced","Divorced" };
    map<string,int> relation_code={
        {"Single",0},
        {"Married",1},
        {"Divorced",2},
        {"Widowed",3}
    };
    for(auto it: reletion){
        cout<<it<<"------> "<<relation_code[it]<<endl;
    }
    return 0;
}