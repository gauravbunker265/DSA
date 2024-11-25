#include<bits/stdc++.h>
using namespace std;

int GDC(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int LCM(int a,int b){
    return (a*b)/GDC(a,b);
}
int main(){
    int a,b;
    cout<<"enter the value of a and b : ";
    cin>>a>>b;
    cout<<"LCM is : "<<LCM(a,b)<<endl;
    cout<<"GCD is : "<<GDC(a,b)<<endl;
    
    return 0;
}