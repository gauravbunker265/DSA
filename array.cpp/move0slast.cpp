#include<bits/stdc++.h>
using namespace std;
void move_zeros(vector<int> &vec){
    int i=0,j=0;
    while(j<vec.size()){
        if(vec[j]!=0){
            swap(vec[i],vec[j]);
            i++;
        }
        j++;
    }   
}
int main(){
    vector<int> vec={3,5,0,0,4};
    move_zeros(vec);
    for(auto it : vec){
        cout<<it<<" ";
    }  
}