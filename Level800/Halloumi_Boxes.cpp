#include<bits/stdc++.h>
using namespace std;


bool isSorted(const vector<int>& vect, int n) {
    for(int i = 0; i < n - 1; i++) {
        if(vect[i] > vect[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0); 
    int t; 
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> vect(n);
        for(int i = 0; i < n; i++) {
            cin >> vect[i];
        }

        if (isSorted(vect, n)) {
            cout << "YES" << endl;
            continue;
        }
        if (k >= n) {
            cout << "YES" << endl;
            continue;
        }
        if (k == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}