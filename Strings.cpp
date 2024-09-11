#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';
void solve(){
    string A, B;
    cin >> A;
    cin >> B;
    cout << A.size() << " " << B.size() << "\n";
    cout << A+B << "\n";
    swap(A[0], B[0]);
    cout << A << " " << B << endl;  
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    // cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}