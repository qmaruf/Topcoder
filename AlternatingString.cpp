#include <bits/stdc++.h>
using namespace std;

struct AlternatingString{
int maxLength(string s)
{
    int ret=0,c=0;
    for(int i = 0; i < s.length(); i++)
    {
    	c=1;
    	for(int j = i+1; j < s.length(); j++)
    	{
    		if(s[j]==s[j-1])
    			break;
    		else
    			c++;
    	}
    	ret = max(ret, c);
    }
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "111101111"; int Arg1 = 3; verify_case(0, Arg1, maxLength(Arg0)); }
	void test_case_1() { string Arg0 = "1010101"; int Arg1 = 7; verify_case(1, Arg1, maxLength(Arg0)); }
	void test_case_2() { string Arg0 = "000011110000"; int Arg1 = 2; verify_case(2, Arg1, maxLength(Arg0)); }
	void test_case_3() { string Arg0 = "1011011110101010010101"; int Arg1 = 8; verify_case(3, Arg1, maxLength(Arg0)); }
	void test_case_4() { string Arg0 = "0"; int Arg1 = 1; verify_case(4, Arg1, maxLength(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
AlternatingString ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
