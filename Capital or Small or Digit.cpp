#include <iostream>
using namespace std;
int main(){
    char X; 
    cin >> X;
    if(X>=48 && X<=57) cout << "IS DIGIT";
    else{
        if(X>='A' && X<='Z') cout << "ALPHA\nIS CAPITAL";
        else if (X>='a' && X<='z') cout << "ALPHA\nIS SMALL";
    }
    return 0;
}