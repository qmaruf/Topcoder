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

int A[1001];


int f(int clip, int body, int dest, int _time)
{
	if(body == dest)return _time;
	if(body < dest)
	{
		int a = f(clip, body+clip, dest, _time+1);
		int b = f(body, body*2, dest, _time+2);
		int ret = min(a,b);
		A[dest] = ret;
		return A[dest];
	}
	return 1<<20;
}
struct EmoticonsDiv2{
int printSmiles(int t)
{
	memset(A,-1,sizeof(A));
    int ret=f(1,2,t,2);
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 2; int Arg1 = 2; verify_case(0, Arg1, printSmiles(Arg0)); }
	void test_case_1() { int Arg0 = 6; int Arg1 = 5; verify_case(1, Arg1, printSmiles(Arg0)); }
	void test_case_2() { int Arg0 = 11; int Arg1 = 11; verify_case(2, Arg1, printSmiles(Arg0)); }
	void test_case_3() { int Arg0 = 16; int Arg1 = 8; verify_case(3, Arg1, printSmiles(Arg0)); }
	void test_case_4() { int Arg0 = 1000; int Arg1 = 21; verify_case(4, Arg1, printSmiles(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
EmoticonsDiv2 ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE

