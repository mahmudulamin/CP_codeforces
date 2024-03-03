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
    vector<int>v{0,1,2,1,2,3,1,2,3,2,1,2,2,2,3};
    while(t--)
    {
        int n;
        cin>>n;
        if(n<15)
        {
            cout<<v[n%15]<<endl;
        }
        else if(n%15==5)
        {
            cout<<n/15+1<<endl;
        }
        else if(n%15==8)
        {
            cout<<n/15+2<<endl;
        }
        else
        {
            cout<<n/15+v[n%15]<<endl;
        }

    }
}
