#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern1(int n) {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << "*";
            }
            cout << "\n";
        }
    }
};

int main(){
    int n;
    cin >> n;

    Solution sol;
    sol.pattern1(n);

    return 0;
}

// g++ -std=c++17 -o pattern1 pattern1.cpp
// ./pattern1