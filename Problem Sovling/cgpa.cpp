#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct st
{
    int id;
    string name;
    float cgpa;
};
bool operator<(st a,st b)
{
    if(a.cgpa != b.cgpa) return a.cgpa>b.cgpa;
    if(a.name != b.name) return a.name<b.name;
    return a.id<b.id;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    st sdt[n+2];
    for(i=0; i<n; i++)
    {
        cin >> sdt[i].id >> sdt[i].name >> sdt[i].cgpa;
    }
    sort(sdt,sdt+n);
    for(i=0; i<n; i++)
    {
        cout << sdt[i].name<<endl;
    }

    return ;
}
int  main()
{
    ll t,tt=1;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
