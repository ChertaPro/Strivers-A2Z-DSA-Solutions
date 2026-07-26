#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern5(int n) {
        for(int i = 0; i < n; i ++){
            for(int j = n; j > i; j--){
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
    sol.pattern5(n);

    return 0;
}

// g++ -std=c++17 -o pattern5 pattern5.cpp
// ./pattern5