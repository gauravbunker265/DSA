#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;
    int ** arr= new int *[row];
    for(int i=0;i<row;i++){
        arr[i]=new int [col];
    }

    //taking i/p
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //memory releasing
    for(int i=0;i<row;i++){
        delete[] arr[i];
    }
    delete[] arr;


/*  //n*n matrix //
    // create 2d array
    int n;
    cin>>n;
    int **arr =new int *[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    //creation done 

    //taking i/p
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
*/

    return 0;
}