#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';
void solve(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++) cin >> arr[i];
    int i, j, flag;
    i = 0, j = N-1, flag = 0;
    while(i<=j){
        if(arr[i]!=arr[j]){
            flag = 0;
            break;
        }
        flag = 1;
        i++; j--;
    }        
    if(flag==1) cout << "YES" << endl;
    else cout << "NO" << endl;
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