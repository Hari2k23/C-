#include <iostream>
using namespace std;

int main(){
    string fn1, ln1, fn2, ln2;
    cin >> fn1 >> ln1;
    cin >> fn2 >> ln2;
    cout << (ln1==ln2? "ARE Brothers": "NOT");
    return 0;
}