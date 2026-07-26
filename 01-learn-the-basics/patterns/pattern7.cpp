#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern7(int n) {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-1-i; j++){
                cout << " ";
            }
            for(int j = 0; j < 2*i+1; j++){
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
    sol.pattern7(n);

    return 0;
}

// g++ -std=c++17 -o pattern7 pattern7.cpp
// ./pattern7