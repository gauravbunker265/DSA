#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> gender={"male","male","female","others","female","female","male",        "female","others","others","nonbinary","nonbinary","female"};
    map<string,int> gender_code={
        {"male",0},
        {"female",1},
        {"others",2},
        {"nonbinery",3}
    };
    for(auto it: gender){
        cout<<it<<" "<<gender_code[it]<<endl;
    }

    return 0;
}