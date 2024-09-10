#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; 

void solve(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++) cin >> arr[i];
    int m = arr[0] - 0;
    int ans = INT_MAX;
    for(int i=1;i<N;i++) 
    {
        ans = min(ans, m+arr[i]+i);
        m = min(m, arr[i]-i);
    }
    cout << ans << "\n";
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