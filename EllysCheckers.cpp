#include <bits/stdc++.h>
using namespace std;

struct EllysCheckers{
	
bool solve(string s)
{
	int cnt = 0;
	for(int i = 0; i < s.length(); i++)
		if(s[i] == 'o')
			cnt++;	
	if(cnt==1)return true;
	
	bool ret = false;
	string temp = "";
	int len = s.length();
	if(s[len-1] == 'o')s[len-1]='.';
	for(int i = 0; i < len; i++)
	{
		if(s[i] == 'o')
		{
			if(i+1 < len && s[i+1] == 'o')
			{
				temp = s;
				s[i] = '.';
				s[i+1] = 'o';
				ret = ret | solve(temp);
			}
			if(i+3<len)
			{
				if(s[i+1] == s[i+2] && s[i+1] == 'o' && s[i+3] == '.')
				{
					temp = s;
					temp[i] = '.';
					temp[i+3] = 'o';
					ret = ret | solve(temp);
				}
			}
		}
	}
	return ret;
}
string getWinner(string board)
{
    string ret = solve(board) ? "YES" : "NO";
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = ".o..."; string Arg1 = "YES"; verify_case(0, Arg1, getWinner(Arg0)); }
	void test_case_1() { string Arg0 = "..o..o"; string Arg1 = "YES"; verify_case(1, Arg1, getWinner(Arg0)); }
	void test_case_2() { string Arg0 = ".o...ooo..oo.."; string Arg1 = "NO"; verify_case(2, Arg1, getWinner(Arg0)); }
	void test_case_3() { string Arg0 = "......o.ooo.o......"; string Arg1 = "YES"; verify_case(3, Arg1, getWinner(Arg0)); }
	void test_case_4() { string Arg0 = ".o..o...o....o.....o"; string Arg1 = "NO"; verify_case(4, Arg1, getWinner(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
EllysCheckers ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
