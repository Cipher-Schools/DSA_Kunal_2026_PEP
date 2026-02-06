// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr,int l,int h){
    int pivot=arr[h];
    int ind=l;
    for(int j=l;j<=h;j++){
        if(arr[j]<pivot){
            
            swap(arr[j],arr[ind]);
            ind++;
        }
    }
    swap(arr[ind],arr[h]);
    return ind;
}
void quicksort(vector<int>&arr,int l,int h){
    if(l<h){
    int index=partition(arr,l,h);
    quicksort(arr,l,index-1);
    quicksort(arr,index+1,h);
    }
}
int main() {
  
    vector<int>arr={2,34,6,7,2,65,7,2,5,86,18};
    quicksort(arr,0,arr.size()-1);
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    // cout<<"pivot index is "<<index;
    
}
