#include <iostream>
using namespace std;
class Solution {
public:
    bool canChange(string start, string target) {
        int n = start.length();
        int i = 0;
        int j = 0;
        while(i < n || j < n) {
            while(i < n && start[i] == '_') {
                i++;
            }while(j < n && target[j] == '_') {
                j++;
            }if(i == n || j == n) {
                return i == n && j == n;
            }if(start[i] != target[j]) {
                return false;
            }if(start[i] == 'L' && i < j) {
                return false;
            }if(start[i] == 'R' && i > j) {
                return false;
            }
            i++;
            j++; 
        }
        return true;
    }
};
void res(bool x){
        if(x){
            cout<<"true"<<endl;
        }else{
            cout<<"flase"<<endl;
        }
    }
int main() {
    Solution sol;
    string start="_L__R__R_";
    string target="L______RR";
    res(sol.canChange(start,target));
    res(sol.canChange("R_L_","__LR"));
    res(sol.canChange("_R","R_"));
    

    return 0;
}