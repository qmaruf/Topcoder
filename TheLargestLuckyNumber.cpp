#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define sz(a) (int)a.size()
#define len(a) (int)a.length()
#define MAX 1000000
using namespace std;

int f(int a,int n){
	if(a==n)return n;
	if(a>n)return -1;
	int aa = a*10+4;
	int bb = a*10+7;
	int x = max(a,f(aa,n));
	int y = max(a,f(bb,n));
	return max(x,y);
}
struct TheLargestLuckyNumber{
int find(int n)
{
	int ret = f(0,n);
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 100; int Arg1 = 77; verify_case(0, Arg1, find(Arg0)); }
	void test_case_1() { int Arg0 = 75; int Arg1 = 74; verify_case(1, Arg1, find(Arg0)); }
	void test_case_2() { int Arg0 = 5; int Arg1 = 4; verify_case(2, Arg1, find(Arg0)); }
	void test_case_3() { int Arg0 = 474747; int Arg1 = 474747; verify_case(3, Arg1, find(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
TheLargestLuckyNumber ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
