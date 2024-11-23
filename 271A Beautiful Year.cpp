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
n++;
while(true) {
    string str=to_string(n);
    set<char>st;
    bool ans = true;
    for(auto &i:str) {
        if(st.count(i)) {
            ans=false;
            break;
        }
        st.insert(i);
    }
if(ans) {
    cout<<n<<nl;
break;
}
n++;
}
}
