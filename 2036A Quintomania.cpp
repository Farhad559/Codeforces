#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
 
int main() {
optimize();
int t;cin>>t;while(t--) {
int a;cin>>a;
int arr[a];
for(int i=0;i<a;i++) cin>>arr[i];
bool ans = true;
for(int i=1;i<a;i++) {
    int interval=abs(arr[i] - arr[i-1]);
    if (interval !=5 and interval!=7){
        ans=false;
        break;
    }
}
if(ans) yes;
else no;
    }
}
