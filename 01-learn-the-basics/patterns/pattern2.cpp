#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern2(int n) {
        for(int i = 0; i < n; i++){
            for(int j = -1; j < i; j++){
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
    sol.pattern2(n);

    return 0;
}

// g++ -std=c++17 -o pattern2 pattern2.cpp
// ./pattern2