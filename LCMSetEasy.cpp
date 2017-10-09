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

struct LCMSetEasy{

int gcd(int a, int b){
    if(b==0)return a;
    else return gcd(b,a%b);
}
string include(vector <int> s, int x)
{
    int lcm=1;
    for(int i=0;i<s.size();i++)
    {
        int y=s[i];
        if(x%y==0)
        {
            lcm = lcm/gcd(lcm,y)*y;
        }
    }
    return (lcm == x) ? "Possible" : "Impossible";
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {2,3,4,5}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 20; string Arg2 = "Possible"; verify_case(0, Arg2, include(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {2,3,4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 611; string Arg2 = "Impossible"; verify_case(1, Arg2, include(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {2,3,4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 12; string Arg2 = "Possible"; verify_case(2, Arg2, include(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {1,2,3,4,5,6,7,8,9,10}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 24; string Arg2 = "Possible"; verify_case(3, Arg2, include(Arg0, Arg1)); }
	void test_case_4() { int Arr0[] = {100,200,300,400,500,600}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2000; string Arg2 = "Possible"; verify_case(4, Arg2, include(Arg0, Arg1)); }
	void test_case_5() { int Arr0[] = {100,200,300,400,500,600}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 8000; string Arg2 = "Impossible"; verify_case(5, Arg2, include(Arg0, Arg1)); }
	void test_case_6() { int Arr0[] = {1000000000,999999999,999999998}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 999999999; string Arg2 = "Possible"; verify_case(6, Arg2, include(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
LCMSetEasy ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
