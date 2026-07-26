#include<bits/stdc++.h>
using namespace std;

// ---------- Tu solución ----------
class Solution {
public:
    void pattern11(int n) {
        bool mark = true;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i+1; j++){
                if(mark == true){
                    cout << "1 ";
                }
                else {
                    cout << "0 ";
                }
                mark = !mark;
            }
            if(i%2 == 1) mark = true;
            if(i%2 == 0) mark = false;
            cout << "\n";
        }
    }
};


int main(){
    int n;
    cin >> n;

    Solution sol;
    sol.pattern11(n);

    return 0;
}

// g++ -std=c++17 -o pattern11 pattern11.cpp
// ./pattern11
