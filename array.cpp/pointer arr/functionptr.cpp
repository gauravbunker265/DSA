#include<bits/stdc++.h>
using namespace std;
void inc(int *n){
    *n+=1;
    cout<<*n<<endl;
    
}
void doub(int *arr,int n){
    for(int i=0;i<n;i++){
        arr[i]=2*arr[i];
    }
}
void swapping(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main(){
    // int num=5;
    // cout<<num<<endl;
    
    // inc(&num);
    // cout<<num<<endl;


    // int n=5;
    // int arr[n]={1,2,3,4,5};
    // doub(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // int first=5,second=20;
    // cout<<first<<" "<<second<<endl;
    // swapping(&first,&second);
    // cout<<first<<" "<<second<<endl;
    
    return 0;
}