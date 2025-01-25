#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
optimize();
int t;cin>>t;while(t--) {
ll x,y,n;cin>>x>>y>>n;
ll rem=n%x;
if(rem>=y) {
ll diff=rem-y;
ll ans=n-diff;
cout << ans << nl;
continue;
}
n-=(rem+1);
rem=n%x;
if(rem>=y) {
ll diff=rem-y;
ll ans=n-diff;
cout << ans << nl;
}
}
}


