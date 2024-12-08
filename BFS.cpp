#include<bits/stdc++.h>
 using namespace std;
 struct Node
 {
    int data;//node representation
    struct Node * left;
    struct Node * right;
    Node(int val){
        data=val;
        left=right=NULL;//constructor
    }
 };
 void BFS(int i){
    cout<<i;
        vector<int>vis(-1);
    vis[i]=1;
    int n;
    queue<int>q;
    q.push(i);
    while(!q.empty()){
        int u= q.pop();
        for(int v=1;v<=n;v++){
            if(adj[u][v]==1 && visited[v]==0){
                cout<<v;
                visited[v]=1;
                q.push(v);
            }
        }

    }

 }
 
 int main(){
    Node * root=new Node(1);
    root->left=new Node(4);
    root->right=new Node(2);
    root->left->left=new Node(6);
    root->left->right=new Node(5);
    root->right->left=new Node(3);
    root->right->right=new Node(7);
    vector<vector<int>>adj;
    BFS(root->data);
return 0;
}