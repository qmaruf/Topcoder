#include <bits/stdc++.h>
using namespace std;

struct LuckyXor{

bool lucky(int n)
{
	while(n)
	{
		int p = n % 10;
		if(p == 4 || p == 7)
		{
			n = n/10;			
		}
		else return false;
	}
	return true;
}
int construct(int a)
{    
    for(int i = a + 1; i <= 100; i++)
    {
    	int n = a ^ i;
    	if(lucky(n))return i;
    }
    return -1;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 4; int Arg1 = 40; verify_case(0, Arg1, construct(Arg0)); }
	void test_case_1() { int Arg0 = 19; int Arg1 = 20; verify_case(1, Arg1, construct(Arg0)); }
	void test_case_2() { int Arg0 = 88; int Arg1 = 92; verify_case(2, Arg1, construct(Arg0)); }
	void test_case_3() { int Arg0 = 36; int Arg1 = -1; verify_case(3, Arg1, construct(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
LuckyXor ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
