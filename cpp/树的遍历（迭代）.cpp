#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;   
int n,a[N],st[N],top;
void print1(int x){
    top=0;
    st[++top]=x;
    while(top){
        int x=st[top--];
        if(x>n||!a[x])continue;
        cout<<a[x]<<" ";
        st[++top]=x<<1|1;
        st[++top]=x<<1;
    }
}   
void print2(int x){
    top=0;
    while(x<=n&&a[x]||top){
        while(x<=n&&a[x]){
            st[++top]=x;
            x<<=1;
        }
        x=st[top--];
        cout<<a[x]<<" ";
        x=x<<1|1;
    }
}
void print3(int x){
    stack<int> ans;
    top=0;st[++top]=x;
    while(top){
        int x=st[top--];
        if(x>n||!a[x])continue;
        ans.push(a[x]);
        st[++top]=x<<1;
        st[++top]=x<<1|1;
    }
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    print1(1);puts("");
    print2(1);puts("");
    print3(1);
    return 0;
}