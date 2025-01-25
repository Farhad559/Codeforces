#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
optimize();
string s;cin>>s;
ll i=0;
bool cbd=true;
while(i<s.size()) {
    if(i+2<s.size() and s.substr(i,3)=="144") i+=3;
    else if(i+1<s.size() and s.substr(i,2)=="14")i+=2;
    else if(s[i]=='1') i+=1;
    else {
        cbd=false;
        break;
    }
}
if(cbd) yes;
else no;
}


