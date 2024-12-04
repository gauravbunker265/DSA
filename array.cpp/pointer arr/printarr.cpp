#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,6};
    // int * ptr=arr;
    // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        /*cout<<*ptr<<" ";              ///sare element print
        ptr++;*/        
        // cout<<ptr[i]<<" ";           ///sare element print
        // cout<<*(ptr+i)<<" ";         ///sare element print
        // cout<<*(arr+i)<<" ";         ///sare element print
        // cout<<*&arr[i]<<" ";         ///sare element print
        //  cout<<&arr[i]<<" ";         ///sare element ke addresh print
        //  cout<<*(&arr+i)<<" ";       ///sare element ke addresh print
        //  cout<<&arr+i<<" ";          ///sare element ke addresh print
        // cout<<&*(arr+i)<<" ";        ///sare element ke addresh print                    
        // cout<<ptr+i<<" ";            ///sare element ke addresh print
    // }
        int *ptr=arr+6;
        // cout<<*ptr<<" ";
        for(int i=0;i<7;i++){
            cout<<*ptr--<<" ";
        }
    return 0;
}