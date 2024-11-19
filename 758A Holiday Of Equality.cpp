#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
optimize();
int x;cin>>x;
vector<int>v(x);
int maxi=0;
for(int i=0;i<x;i++) {
    cin>>v[i];
    maxi=max(v[i],maxi);
}
int cost=0;
for(int i=0;i<x;i++) {
    while(v[i]<maxi) {
        v[i]++;
        cost++;
    }
}
cout << cost<<nl;
}

