#include <bits/stdc++.h>
using namespace std;

#define MAX 550

int dp[MAX][MAX][MAX];


struct BearPlaysDiv2{

int solve(vector<int>t)
{
	
	sort(t.begin(), t.end());
	int a = t[0];
	int b = t[1];
	int c = t[2];	
	if(dp[a][b][c] != -1)return dp[a][b][c];		
	dp[a][b][c] = 0;
	if(a == b && b == c)return true;	
	bool x = false, y = false, z = false;
	if(b - a > 0)x = solve({a * 2, b - a, c});
	if(c - b > 0)y = solve({a, b * 2, c - b});
	if(c - a > 0)z = solve({a * 2, b, c - a});
	if(x || y || z)dp[a][b][c] = 1;
	return dp[a][b][c];

}
string equalPiles(int A, int B, int C)
{
	
	memset(dp, -1, sizeof(dp));
	vector<int>t;
	t.push_back(A);
	t.push_back(B);
	t.push_back(C);
	if((A + B + C) % 3 == 0)
	{		
		if(solve(t))return "possible";
	}
	return "impossible";
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 10; int Arg1 = 15; int Arg2 = 35; string Arg3 = "possible"; verify_case(0, Arg3, equalPiles(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arg0 = 1; int Arg1 = 1; int Arg2 = 2; string Arg3 = "impossible"; verify_case(1, Arg3, equalPiles(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arg0 = 4; int Arg1 = 6; int Arg2 = 8; string Arg3 = "impossible"; verify_case(2, Arg3, equalPiles(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arg0 = 18; int Arg1 = 18; int Arg2 = 18; string Arg3 = "possible"; verify_case(3, Arg3, equalPiles(Arg0, Arg1, Arg2)); }
	void test_case_4() { int Arg0 = 225; int Arg1 = 500; int Arg2 = 475; string Arg3 = "possible"; verify_case(4, Arg3, equalPiles(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
BearPlaysDiv2 ___test;
___test.run_test(-1);
int gbase;  
// cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
