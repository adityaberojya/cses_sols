#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n;cin>>k>>n;
    int p = INT_MAX;
    vector<long long> z(n+1,p),c(k);
    for(int j=0;j<k;j++)
        cin>>c[j];
    sort(c.begin(),c.end());
    z[0]=0;
    for(int j=0;j<k;j++)
        for(int i=1;i<=n;i++)
            if(i-c[j]>=0)
                z[i] = min(z[i],z[i-c[j]]+1);
    for(auto it:z) cout<<it<<" ";
    if(z[n]==p) cout<<"-1\n";
    else cout<<z[n]<<"\n";
}