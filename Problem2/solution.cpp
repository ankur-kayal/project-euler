#include<bits/stdc++.h>
using namespace std;

int main(){

//  method : (just by observation)  2,8,34,144,610  |take two values prev and curr | new vlaue = curr*4 + prev

// t is the number of testcases
    int t;
    cin>>t;
    for(int i=0 ;i<t;i++){
        long long int N;
        cin>>N;
        long long int result=0, prev=0, curr=2;
        while (curr<N){
            result += curr;
            long long int new_val =curr*4 + prev;
            prev = curr;
            curr = new_val;
        }
        cout<<result<<endl;
    }
}
