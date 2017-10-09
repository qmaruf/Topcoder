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
#define ll long long

struct TrafficCongestionDivTwo{
ll theMinCars(int h)
{
	ll A[61];
	A[0] = 1; A[1] = 1; A[2] = 3;
	for(int i = 3;i<=h;i++){
		A[i] = 3;
		for(int j=1;j<i-1;j++){
			A[i]+=2*A[j];
		}
	}
	return A[h];
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 1; long long Arg1 = 1LL; verify_case(0, Arg1, theMinCars(Arg0)); }
	void test_case_1() { int Arg0 = 2; long long Arg1 = 3LL; verify_case(1, Arg1, theMinCars(Arg0)); }
	void test_case_2() { int Arg0 = 3; long long Arg1 = 5LL; verify_case(2, Arg1, theMinCars(Arg0)); }
	void test_case_3() { int Arg0 = 10; long long Arg1 = 683LL; verify_case(3, Arg1, theMinCars(Arg0)); }
	void test_case_4() { int Arg0 = 60; long long Arg1 = 768614336404564651LL; verify_case(4, Arg1, theMinCars(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
TrafficCongestionDivTwo ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
