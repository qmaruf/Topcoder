#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define SZ(a) (int)a.size()
#define LEN(a) (int)a.length()

using namespace std;

int A[] = {1,2,3,4};
w[5][5]=0;
int main()
{
	for(int i=1;i<5;i++)
		for(int j=i+1;j<5;j++)
			w[i][j]=w[j][i]=i+j;
	return 0;
}