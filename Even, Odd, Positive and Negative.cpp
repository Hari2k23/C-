#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, X, positive, negative, odd, even;
    positive = 0; negative = 0; odd = 0; even = 0;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> X;
        if(X==0) even++;
        else if(X>0){
            positive++;
            if(X%2==0) even++;
            else odd++;
        }
        else if(X<0){
            negative++;
            if(X%2==0) even++;
            else odd++;
        }
    }
    cout << "Even: " << even << "\nOdd: " << odd << "\nPositive: " << positive << "\nNegative: " << negative << endl;
}