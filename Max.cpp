#include<bits/stdc++.h> 
using namespace std;

int main(){
    int N, X;
    int max = 0;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> X;
        if(X>max) max = X;
    }
    cout << max;
}