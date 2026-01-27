
#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>&arr,int target){
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        
        int mid=low+(high-low)/2;
        // We uses this instead of (high+low)/2 to prevent integer overflow
        if(arr[mid]>target){
            high=mid-1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else return mid;
    }
    return -1;
}
int main() {
    
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int>arr;
    
    cout<<"Input array elements in sorted order"<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    
    cout<<"enter the target"<<endl;
    int target;
    cin>>target;
    
    int position=binarysearch(arr,target);
    
    if(position==-1){
        cout<<"Target is not present in array";
    }
    
    else {
        cout<<"Target found at "<<position<<" index";
    }
    
    return 0;
}
