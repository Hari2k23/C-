#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cout<<#x<<" : "<<x<<'\n';
#define dbgv(v) cout<<#v<<" : "; for(auto it:v) cout<<it<<' ';cout<<'\n';
void solve(){
    int N;
    cin >> N;
    double sum = 0;
    for(int i=0;i<N;i++){
        double X;
        cin >> X;
        sum += X;
    }        
    double average = sum/N;
    cout << fixed << setprecision(7) << average << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    //cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}