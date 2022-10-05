#include<bits/stdc++.h>
#define ll long long 
#define mp make_pair
#define pb push_back
using namespace std;

/*
    Time Complexity : O(NlogN)
    Space Complexity : O(1)

*/

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll res=1;
        for(ll i=2;i<=n;i++)
        {
            res=(res*i)/(__gcd(res,i));
        }
        cout<<res<<"\n";
    }
    return 0;
}