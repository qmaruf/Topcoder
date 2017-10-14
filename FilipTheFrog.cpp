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

struct FilipTheFrog{
int countReachableIslands(vector <int> pos, int L)
{
    int ret = 0;
    int x = pos[0];
    sort(pos.begin(), pos.end());
    int i = 0;
    for(; i < pos.size(); i++)
        if(pos[i] == x)
            break;

    for(int k = i; k < pos.size()-1; k++)
        if(abs(pos[k]-pos[k+1])<=L)
            ret++;
        else break;

    for(int k = i; k > 0; k--)
        if(abs(pos[k]-pos[k-1])<=L)
            ret++;
        else break;

    return ret+1;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {4, 7, 1, 3, 5}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; int Arg2 = 3; verify_case(0, Arg2, countReachableIslands(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {100, 101, 103, 105, 107}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; int Arg2 = 5; verify_case(1, Arg2, countReachableIslands(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {17, 10, 22, 14, 6, 1, 2, 3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; int Arg2 = 7; verify_case(2, Arg2, countReachableIslands(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1000; int Arg2 = 1; verify_case(3, Arg2, countReachableIslands(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
FilipTheFrog ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
