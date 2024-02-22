#include<bits/stdc++.h>
using namespace std;
#define int long long


void Solve()
{
    int t;
    cin>>t;
    for(int i=1;i<=26;i++)
    {
        for(int j=1;j<=26;j++)
        {
            for(int k=1;k<=26;k++)
            {
                if(i+j+k == t)
                {
                    string s;
                    s.push_back('a'+i-1);
                    s.push_back('a'+j-1);
                    s.push_back('a'+k-1);
                    cout<<s<<endl;
                    return ;
                }
               // cout<<s<<endl;
            }
        }
    }
}

int32_t main()
{
    int n;
    cin>>n;
    while(n--)
    {
        Solve();
    }
}
