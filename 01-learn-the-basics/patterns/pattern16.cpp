#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern16(int n) {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i+1; j++){
                cout << char('A' + i);
            }
            cout << "\n";
        }
    }
};

int main(){
    int n;
    cin >> n;

    Solution sol;
    sol.pattern16(n);

    return 0;
}

// g++ -std=c++17 -o pattern16 pattern16.cpp
// ./pattern16