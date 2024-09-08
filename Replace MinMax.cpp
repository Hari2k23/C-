#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++) cin >> arr[i];
        int max, min;
        min = 0; max = 0;
        for(int i=0;i<N;i++){
            if(arr[i]<arr[min]) min = i;
            if(arr[i]>arr[max]) max = i;
        }
        swap(arr[min], arr[max]);
        for(int i=0;i<N;i++) cout << arr[i] << " ";
        cout << endl;
    }
}