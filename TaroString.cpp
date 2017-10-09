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
#define len(s) (int)s.length()
struct TaroString{
string getAnswer(string s)
{
    for(int i=0;i<len(s);i++)
    	for(int j=i+1;j<len(s);j++)
    		for(int k=j+1;k<len(s);k++)
    			if(s[i]=='C' && s[j]=='A' && s[k]=='T')
    				return "Possible";
    return "Impossible";
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "XCYAZTX"; string Arg1 = "Possible"; verify_case(0, Arg1, getAnswer(Arg0)); }
	void test_case_1() { string Arg0 = "CTA"; string Arg1 = "Impossible"; verify_case(1, Arg1, getAnswer(Arg0)); }
	void test_case_2() { string Arg0 = "ACBBAT"; string Arg1 = "Impossible"; verify_case(2, Arg1, getAnswer(Arg0)); }
	void test_case_3() { string Arg0 = "SGHDJHFIOPUFUHCHIOJBHAUINUIT"; string Arg1 = "Possible"; verify_case(3, Arg1, getAnswer(Arg0)); }
	void test_case_4() { string Arg0 = "CCCATT"; string Arg1 = "Impossible"; verify_case(4, Arg1, getAnswer(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
TaroString ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
