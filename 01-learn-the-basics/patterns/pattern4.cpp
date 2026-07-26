#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern4(int n) {
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                cout << i+1;
            }
            cout << "\n";
        }
    }
};

int main(){
    int n;
    cin >> n;

    Solution sol;
    sol.pattern4(n);

    return 0;
}

// g++ -std=c++17 -o pattern4 pattern4.cpp
// ./pattern4