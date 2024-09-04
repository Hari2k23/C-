#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int T;
    cin >> T;
    int i = 0;
    
    while(i < T){
        double X, Y;
        cin >> X >> Y;
        if(X==0 && Y==0) cout << "Origem\n";
        else if(X==0) cout << "Eixo Y\n";
        else if(Y==0) cout << "Eixo X\n";
        else{
            if(X>0){
                if(Y>0) cout << "Q1\n";
                else cout << "Q4\n";
            }
            else{
                if(Y>0) cout << "Q2\n";
                else cout << "Q3\n";
            }
        }
        i++;
    } 

    return 0;
}