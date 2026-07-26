#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern22(int n) {
        for(int i = n-1; i >= 0; i--){
            for(int j = n; j > i; j--){
                cout << j;
                cout << " ";
            }
            for(int j = (2*i) - 1, c = i+1; j > 0; j--){
                cout << c;
                cout << " ";
            }

            for(int j = i+1; j<= n; j++){
                if(j == 1) continue;
                cout << j;
                cout << " ";
            }

            cout << "\n";
        }
        for(int i = 1; i < n; i++){
            for(int j = n; j > i; j--){
                cout << j;
                cout << " ";
            }

            for(int j = (2*i)-1,c = i+1; j > 0; j--){
                cout << c;
                cout << " ";
            }

            for(int j = i + 1; j <= n; j++){
                cout << j;
                cout << " ";
            }

            cout << "\n";
        }
    }
};

int main(){
    int n;
    cin >> n;

    Solution sol;
    sol.pattern22(n);

    return 0;
}

// g++ -std=c++17 -o pattern22 pattern22.cpp
// ./pattern22