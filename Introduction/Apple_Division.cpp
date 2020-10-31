#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<=b;i++)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ZERO(box) memset(box, 0, sizeof(box));
#define pb push_back
#define chkbit(s, b) (s & (1<<b))
typedef long long ll;
typedef pair<int,int> pi;
typedef vector<long long> vi;
const int mod=1e9+7;

int main(){
	int n;cin>>n;
	vi nums;
	ll t;
	ll mxsum=0;
	rep(i,1,n){
		cin>>t;
		mxsum += t;
		nums.pb(t);
	}
	map<long long, bool> soms, csums;
	soms[0]=0;
	for(auto val:nums){
		csums = soms;
		for(auto it: csums){
			soms[it.first+val] = 1;
		}
	}
	ll ans = mxsum;
	for(auto it:soms){
		ans = min(ans , abs(mxsum - 2*it.first));
	}
	
	cout<<ans;
	
}