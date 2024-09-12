#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int a = 0, b = 1;
    while(N){
        cout << a << " ";
        int temp = b;
        b = a+b;
        a = temp;
        N--;
    }
}