#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    getline(cin, input);  
    int count = 0;
    bool inWord = false;  
    for(char c : input){
        if(isalpha(c)){  
            if(!inWord){
                count++;
                inWord = true;  
            }
        } 
        else inWord = false;  
    }
    cout << count << endl; 
    return 0;
}
