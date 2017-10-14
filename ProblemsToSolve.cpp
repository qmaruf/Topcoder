#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define sz(a) (int)a.size()
#define len(a) (int)a.length()
#define inf 1<<20
using namespace std;

vector<int>p;
int diff;

int f(int cur, int mini, int maxi)
{
    if(cur >= p.size())return 0;
    if(maxi - mini > diff)return 0;

    int ans1 = inf;
    int ans2 = inf;

    if(cur + 1 < p.size())
    {
        mini = min(mini, p[cur+1]);
        maxi = max(maxi, p[cur+1]);
        int ans1 = 1 + f(cur+1, mini, maxi);
    }

    if(cur + 2 < p.size())
    {
        mini = min(mini, p[cur+2]);
        maxi = max(maxi, p[cur+2]);
        int ans1 = 1 + f(cur+2, mini, maxi);
    }

    return min(ans1, ans2);

}
struct ProblemsToSolve{
int minNumber(vector <int> pp, int v)
{
    p = pp;
    diff = v;
    int ret = f(0, inf, inf);
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1, 2, 3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; int Arg2 = 2; verify_case(0, Arg2, minNumber(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {1, 2, 3, 4, 5}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; int Arg2 = 3; verify_case(1, Arg2, minNumber(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {10, 1, 12, 101}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 100; int Arg2 = 3; verify_case(2, Arg2, minNumber(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {10, 1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 9; int Arg2 = 2; verify_case(3, Arg2, minNumber(Arg0, Arg1)); }
	void test_case_4() { int Arr0[] = {6, 2, 6, 2, 6, 3, 3, 3, 7}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; int Arg2 = 2; verify_case(4, Arg2, minNumber(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
ProblemsToSolve ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
