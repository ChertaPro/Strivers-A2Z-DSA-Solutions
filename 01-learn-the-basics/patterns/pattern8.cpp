#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern8(int n) {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                cout << " ";
            }
            for(int j = 2*(n-i-1)+1; j > 0; j--){
                cout<< "*";
            }
            cout << "\n";
        }
    }
};

int main(){
    int n;
    cin >> n;

    Solution sol;
    sol.pattern8(n);

    return 0;
}

// g++ -std=c++17 -o pattern8 pattern8.cpp
// ./pattern8




