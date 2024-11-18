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
for(int i=0;i<x;i++) cin>>v[i];
sort(v.begin(),v.end());
int a=0,b=0,i=0,j=v.size()-1;
while(i<j) { // two pointer approach
    if(v[i]*v[j]==x-2) {
        a=v[i];
        b=v[j];
        break;
      } else if (v[i]*v[j]<x-2) i++;
        else j--;
      }
  cout << b<< " " << a <<nl;
  }
}

