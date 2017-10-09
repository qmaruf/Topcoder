#include <bits/stdc++.h>
using namespace std;
#define PI atan(1.0)*4.0
#define eps 1e-10

struct FlightDataRecorder{
double getDistance(vector <int> heading, vector <int> distance)
{
    double ret = 0.0;
    double x = 0.0L, y = 0.0L;

    for(int i = 0; i < heading.size(); i++)
    {
    	x += distance[i]*sin(heading[i]*PI/180.0);
    	y += distance[i]*cos(heading[i]*PI/180.0);
    }
    ret = sqrt(x*x + y*y);
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {90,0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {3,4}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); double Arg2 = 5.0; verify_case(0, Arg2, getDistance(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {37,37,37,37}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1,10,100,1000}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); double Arg2 = 1111.0; verify_case(1, Arg2, getDistance(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {0,120,240,0,120,240}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {999,999,999,999,999,999}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); double Arg2 = 6.431098710768743E-13; verify_case(2, Arg2, getDistance(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {76,321,214,132,0,359,74,65,213}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {621,235,698,1,35,658,154,426,965}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); double Arg2 = 153.54881555325184; verify_case(3, Arg2, getDistance(Arg0, Arg1)); }
	void test_case_4() { int Arr0[] = {0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); double Arg2 = 1.0; verify_case(4, Arg2, getDistance(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
FlightDataRecorder ___test;
___test.run_test(-1);
return 0;
}
// END CUT HERE
