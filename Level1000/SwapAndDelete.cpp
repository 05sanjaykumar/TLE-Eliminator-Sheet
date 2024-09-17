#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int once=0,zeros=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
               zeros++; 
            }
            else 
            {
                once++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
               if(once==0)
               {
                   break;
               }
               once--;
            }
            else 
            {
               if(zeros==0)
               {
                   break;
               }
               zeros--;
            }
        }
        cout<<once+zeros<<endl;
    }
    return 0;
}