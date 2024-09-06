#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    bool isLucky = false;
    int count = 0;
    for(int i=A;i<=B;i++){
        int temp = i;
        while(temp>0){
            int r = temp%10;
            if(r!=4 && r!=7){
                isLucky = false;
                break;
            }
            else{
                temp/=10;
                if(temp==0){
                    isLucky = true;
                    count+=1;
                    cout << i << " ";
                    break;
                }
            }
        }
    }
    if(count==0) cout << -1;
}