#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern10(int n) {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i+1; j++){
                cout << "*";
            }
            cout<< "\n";
        }
        for(int i = 0; i < n-1; i++){
            for(int j = n-1-i; j > 0; j--){
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
    sol.pattern10(n);

    return 0;
}

// g++ -std=c++17 -o pattern10 pattern10.cpp
// ./pattern10