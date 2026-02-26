// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int  n;
    cout<<"Enter No. of Nodes"<<endl;
    cin>>n;
    vector<vector<int>>adj(n);
    for(int i=0;i<n;i++){
        int m;
        cout<<"Enter no. of Nodes connected to node "<<i<<endl;
        cin>>m;
        cout<<"Enter connected Nodes "<<endl;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            adj[i].push_back(x);
        }
    }
    for(int i=0;i<n;i++){
        cout<<i<<"-> ";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<", ";
        }
        cout<<endl;
    }

    return 0;
}
