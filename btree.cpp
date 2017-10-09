#include <iostream>
using namespace std;

int main()
{
    int h, n, ans;
    while(cin>>h>>n)
    {
        int l = 1 , r = 1;
        ans = 0;
        for(int i = 1; i <= h; i++)r = r * 2;
        while(l <= r)
        {
            int mid = l + (r - l)/2;
            if(n >= mid)
            {
                for(int j = mid-l; j >=1 ;j--)
                {
                    ans += j;
                }
                ans += 1;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        cout<<ans<<endl;

    }
    return 0;
}
