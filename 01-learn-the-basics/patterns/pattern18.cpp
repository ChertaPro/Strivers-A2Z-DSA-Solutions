#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern18(int n) {
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                cout << char('A' + n-1-i+j);
                cout << " ";
            }
            cout << "\n";
        }
    }
};

int main(){
    int n;
    cin >> n;

    Solution sol;
    sol.pattern18(n);

    return 0;
}

// g++ -std=c++17 -o pattern18 pattern18.cpp
// ./pattern18