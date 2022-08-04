

#include<bits/stdc++.h>
using namespace std;

int traillingZero(int n)
{
    int ans=0;
    for(int i=5; i<=n; i=i*5)
    {
        ans = ans + n/i;
        cout<<n<<"/"<<i<<" = "<<ans<<endl;
    }
    cout<<endl;
    return ans;
}

int main()
{
    cout<<traillingZero(100);
}