#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    if(N<=1) cout << "-1";
    for(int i=1;i<=N;i++) if(i%2==0) cout << i << endl;
    return 0;
}