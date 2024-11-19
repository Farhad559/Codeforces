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
int x;cin>>x;
vector<int>v(x);
map<int,int>m;
for(int i=0;i<x;i++) {
    cin>>v[i];
    m[v[i]]++;
}
int diff=0;
for(auto i:m) {
    if(i.second==1) diff=i.first;
}
int ans=0;
for(int i=0;i<x;i++) {
    if(v[i]==diff) {
        ans=i+1;
        break;
}
}
cout << ans << nl;
}
}

