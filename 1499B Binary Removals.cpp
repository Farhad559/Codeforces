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
string s;cin>>s;
int i=s.find("11");
int j=s.rfind("00");
if(i!=-1 and j!=-1 and i<j) no;
else yes;
}
}

