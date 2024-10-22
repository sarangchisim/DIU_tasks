//undirected graph
#include<bits/stdc++.h>
using namespace std;

int main(){
    int vertex,edge;
    cin>>vertex;
    cin>>edge;

    vertex+=1;

    vector<vector<int>> A(vertex,vector<int>(vertex,0));

    for(int i=1;i<edge+1;i++){
        int a,b;
        cin>>a>>b;

        A[a][b]=1;
        A[b][a]=1;
    }

    cout<<endl<<"The matrix: "<<endl;

    for(int i=1;i<vertex;i++){
        for(int j=1;j<vertex;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    int flag=0;

    cout<<endl;

    for(int i=1;i<vertex;i++){
        for(int j=1;j<vertex;j++){
            if(A[i][j]==1 && flag==0){
                cout<<i<<"-->"<<j;
                flag=1;
                continue;
            }
            if(A[i][j]==1 && flag==1){
                cout<<"-->"<<j;
            }
        }
        cout<<endl;
        flag=0;
    }
    cout<<endl;

    return 0;
}