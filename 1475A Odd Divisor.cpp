#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define cntp cout << cnt << nl
 
int main() {
optimize();
int t;cin>>t;while(t--) {
ll n;cin>>n;
if(n%2!=0) yes;
else {
ll temp=n;
while(temp%2==0) temp/=2;
if(temp>1) yes;
else no;
        }
    }
}
