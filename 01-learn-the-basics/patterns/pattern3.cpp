#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern3(int n) {
        for(int i = 0; i < n; i++)
        {
            for(int j = 1; j < i+2; j++)
            {
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
    sol.pattern3(n);

    return 0;
}

// g++ -std=c++17 -o pattern3 pattern3.cpp
// ./pattern3