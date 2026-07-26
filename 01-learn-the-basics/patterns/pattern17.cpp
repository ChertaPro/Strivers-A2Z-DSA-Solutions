#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern17(int n) {
        for(int i = 0; i < n; i++){
            for(int j = n-1; j > i; j--){
                cout << " ";
            }

            for(int j = 0; j <= i; j++){
                cout << char('A' + j);
            }

            for(int j = i; j > 0; j--){
                cout << char('A' + j - 1);
            }

            cout << "\n";
        }
    }
};

int main(){
    int n;
    cin >> n;

    Solution sol;
    sol.pattern17(n);

    return 0;
}

// g++ -std=c++17 -o pattern17 pattern17.cpp
// ./pattern17