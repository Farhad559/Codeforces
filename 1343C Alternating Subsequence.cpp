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
ll ans=0;
for(int i=0;i<n;i++) {
ll maxi=INT_MIN;
int j=i;
while(j<n and ((v[j]>0 and v[i]>0) or (v[j]<0 and v[i]<0))) {
        maxi=max(maxi,v[j]);
        j++;
        }
    ans+=maxi;
    i=j-1;
    }
    cout << ans<<nl;
    }
}


//(--++--++---+++)
//(++--++---++---)
//take max from each segment
