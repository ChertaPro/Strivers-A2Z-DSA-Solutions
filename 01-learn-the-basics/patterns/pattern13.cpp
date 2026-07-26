#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern13(int n) {
        int c = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i+1; j++)
            {
                cout << c;
                cout << " ";
                c++;
            }
            cout << "\n";
        }
    }
};

int main(){
    int n;
    cin >> n;

    Solution sol;
    sol.pattern13(n);

    return 0;
}

// g++ -std=c++17 -o pattern13 pattern13.cpp
// ./pattern13