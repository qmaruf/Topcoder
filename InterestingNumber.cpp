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

struct InterestingNumber{
string isInteresting(string x)
{
    string ret="Interesting";
    int A[10]={0};
    for(int i=0;i<x.length();i++){
    	A[x[i]-'0']++;
    }
    for(int i=0;i<10;i++)
    	if(A[i]%2!=0)
    		return "Not interesting";

    for(int i=0;i<x.length();i++){
    	for(int j=i+1;j<x.length();j++){
    		if(x[i]==x[j]){
    			if(x[i]-(int)'0'!=j-i-1){
    				return "Not interesting";
    			}
    		}
    	}
    }
    return "Interesting";
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "2002"; string Arg1 = "Interesting"; verify_case(0, Arg1, isInteresting(Arg0)); }
	void test_case_1() { string Arg0 = "1001"; string Arg1 = "Not interesting"; verify_case(1, Arg1, isInteresting(Arg0)); }
	void test_case_2() { string Arg0 = "41312432"; string Arg1 = "Interesting"; verify_case(2, Arg1, isInteresting(Arg0)); }
	void test_case_3() { string Arg0 = "611"; string Arg1 = "Not interesting"; verify_case(3, Arg1, isInteresting(Arg0)); }
	void test_case_4() { string Arg0 = "64200246"; string Arg1 = "Interesting"; verify_case(4, Arg1, isInteresting(Arg0)); }
	void test_case_5() { string Arg0 = "123"; string Arg1 = "Not interesting"; verify_case(5, Arg1, isInteresting(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
InterestingNumber ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
