#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,a[N],b[N];
void merge(int l,int r){
    if(l>=r)return;
    int mid=l+r>>1;
    merge(l,mid),merge(mid+1,r);
    int ll=l,rr=mid+1,t=0;
    while(ll<=mid&&rr<=r){
        if(a[ll]<=a[rr])b[++t]=a[ll++];
        else b[++t]=a[rr++];
    }
    if(ll<=mid)for(;ll<=mid;ll++)b[++t]=a[ll];
    if(rr<=r)for(;rr<=r;rr++)b[++t]=a[rr];
    for(int i=1;i<=t;i++)a[l+i-1]=b[i];
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    merge(1,n);
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    return 0;
}