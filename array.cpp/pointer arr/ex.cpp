#include<bits/stdc++.h>
using namespace std;
void fun(int *p1,int *p2){
    p1=p2;
    *p2+=2;
}
int main(){
    /*
    int n=5,m=6;
    int *p1=&n;
    int *p2=&m;
    fun(p1,p2);
    cout<<*p1<<" "<<*p2<<endl;
    */

    int a=5,b=10;
    int &name=a;
    int *ptr=&a;
    (*ptr)++;
    ptr=&b;
    *ptr=*ptr+5;
    name+=5;
    cout<<a<<" "<<b<<endl;

    
    /*char c[]="GATE2024";
    char *p=c;
    cout<<p+p[3]-p[1];
    return 0;*/
}