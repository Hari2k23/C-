#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    int gcd = 0;
    cin >> A >> B;
    for(int i=1;i<=min(A,B);i++)
        if((A%i==0) && (B%i==0) && (i>gcd)) gcd = i;
    cout << gcd << endl;
}