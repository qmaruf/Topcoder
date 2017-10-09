#include <bits/stdc++.h>
using namespace std;

struct StringTransform{
string isPossible(string s, string t)
{
	map<char, int>mp;
	if(s.length())
	{
		if(s[0] != t[0])
			return "Impossible";
	}
	
	for(int i = 1; i < s.length(); i++)
	{
		mp[s[i-1]]=1;
		if(s[i] != t[i])
		{
			if(mp.count(t[i]) == 0)
				return "Impossible";
		}
	}
	return "Possible";
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "abc"; string Arg1 = "aba"; string Arg2 = "Possible"; verify_case(0, Arg2, isPossible(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = "abc"; string Arg1 = "bbc"; string Arg2 = "Impossible"; verify_case(1, Arg2, isPossible(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = "topcoder"; string Arg1 = "topcoder"; string Arg2 = "Possible"; verify_case(2, Arg2, isPossible(Arg0, Arg1)); }
	void test_case_3() { string Arg0 = "rdmcxnnbbe"; string Arg1 = "rdrrxrnxbe"; string Arg2 = "Possible"; verify_case(3, Arg2, isPossible(Arg0, Arg1)); }
	void test_case_4() { string Arg0 = "rdmcxnnbbe"; string Arg1 = "rdqrxrnxbe"; string Arg2 = "Impossible"; verify_case(4, Arg2, isPossible(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
StringTransform ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
