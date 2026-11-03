#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,en,a[N];
void up(int x){
    if(x>1&&a[x]<a[x/2]){
        swap(a[x],a[x/2]);
        up(x/2);
    }
}
void down(int x){
    int t=x;
    if(x*2<=en&&a[x*2]<a[t])t=x*2;
    if(x*2+1<=en&&a[x*2+1]<a[t])t=x*2+1;
    if(t!=x){
        swap(a[x],a[t]);
        down(t);
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)up(i);
    en=n;
    for(int i=1;i<=n;i++){
        cout<<a[1]<<" ";
        swap(a[1],a[n-i+1]),--en;
        down(1);
    }
    return 0;
}