#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    bool found = false;
    vector<string> v;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i<(1<<n);i++)
    {     int sum = 0;

        for(int j = 0;j<n;j++)
        {
            if((i&(1<<j))!=0)
            {
                sum-=arr[j];
            }
            else
            {
                sum+=arr[j];
            }
        }
        if(sum%360==0)
        {
            found = true;
        }
    }
    if(found)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
