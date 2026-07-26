#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern6(int n) {
        for(int i = 0; i < n; i++){
            for(int j = 1; j <=n-i; j++){
                cout << j;
            }
            cout << "\n";
        }
    }
};

int main(){
    int n;
    cin >> n;

    Solution sol;
    sol.pattern6(n);

    return 0;
}

// g++ -std=c++17 -o pattern6 pattern6.cpp
// ./pattern6