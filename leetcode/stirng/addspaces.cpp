#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    string addstring(string &s,vector<int> &spaces){
        string res="";
        res.reserve(s.size() + spaces.size());
        int spc_i=0;
        for(int i=0;i<s.length();i++){
            if(spc_i<spaces.size() && i ==spaces[spc_i]){
                res+=' ';
                spc_i++;
                
            }
            res+=s[i];
        }
        return res;
    }
};
int main(){
    solution solution;
    string s="leetcodehelpsmelearn";
    vector<int> spaces={8,13,15};
    cout<<solution.addstring(s,spaces)<<endl;
    return 0;
}