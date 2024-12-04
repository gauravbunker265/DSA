#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n){
   int low=0,mid=0,high=n-1;
   while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++,mid++;
        }else if(arr[mid]==1){
            mid++;
        }else if (arr[mid] == 2) {
                swap(arr[mid], arr[high]);
                high--;
        }else{
            mid++;
        }
    }
    stable_partition(arr, arr + n, [](int x) { return x <= 2; });
}
int main(){
    int n=17;
    int arr[]={0,3,4,2,1,0,2,4,5,6,1,2,1,2,0,0,0};
    sort012(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}