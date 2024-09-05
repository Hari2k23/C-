#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, years, months, days;
        cin >> N;
        years = N/365;
        months = (N%365)/30;
        days = (N%365)%30;
        cout << years <<" years\n" << months << " months\n" << days << " days" << endl; 
    }
    return 0;
}