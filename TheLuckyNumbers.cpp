#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define sz(a) (int)a.size()
#define len(a) (int)a.length()

using namespace std;

int f(int n, int a, int b){
	if(n>b)return 0;
	if(n==b)return 1;
	int aa = n*10+4;
	int bb = n*10+7;
	if(aa>=a && aa<=b && bb>=a && bb<=b){
		return 2+f(aa,a,b)+f(bb,a,b);
	}
	else if(aa>=a && aa<=b){
		return 1+f(aa,a,b);
	}
	else if(bb>=a && bb<=b){
		return 1+f(bb,a,b);
	}
}
struct TheLuckyNumbers{
int count(int a, int b)
{
    int ret=f(0,a,b);
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 1; int Arg1 = 10; int Arg2 = 2; verify_case(0, Arg2, count(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 11; int Arg1 = 20; int Arg2 = 0; verify_case(1, Arg2, count(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 74; int Arg1 = 77; int Arg2 = 2; verify_case(2, Arg2, count(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 1000000; int Arg1 = 5000000; int Arg2 = 64; verify_case(3, Arg2, count(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
TheLuckyNumbers ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
