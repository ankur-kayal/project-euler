#include <bits/stdc++.h>
#define mod 1000000007
#define ull unsigned ll
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
#define pi acos(-1)
#define INF 100000000000
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#define F(i,a,n) for(ll i=a;i<n;i++)
#define B(i,a,n) for(ll i=n-1;i>=a;i--)

#define tc int t;cin>>t;while(t--)
#define tcf ll t;cin>>t;for(int w=1;w<=t;w++)

using namespace std;

/*
    Time Complexity : O(1) per test case
    Space Complexity : O(1) per test case

*/


int main()
{


    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    tc{
        ll n;
        cin>>n;
        ll ans=0;
        if(n%3)
        {
            ll k=n/3;
            ans+=3*((k*(k+1))/2);
        }
        else 
        {
            ll k=(n-1)/3;
            ans+=3*((k*(k+1))/2);
        }
        if(n%5)
        {
            ll k=n/5;
            ans+=5*((k*(k+1))/2);
        }
        else
        {
            ll k=(n-1)/5;
            ans+=5*((k*(k+1))/2);
        }
        if(n%15)
        {
            ll k=n/15;
            ans-=15*((k*(k+1))/2);
        }
        else 
        {
            ll k=(n-1)/15;
            ans-=15*((k*(k+1))/2);
        }
        cout<<ans<<"\n";
    }
   
    return 0;

}