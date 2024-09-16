#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0); 
    int t; 
    cin >> t;
    
    while(t--) {
        int n, x;
        cin>>n>>x;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;
            v.push_back(m);
        }
        int p = 0;
        int abs_diff_max = 0;
        for(int i=0;i<n;i++)
        {
            abs_diff_max = max(abs_diff_max,v[i]-p);
            p = v[i];
        }
        p = x-v[n-1];
        abs_diff_max = max(abs_diff_max,p*2);
        cout<< abs_diff_max<<endl;
        
    }
    
    return 0;
}