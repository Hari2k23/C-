#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';
void solve(){
    int N, flag;
    cin >> N;
    int A[N], B[N];
    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<N;i++) cin >> B[i];    
    sort(A, A+N); sort(B, B+N);
    for(int i=0;i<N;i++){
        if(A[i]==B[i]){
            flag = 1;
            continue;
        }
        else{
            flag = 0;
            break;
        }
    }
    if(flag==1) cout << "yes" << endl;
    else cout << "no" << endl;
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