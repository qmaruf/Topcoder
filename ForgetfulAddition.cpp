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

struct ForgetfulAddition{
int minNumber(string expression)
{
    vector<int>vec;
    for(int i=0;i<expression.length();i++)
        vec.push_back(expression[i]-'0');

    int mn = 1<<20;
    for(int b = 0;b<vec.size();b++)
    {
        int left = 0;
        int right = 0;
        bool l=false, r = false;
        for(int i=0;i<=b;i++){
            left = left * 10 + vec[i];
            l = true;
        }

        for(int j=b+1;j<vec.size();j++)
        {
            right = right * 10 + vec[j];
            r = true;
        }

        if(l&&r)
        {
            mn = min(mn, left+right);
        }

    }
    int ret = mn;
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "22"; int Arg1 = 4; verify_case(0, Arg1, minNumber(Arg0)); }
	void test_case_1() { string Arg0 = "123"; int Arg1 = 15; verify_case(1, Arg1, minNumber(Arg0)); }
	void test_case_2() { string Arg0 = "1289"; int Arg1 = 101; verify_case(2, Arg1, minNumber(Arg0)); }
	void test_case_3() { string Arg0 = "31415926"; int Arg1 = 9067; verify_case(3, Arg1, minNumber(Arg0)); }
	void test_case_4() { string Arg0 = "98765"; int Arg1 = 863; verify_case(4, Arg1, minNumber(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
ForgetfulAddition ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
