#include <cstring>
#include <iostream>
#include <map>
#include <queue>
using namespace std;
#define MAX 30001
map<int, bool>mp;


int f(int cur, int dist)
{
    if(cur > 30000 || cur <= 0 || dist < 0)return 0;
    if(mp.find(cur) != mp.end())return 1;
    int ret = 0, ans = 0;
    for(int i = -1; i < 2; i++)
    {
        if(mp.find(cur) != mp.end())
        {
            ret = max(ret, 1 + f(cur+dist+i,dist+i));
        }
        else
        {
            ret = max(ret, f(cur+dist+i,dist+i));
        }
    }

    return ret;
}
int main()
{
    int n, d, p;
    cin>>n>>d;
    vector<int>gems;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        mp[p] = true;
    }

    int ans = max(ans, f(d, d));
    cout<<ans<<endl;



}
