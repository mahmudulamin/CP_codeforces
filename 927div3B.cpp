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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<v.size();i++)
        {
            cin>>v[i];
        }
        int val = v[0];
        for(int i=1;i<n;i++)
        {
            val+=v[i]-val%v[i];
        }
        cout<<val<<endl;
    }
    return 0;
}
