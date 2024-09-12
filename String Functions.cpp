#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    for(int i=0;i<Q;i++){
        string queue;
        cin >> queue;
        if(queue=="pop_back") S = S.substr(0, S.size()-1);
        else if(queue=="front") cout << S[0] << endl;
        else if(queue=="back") cout << S[S.size()-1] << endl;
        else if(queue=="sort"){
            int l, r;
            cin >> l >> r;
            if(l>r) swap(l, r);
            sort(S.begin()+l-1, S.begin()+r);
        }
        else if(queue=="reverse"){
            int l, r;
            cin >> l >> r;
            if(l>r) swap(l, r);
            reverse(S.begin()+l-1, S.begin()+r);
        }
        else if(queue=="substr"){
            int l, r;
            cin >> l >> r;
            if(l>r) swap(l, r);
            string s = S.substr(l-1, r-l+1);
            cout << s << endl;
        }
        else if(queue=="push_back"){
            char c;
            cin >> c;
            S.push_back(c);
        }
        else if(queue=="print"){
            int pos;
            cin >> pos;
            cout << S[pos-1] << endl;
        }
    }
}