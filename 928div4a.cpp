#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"



int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt=0;
        int coun=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
                cnt++;
            else
                coun++;
        }
        if(cnt>coun)
            cout<<"A"<<endl;
        else
            cout<<"B"<<endl;
    }
    return 0;
}
