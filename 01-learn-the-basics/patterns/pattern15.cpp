#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern15(int n) {
        char arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        for(int i = 0; i < n; i++){
            for(int j = n-1-i; j >= 0; j--){
                cout << arr[j];
            }
            cout << "\n";
        }
    }
};

int main(){
    int n;
    cin >> n;

    Solution sol;
    sol.pattern15(n);

    return 0;
}

// g++ -std=c++17 -o pattern15 pattern15.cpp
// ./pattern15
