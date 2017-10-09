#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>

#include<cmath>
#include<iostream>
#include<fstream>

#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<sstream>
#include<stack>
using namespace std;

#define vi vector<int>
struct BridgeBuildingDiv2{
int minDiameter(vector <int> a, vector <int> b, int K)
{
    int ret = 1 << 20;
    int n = a.size() + 1;
    for(int mask = 0; mask < (1 << n); mask++)
    {
        if(__builtin_popcount(mask) == K)
        {
            vector<vector<int>> dist(2*n, vector<int>(2*n, 1<<20));
            for(int i = 0; i < n; i++)
            {
                if(mask & (1<<i))
                {
                    dist[i][i+n] = dist[i+n][i] = 0;
                }
            }

            for(int i = 0; i < n-1; i++)
            {
                dist[i][i+1] = dist[i+1][i] = a[i];
                dist[i+n][i+n+1] = dist[i+n+1][i+n] = b[i];
            }

            for(int k = 0; k < 2*n; k++)
                for(int i = 0; i < 2*n; i++)
                    for(int j = 0; j < 2*n; j++)
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

            int max_dist = 0;
            for(int i = 0; i < 2*n; i++)
                for(int j = i+1; j < 2*n ; j++)
                    max_dist = max(max_dist, dist[i][j]);

            ret = min(ret, max_dist);

        }
    }
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {2,1,1,1,2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1,9,1,9,1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 4; int Arg3 = 6; verify_case(0, Arg3, minDiameter(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arr0[] = {1,50,1,50,1,50,1,50}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {50,1,50,1,50,1,50,1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 9; int Arg3 = 8; verify_case(1, Arg3, minDiameter(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arr0[] = {50,10,15,31,20,23,7,48,5,50}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2,5,1,8,3,2,16,11,9,1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 3; int Arg3 = 124; verify_case(2, Arg3, minDiameter(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arr0[] = {2,4,10,2,2,22,30,7,28}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {5,26,1,2,6,2,16,3,15}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 5; int Arg3 = 54; verify_case(3, Arg3, minDiameter(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
BridgeBuildingDiv2 ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
