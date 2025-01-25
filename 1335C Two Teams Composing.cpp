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
ll n;cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++) cin>>v[i];
map<ll,ll>m;
for(int i=0;i<n;i++) m[v[i]]++;
ll maxi=0;
for(auto i:m) maxi=max(maxi,i.second);
ll size=m.size();
if(maxi==size) cout << maxi-1<<nl;
else if (maxi>size) cout << min(maxi-1,size)<<nl;
else cout << min(maxi,size-1)<<nl;
}
}


