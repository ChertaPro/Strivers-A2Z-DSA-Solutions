#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern19(int n) {
        for(int i = 0; i < n; i++){
            for(int j = n-i; j > 0; j--){
                cout << "*";
            }
            for(int j = 0; j < 2*i; j++){
                cout << " ";
            }
            for(int j = n-i; j > 0; j--){
                cout << "*";
            }
            cout << "\n";
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                cout << "*";
            }
            for(int j = 0; j < 2*(n-i-1); j++){
                cout << " ";
            }
            for(int j = 0; j <= i; j++){
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
    sol.pattern19(n);

    return 0;
}

// g++ -std=c++17 -o pattern19 pattern19.cpp
// ./pattern19