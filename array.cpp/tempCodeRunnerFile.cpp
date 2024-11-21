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
        if(j-i+1<k) j++;
        else if(j-i+1<k){
            sum+=nums[j];
            sum-=nums[i-1];
            i++,j++;
        }
        else{
            sum+=nums[j++];
        }
        maxi=max(maxi,sum);
        mini=min(mini,sum);
    }
    cout<<"min ele -->"<<mini<<endl;
    cout<<"max ele -->"<<maxi<<endl;
    return 0;
}