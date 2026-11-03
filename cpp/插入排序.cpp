#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,a[N];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        int j=i-1,x=a[i];
        while(j>0&&a[j]>x){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    return 0;
}