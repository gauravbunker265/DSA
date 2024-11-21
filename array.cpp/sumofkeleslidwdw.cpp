#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4,5};
    int n=nums.size();
    int k=3;
    int sum=0;
    int i=0,j=0;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    while(j<n){
        sum+=nums[j];
        
        if(j-i+1==k){
            maxi=max(maxi,sum);
            mini=min(mini,sum);
            i++;
        }
        j++;
        
    }
    cout<<"min ele -->"<<mini<<endl;
    cout<<"max ele -->"<<maxi<<endl;
    return 0;
}