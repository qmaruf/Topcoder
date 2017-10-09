#include <iostream>
#include <cstdio>
#include <cstring>
#include <assert.h>
#include <string>
using namespace std;
int sz;

int ans;
int next[27][1000001];
bool created[1000001];
void insert(string word)
{
     int v = 0;
     int c = 1;
     for(int i=0;i<word.length();i++)
     {
         int u = word[i] - 'a';
         ans += c;
         if(!created[next[u][v]])
         {
             c = 0;
             next[u][v] = ++sz;
             created[sz] = true;
         }
         v = next[u][v];

     }
}

int main()
{
    //freopen("autocomplete.full.in", "r", stdin);
    int t, n;
    string word;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        memset(next, 0, sizeof(next));
        memset(created, 0, sizeof(created));
        cin>>n;
        ans = sz = 0;
        for(int j=0;j<n;j++)
        {
            cin>>word;
            insert(word);
        }
        printf("Case #%d: %d\n", i+1, ans);
    }
    return 0;
}
