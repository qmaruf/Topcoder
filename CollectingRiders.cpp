#include <bits/stdc++.h>
using namespace std;

struct CollectingRiders{
int minimalMoves(vector <string> board)
{
    int ret;
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"...1",
 "....",
 "2..."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(0, Arg1, minimalMoves(Arg0)); }
	void test_case_1() { string Arr0[] = {"........",
 ".1......",
 "........",
 "....3...",
 "........",
 "........",
 ".7......",
 "........"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(1, Arg1, minimalMoves(Arg0)); }
	void test_case_2() { string Arr0[] = {"..",
 "2.",
 ".."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(2, Arg1, minimalMoves(Arg0)); }
	void test_case_3() { string Arr0[] = {".1....1."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = -1; verify_case(3, Arg1, minimalMoves(Arg0)); }
	void test_case_4() { string Arr0[] = {"9133632343",
 "5286698232",
 "8329333369",
 "5425579782",
 "4465864375",
 "8192124686",
 "3191624314",
 "5198496853",
 "1638163997",
 "6457337215"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 121; verify_case(4, Arg1, minimalMoves(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
CollectingRiders ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
