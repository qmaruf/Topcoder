#include <bits/stdc++.h>
using namespace std;

struct InputBoxChecker{
vector <string> checkPrefix(int smallest, int largest, vector <int> numbers)
{
    vector <string> ret;
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <string> &Expected, const vector <string> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { int Arg0 = 300; int Arg1 = 347; int Arr2[] = {37}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); string Arr3[] = {"INVALID" }; vector <string> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); verify_case(0, Arg3, checkPrefix(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arg0 = 310; int Arg1 = 320; int Arr2[] = {3, 31, 317, 3174, 310, 320}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); string Arr3[] = {"VALID", "VALID", "VALID", "INVALID", "VALID", "VALID" }; vector <string> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); verify_case(1, Arg3, checkPrefix(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arg0 = 600; int Arg1 = 1020; int Arr2[] = {7, 73, 734, 7349}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); string Arr3[] = {"VALID", "VALID", "VALID", "INVALID" }; vector <string> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); verify_case(2, Arg3, checkPrefix(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arg0 = 64; int Arg1 = 78; int Arr2[] = {1,2,3,4,5,6,7,8,9}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); string Arr3[] = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID" }; vector <string> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); verify_case(3, Arg3, checkPrefix(Arg0, Arg1, Arg2)); }
	void test_case_4() { int Arg0 = 1; int Arg1 = 1234567890; int Arr2[] = {123, 456, 789, 1234567, 7654321, 3245354, 325432532, 243212}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); string Arr3[] = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID" }; vector <string> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); verify_case(4, Arg3, checkPrefix(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
InputBoxChecker ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
