/*
    Time Complexity : O(NlogN + N) Precomputing + O(1) per test case
    Auxiliary Space Complexity : O(N) 
*/
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
#define ll 			long long
const ll N=(ll)(1000000);
unordered_map<ll,ll> m;
vector<pair<ll,ll> > ans(N+5,{0,0});
ll fun(ll n){
	if(n==1){
		return 0;
	}
	if(n>3*N && n%2==0){
		return 1+fun(n/2);
	}
	if(m.count(n)){
		return m[n];
	}
	if(n%2==0){
		return m[n]=1+fun(n/2);
	}
	return m[n]=1+fun((ll)(3*n+1));
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	m[1]=0;
	for(int i=N;i>=2;i--){
		if(!m.count(i)){
			fun(i);
		}
	}
	for(int i=1;i<=N;i++){
		if(m[i]>=ans[i-1].second){
			ans[i].first=i;
			ans[i].second=m[i];
		}
		else{
			ans[i].first=ans[i-1].first;
			ans[i].second=ans[i-1].second;
		}
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<ans[n].first<<endl;
	}
    return 0;
}