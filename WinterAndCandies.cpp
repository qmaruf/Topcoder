#include <bits/stdc++.h>
using namespace std;

struct WinterAndCandies{
int getNumber(vector <int> T)
{
    int A[50] = {0};
    int ret = 0;
    for(int i=0;i<T.size();i++)
    {
    	int t = T[i];
    	A[t]++;
    }
    int val = 1;
    int sum = 0;
    for(int i=1; i < 51; i++)
    {
    	if(A[i] == 0)break;
    	val = val*A[i];
    	sum += val;
    }
    return sum;

}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {24, 11, 8, 49, 29, 33, 7, 12, 6, 32, 15, 42, 46, 5, 3, 39, 37, 22, 47, 21, 28, 40, 36, 4, 17, 18, 9, 45, 16, 41, 48, 43, 2, 34, 38, 14, 26, 50, 27, 10, 30, 25, 1, 31, 13, 19, 35, 44, 20, 23}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(0, Arg1, getNumber(Arg0)); }
	void test_case_1() { int Arr0[] = {1, 1, 2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(1, Arg1, getNumber(Arg0)); }
	void test_case_2() { int Arr0[] = {1, 3, 2, 5, 7, 4, 5, 4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 9; verify_case(2, Arg1, getNumber(Arg0)); }
	void test_case_3() { int Arr0[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 62; verify_case(3, Arg1, getNumber(Arg0)); }
	void test_case_4() { int Arr0[] = {2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(4, Arg1, getNumber(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
WinterAndCandies ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE

