#include<bits/stdc++.h>
using namespace std;
int main(){
    //for variable 
    int *ptr=new int;
    cout<<ptr<<endl;
    cout<<*ptr<<endl; //garbage value
    *ptr=5;         //value assign
    cout<<*ptr<<endl;

    float* ptr1 = new float;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
    *ptr1=10.4;
    cout<<*ptr1<<endl;

    int n;
    cout<<"enter the size of arr : ";
    cin>>n;
    int *ptr2=new int[n];

    for(int i=0;i<n;i++){
        ptr2[i]=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<ptr2[i]<<" ";
    }
    cout<<endl;
    cout<<*ptr<<endl;
    delete ptr;
    cout<<*ptr<<endl;
    delete ptr1;
    delete[] ptr2;
    return 0;
}