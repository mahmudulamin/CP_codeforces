#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<2*(v[n-1]+v[n-2]-v[0]-v[1])<<endl;
}


int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
