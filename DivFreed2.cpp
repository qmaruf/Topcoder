#include <bits/stdc++.h>
using namespace std;

long long dp[11][100001];
const int MOD = 1000000007;

struct DivFreed2{
int count(int n, int k)
{
	vector<vector<int> >divisors(k+1);
	for(int i = 1; i <= k; i++)
		for(int j = 2*i; j <=k; j += i)
			divisors[j].push_back(i);

	memset(dp, 0, sizeof(dp));

	for(int i = 1; i <= k; i++)
		dp[1][i] = 1;

	for(int t = 2; t <= n; t++)
	{
		long long sum = 0;
		for(int i = 1; i <= k; i++)
			sum += dp[t-1][i];

		sum = sum%MOD;

		for(int i = 1; i <= k; i++)
		{
			dp[t][i] = sum;
			for(int d: divisors[i])
				dp[t][i] = (dp[t][i] + MOD - dp[t-1][d])%MOD;
		}
	}

    long long ret = 0;
    for(int i = 1; i <= k; i++)
    	ret += dp[n][i];

    ret = ret % MOD;
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); if ((Case == -1) || (Case == 7)) test_case_7(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 2; int Arg1 = 2; int Arg2 = 3; verify_case(0, Arg2, count(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 9; int Arg1 = 1; int Arg2 = 1; verify_case(1, Arg2, count(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 3; int Arg1 = 3; int Arg2 = 15; verify_case(2, Arg2, count(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 1; int Arg1 = 107; int Arg2 = 107; verify_case(3, Arg2, count(Arg0, Arg1)); }
	void test_case_4() { int Arg0 = 2; int Arg1 = 10; int Arg2 = 83; verify_case(4, Arg2, count(Arg0, Arg1)); }
	void test_case_5() { int Arg0 = 2; int Arg1 = 1234; int Arg2 = 1515011; verify_case(5, Arg2, count(Arg0, Arg1)); }
	void test_case_6() { int Arg0 = 3; int Arg1 = 8; int Arg2 = 326; verify_case(6, Arg2, count(Arg0, Arg1)); }
	void test_case_7() { int Arg0 = 10; int Arg1 = 100000; int Arg2 = 526882214; verify_case(7, Arg2, count(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
DivFreed2 ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
