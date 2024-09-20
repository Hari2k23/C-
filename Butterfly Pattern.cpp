#include<bits/stdc++.h>
using namespace std;

#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';

#define FOR(i,n) for(int i=0;i<n;i++)

void solve(){
  int n;cin>>n;

  int total = 2*n-1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=total;j++){
        if(j<=i || j>=total-i+1) cout<<"*";
        else cout<<" ";
    }
    cout<<'\n';
  }
  for(int i=1;i<n;i++){
    for(int j=1;j<=total;j++){
        if(j<=n-i || j>=n+i) cout<<"*";
        else cout<<" ";
    }
    cout<<'\n';
  }
  cout<<'\n';
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}