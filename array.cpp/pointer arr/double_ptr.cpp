#include<bits/stdc++.h>
using namespace std;
void changethe_addresh(int **p){
    *p+=1;
}
int main(){
    /*
    int n=10;
    cout<<"n-> "<<n<<endl;
    int *p=&n;  //single ptr
    cout<<"p-> "<<*p<<endl;
    int **p2=&p; //double ptr
    int ***p3=&p2; //triple ptr
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<&p2<<endl;
    cout<<p3<<endl;
    cout<<&p3<<endl;

    //value ko midify karna ho,jo n ma rkhi hai..
    //single ptr
    *p=*p+5;
    cout<<"*p-> "<<*p<<endl;
    cout<<"n-> "<<n<<endl;

    //double ptr
    **p2=**p2+5;
    cout<<"**p2-> "<<**p2<<endl;
    cout<<"n-> "<<n<<endl;

    //triple ptr
    ***p3=***p3+5;
    cout<<"***p3-> "<<***p3<<endl;
    cout<<"n-> "<<n<<endl;
    */

   //wecan change addresh
   int x=5;
   int *p=&x;
   int **p1=&p;
   cout<<*p<<endl;
   cout<<p<<endl;
   changethe_addresh(p1);
   cout<<p<<endl;

    return 0;
}