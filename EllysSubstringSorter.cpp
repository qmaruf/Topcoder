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

struct EllysSubstringSorter{
string getMin(string S, int L)
{
    string ret = S;
//    cout<<L<<endl;
    for(int i=0;i<=S.length()-L;i++)
    {
        string P = S;
        sort(P.begin()+i, P.begin()+i+L);
        if(P<ret)ret = P;
    }
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "TOPCODER"; int Arg1 = 4; string Arg2 = "COPTODER"; verify_case(0, Arg2, getMin(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = "ESPRIT"; int Arg1 = 3; string Arg2 = "EPRSIT"; verify_case(1, Arg2, getMin(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = "AAAAAAAAA"; int Arg1 = 2; string Arg2 = "AAAAAAAAA"; verify_case(2, Arg2, getMin(Arg0, Arg1)); }
	void test_case_3() { string Arg0 = "ABRACADABRA"; int Arg1 = 5; string Arg2 = "AAABCRDABRA"; verify_case(3, Arg2, getMin(Arg0, Arg1)); }
	void test_case_4() { string Arg0 = "BAZINGA"; int Arg1 = 6; string Arg2 = "ABGINZA"; verify_case(4, Arg2, getMin(Arg0, Arg1)); }
	void test_case_5() { string Arg0 = "AAAWDIUAOIWDESBEAIWODJAWDBPOAWDUISAWDOOPAWD"; int Arg1 = 21; string Arg2 = "AAAAAABDDDEEIIIJOOSUWWWWDBPOAWDUISAWDOOPAWD"; verify_case(5, Arg2, getMin(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
EllysSubstringSorter ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
