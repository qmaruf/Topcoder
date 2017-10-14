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
struct NumberofFiboCalls{

ll ans[41];
int fibo0(int n)
{
    if(ans[n] != -1)return ans[n];
    if(n <= 0)return 1;
    else if(n == 1)return 0;
    else ans[n] = fibo0(n-1)+fibo0(n-2);
    return ans[n];
}

int fibo1(int n)
{
    if(ans[n] != -1)return ans[n];
    if(n <= 0)return 0;
    else if(n == 1)return 1;
    else ans[n] = fibo1(n-1)+fibo1(n-2);
    return ans[n];
}


vector <int> fiboCallsMade(int n)
{
    vector <int> ret;
    memset(ans, -1, sizeof(ans));
    ret.push_back(fibo0(n));

    memset(ans, -1, sizeof(ans));
    ret.push_back(fibo1(n));
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <int> &Expected, const vector <int> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { int Arg0 = 0; int Arr1[] = {1, 0 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, fiboCallsMade(Arg0)); }
	void test_case_1() { int Arg0 = 3; int Arr1[] = {1, 2 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, fiboCallsMade(Arg0)); }
	void test_case_2() { int Arg0 = 6; int Arr1[] = {5, 8 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, fiboCallsMade(Arg0)); }
	void test_case_3() { int Arg0 = 22; int Arr1[] = {10946, 17711 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, fiboCallsMade(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
NumberofFiboCalls ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
