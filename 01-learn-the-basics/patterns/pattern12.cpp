#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern12(int n) {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i+1; j++)
            {
                cout << j+1;
            }
            for(int j = 0; j < 2*(n-1-i); j++){
                cout << " ";
            }
            for(int j = i+1; j > 0; j--){
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
    sol.pattern12(n);

    return 0;
}

// g++ -std=c++17 -o pattern12 pattern12.cpp
// ./pattern12