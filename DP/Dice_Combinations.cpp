#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

void build_dp(int n,vector<long> &z){
    for(int i=7;i<=n;i++){
        for(int j=1;j<=6;j++)
            z[i]+=z[i-j];
        z[i]%=mod;
    }
}

int main(){
    int n;cin>>n;
    vector<long> z(n+1,0);
    z = {1,1,2,4,8,16,32};
    build_dp(n,z);
    cout<<z[n]<<"\n";
}