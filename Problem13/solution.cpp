/*
    Time Complexity : O(50*N) per test case
    Auxiliary Space Complexity : O(50*N) per test  case
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+1][51];
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		reverse(s.begin(),s.end());
		for(int j=1;j<=50;j++){
			a[i][j]=(s[j-1]-'0');
		}
	}
	vector<int> ans(55,0);
	int carry=0;
	int j;
	for(j=1;j<=50;j++){
		int sum=carry;
		for(int i=1;i<=n;i++){
			sum+=a[i][j];
		}
		
		ans[j]=sum%10;
		carry=sum/10;
	}
	while(carry){
		ans[j++]=carry%10;
		carry/=10;
	}
	int cnt=10;
	while(cnt--){
		cout<<ans[--j];
	}
    return 0;
}