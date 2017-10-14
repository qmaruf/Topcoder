#include <bits/stdc++.h>
using namespace std;

struct GoodString{
string isGood(string s)
{    
    int b = 0;
    for(int i = s.length() - 1; i >= 0; i--)
    {
    	// cout<<s[i]<<endl;
    	if(s[i] == 'a')
		{
			b--;
    		if(b < 0)break;
    	}
    	else b++;
    }
    // cout<<b<<endl;
    return b == 0 ? "Good" : "Bad";
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "ab"; string Arg1 = "Good"; verify_case(0, Arg1, isGood(Arg0)); }
	void test_case_1() { string Arg0 = "aab"; string Arg1 = "Bad"; verify_case(1, Arg1, isGood(Arg0)); }
	void test_case_2() { string Arg0 = "aabb"; string Arg1 = "Good"; verify_case(2, Arg1, isGood(Arg0)); }
	void test_case_3() { string Arg0 = "ababab"; string Arg1 = "Good"; verify_case(3, Arg1, isGood(Arg0)); }
	void test_case_4() { string Arg0 = "abaababababbaabbaaaabaababaabbabaaabbbbbbbb"; string Arg1 = "Bad"; verify_case(4, Arg1, isGood(Arg0)); }
	void test_case_5() { string Arg0 = "aaaaaaaabbbaaabaaabbabababababaabbbbaabbabbbbbbabb"; string Arg1 = "Good"; verify_case(5, Arg1, isGood(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
GoodString ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
