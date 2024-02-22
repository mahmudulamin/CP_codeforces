#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    for(int i=0;i<k;i++)
    {
        s+=('a'+i);
    }
    string ans;
    for(int i=0;i<n;i++)
    {
        ans+=s;
    }
    cout<<ans<<endl;
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

