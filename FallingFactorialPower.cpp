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

struct FallingFactorialPower{
double compute(int n, int k)
{
    double ret;
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 7; int Arg1 = 3; double Arg2 = 210.0; verify_case(0, Arg2, compute(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 10; int Arg1 = 1; double Arg2 = 10.0; verify_case(1, Arg2, compute(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 5; int Arg1 = 0; double Arg2 = 1.0; verify_case(2, Arg2, compute(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 3; int Arg1 = -1; double Arg2 = 0.25; verify_case(3, Arg2, compute(Arg0, Arg1)); }
	void test_case_4() { int Arg0 = 2; int Arg1 = -3; double Arg2 = 0.016666666666666666; verify_case(4, Arg2, compute(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
FallingFactorialPower ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
