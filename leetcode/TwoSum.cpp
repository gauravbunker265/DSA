#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        int rem=target-nums[i];
        if(mp.find(rem)!=mp.end()){
            return {mp[rem],i};
        }
        mp[nums[i]]=i;
    }
    return {};
}
int main(){
    vector<int> vec={1,2,4,3,5};
    twoSum(vec,5);
    cout<<twoSum(vec,5)[0]<<" "<<twoSum(vec,5)[1]<<endl;
    return 0;
}