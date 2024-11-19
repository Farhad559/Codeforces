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
vector<int>v1(4);
vector<int>v2(4);

for(int i=0;i<4;i++) {
    cin>>v1[i];
   v2[i]=v1[i];
}
sort(v1.begin(),v1.end());
int maxi=v1[4-1];
int scdmaxi=v1[4-2];

int ans1=0,ans2=0;
ans1=max(v2[0],v2[1]);
ans2=max(v2[2],v2[3]);
if( (ans1==maxi or ans1==scdmaxi) and (ans2==maxi or ans2==scdmaxi) ) yes;
    else no;
    }
}

