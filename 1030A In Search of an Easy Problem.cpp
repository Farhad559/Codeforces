#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
optimize();
int n;cin>>n;
priority_queue<int>s;
for(int i=0;i<n;i++) {
    int x;cin>>x;
    s.push(x);
}
if(s.top()==1) cout << "HARD" <<nl;
else cout << "EASY" <<nl;
}
