#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
    Time Complexity : O(1) per test case
    Space Complexity : O(1) per test case
*/

int main() {

    ll t;
    cin>>t;
    while(t--)
    { 
        ll n;
        cin>>n;
        ll res=(n*(n+1)*(2*n+1))/6;
        ll yes=(n*(n+1))/2;
        ll ans=abs(res-yes*yes);
        cout<<ans<<"\n";
    }
    return 0;
}
