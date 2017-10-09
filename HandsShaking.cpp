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
#define abs(a) ((a<0)?(-a):(a))
struct HandsShaking{
ll A[51];


ll countPerfect(int n)
{
	A[0]=A[2]=1;
	A[4]=2;
	if(n<=4)return A[n];
	for(int i=6;i<=n;i++){
		ll sum = 0;
		for(int j=0;j<=i-2;j+=2){
			sum += A[j]*A[i-2-j];
		}
		A[i]=sum;
	}
	return A[n];
   
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 2; long long Arg1 = 1LL; verify_case(0, Arg1, countPerfect(Arg0)); }
	void test_case_1() { int Arg0 = 4; long long Arg1 = 2LL; verify_case(1, Arg1, countPerfect(Arg0)); }
	void test_case_2() { int Arg0 = 8; long long Arg1 = 14LL; verify_case(2, Arg1, countPerfect(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
HandsShaking ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
