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
int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
int cnt=0;
for(int i=1;i<n;i++) {
    if(arr[i-1]!=arr[i]) cnt++;
}
cout << cnt+1<<nl;
}

