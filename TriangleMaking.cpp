#include <bits/stdc++.h>
using namespace std;

struct TriangleMaking{
int maxPerimeter(int a, int b, int c)
{
    int ret = -1;
    for(int i = 1; i < a; i++)
    {
    	for(int j = 1; j < b; j++)
    	{
    		for(int k = 1; k < c; k++)
    		{
    			int x = a - i;
    			int y = b - j;
    			int z = c - k;

    			if(x + y > z || x + z > y || y + z > x)
    			{
    				ret = max(ret, x + y + z);
    			}
    		}
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
	void test_case_0() { int Arg0 = 1; int Arg1 = 2; int Arg2 = 3; int Arg3 = 5; verify_case(0, Arg3, maxPerimeter(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arg0 = 2; int Arg1 = 2; int Arg2 = 2; int Arg3 = 6; verify_case(1, Arg3, maxPerimeter(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arg0 = 1; int Arg1 = 100; int Arg2 = 1; int Arg3 = 3; verify_case(2, Arg3, maxPerimeter(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arg0 = 41; int Arg1 = 64; int Arg2 = 16; int Arg3 = 113; verify_case(3, Arg3, maxPerimeter(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
TriangleMaking ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
