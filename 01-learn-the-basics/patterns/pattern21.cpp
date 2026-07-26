#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern21(int n) {
        for(int i = 0; i < n; i++){
            cout <<"*";   
        }

        cout << "\n";

        for(int j = 0; j < n-2; j++){
            for(int i = 0; i < n; i++){
                if((i == 0) || (i == n-1)){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
            cout << "\n";
        }
        for(int i = 0; i < n; i++){
            cout <<"*";   
        }
        cout << "\n";
    }
};

int main(){
    int n;
    cin >> n;

    Solution sol;
    sol.pattern21(n);

    return 0;
}

// g++ -std=c++17 -o pattern21 pattern21.cpp
// ./pattern21