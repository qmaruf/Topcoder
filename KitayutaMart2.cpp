#include <bits/stdc++.h>
using namespace std;

struct KitayutaMart2{
int numBought(int K, int T)
{
    int ret;
    double tk = (double)T/(double)K;
    int i;
    for(i = 0; ; i++)
    {
    	tk = tk - (1<<i);
    	if(tk<=0)return i+1;
    }
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 100; int Arg1 = 100; int Arg2 = 1; verify_case(0, Arg2, numBought(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 100; int Arg1 = 300; int Arg2 = 2; verify_case(1, Arg2, numBought(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 150; int Arg1 = 1050; int Arg2 = 3; verify_case(2, Arg2, numBought(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 160; int Arg1 = 163680; int Arg2 = 10; verify_case(3, Arg2, numBought(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
KitayutaMart2 ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
