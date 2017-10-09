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

template <typename T>
  string i2s ( T Number )
  {
     ostringstream ss;
     ss << Number;
     return ss.str();
  }
  
struct Time{
string whatTime(int sec)
{
	string h="0",m="0",s="0";
	h=i2s(sec/3600);
	m=i2s((sec%3600)/60);
	s=i2s(((sec%3600)%60)%60);
    string ret = h+":"+m+":"+s;
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 0; string Arg1 = "0:0:0"; verify_case(0, Arg1, whatTime(Arg0)); }
	void test_case_1() { int Arg0 = 3661; string Arg1 = "1:1:1"; verify_case(1, Arg1, whatTime(Arg0)); }
	void test_case_2() { int Arg0 = 5436; string Arg1 = "1:30:36"; verify_case(2, Arg1, whatTime(Arg0)); }
	void test_case_3() { int Arg0 = 86399; string Arg1 = "23:59:59"; verify_case(3, Arg1, whatTime(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
Time ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
