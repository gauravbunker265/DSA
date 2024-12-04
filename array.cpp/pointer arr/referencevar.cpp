#include<bits/stdc++.h>
using namespace std;
//reference ka mean ek hi chij ko anek namo se janna
void fn(int &n){
    n++;
}
int main(){
    int num=10;
    cout<<num<<endl;
    fn(num);
    cout<<num<<endl; 
    return 0;
}