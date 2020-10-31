#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<=b;i++)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ZERO(box) memset(box, 0, sizeof(box));
#define pb push_back
#define chkbit(s, b) (s & (1<<b))
typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
const int mod=1e9+7;

int main(){
	ll n;cin>>n;
    vector<ll> tots(n+1,0), kill(n+1,0);
    ll sq;
    rep(i,1,n){
        sq = i*i;
        tots[i] = (sq*(sq-1))/2;
    }
    
    rep(i,3,n) kill[i] = 8*(i-2) + kill[i-1];
    
    rep(i,1,n) cout<<tots[i]-kill[i]<<"\n";
}