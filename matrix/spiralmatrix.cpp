#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        vector<int > spiralmat(vector<vector<int>> &matrix,int down,int right){
            if(matrix.size()==0){
                return {};
            }
            int top=0;
            down-=1;
            int left=0;
            right-=1;
            vector<int> res;
            int direction=0;
            while(top<=down&&left<=right){
                if(direction==0){
                    for(int i=left;i<=right;i++){
                        res.push_back(matrix[top][i]);
                    }
                    top++;
                }
                else if(direction==1){
                    for(int i=top;i<=down;i++){
                        res.push_back(matrix[i][right]);
                    }
                    right--;
                }
                else if(direction==2){
                    for(int i=right;i>=left;i--){
                        res.push_back(matrix[down][i]);
                    }
                    down--;
                }
                else if(direction==3){
                    for(int i=down;i>=top;i--){
                        res.push_back(matrix[i][left]);
                    }
                    left++;
                }
                direction++;
                if(direction>3)
                direction=0;
            }

            return res;
        }
};
int main(){
    solution solution;
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    int rows= matrix.size();
    int cols=matrix[0].size();
    vector<int> res=solution.spiralmat(matrix,rows,cols);
    for(auto it : res){
        cout<<it<<" ";
    }
    
}