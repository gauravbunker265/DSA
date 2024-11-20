#include<bits/stdc++.h>
using namespace std;
int sec_large_ele(vector<int> vec){
    int largest=INT_MIN,sec_largest=INT_MIN;
    for(auto num : vec){
        if(num>largest){
            sec_largest=largest;
            largest=num;
        }
        else if(num<largest&&sec_largest<num){
            sec_largest=num;
        }
    }
    return (sec_largest==INT_MIN) ? -1: sec_largest;
}
int main(){
    vector<int> vec={1,2,4,2,34,5,5};
    cout<<sec_large_ele(vec);
    
}