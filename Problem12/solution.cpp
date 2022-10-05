/*
    Time Complexity : O(5000) for precomputing + O(1) per test case
    Auxiliary Space Complexity : O(1000)
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	int t;
	cin>>t;
	int x=1,cur=0;
	vector<int> ans(1000,INT_MAX);
	while(x<=50000){
		cur+=x;
		int cnt=0;
		for(int i=1;i*i<=cur;i++){
			if(cur%i==0){
				if(cur/i==i){
					cnt++;
				}
				else{
					cnt+=2;
				}
			}
		}
		for(int i=cnt-1;i>=1;i--){
			ans[i]=min(ans[i],cur);
		}
		x++;
	}
	
	while(t--){
		int n;
		cin>>n;
		cout<<ans[n]<<endl;
	}
    return 0;
}