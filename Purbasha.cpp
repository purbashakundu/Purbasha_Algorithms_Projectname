#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        int size_of_transaction;
    cout<<"enter the size of transaction array";
    cin>>size_of_transaction;
    int a[size_of_transaction];
    cout<<"enter the value of array\n";
    for(int i=0;i<size_of_transaction;i++)
        cin>>a[i];
    int N;
    cout<<"enter the total number of targets that needs to be achieved\n";
    cin>>N;
    while(N--!=0)
    {   cout<<"enter the value of target\n";
        int target,sum=0,flag=0; cin>>target;
        for(int i=0;i<size_of_transaction;i++)
        {
            sum+=a[i];
            if(sum>=target)
            {
                cout<<"Target achieved after "<<(i+1)<<" transactions\n";
                flag=1;
                break;
            }
        }
        if(!flag) cout<<"Given target is not achieved\n";
    }
    }
}
