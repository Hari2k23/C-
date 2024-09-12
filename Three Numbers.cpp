#include <bits/stdc++.h>
using namespace std;


int main(){
    int K, S;
    cin >> K >> S;
    int count = 0;
    for(int X=0;X<=K;X++){
        for(int Y=0;Y<=K;Y++){
            int sum = X+Y;
            int diff = S-sum;
            if(diff>=0 && diff<=K) count++;
        }
    }
    cout << count << endl;
}