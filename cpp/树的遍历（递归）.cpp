#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,a[N];
void dfs(int x){
    if(x>n||!a[x])return;
    dfs(x<<1);
    dfs(x<<1|1);
    cout<<a[x]<<" ";//先序中序后序只需将这条语句调整位置即可
}//递归
void bfs(int x){
    queue<int>q;
    q.push(x);
    while(!q.empty()){
        int t=q.front();q.pop();
        if(t>n||!a[t])continue;
        cout<<a[t]<<" ";
        q.push(t<<1);
        q.push(t<<1|1);
    }
}//层序
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    dfs(1);
    puts("");
    bfs(1);
    return 0;
}
/*
7
3 9 20 0 0 15 7

3 9 20 15 7
9 3 15 20 7 
9 15 7 20 3
*/