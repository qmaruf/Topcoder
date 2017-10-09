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

struct CorruptedMessage{
string reconstructMessage(string s, int k)
{
    if(k==0)return s;
    string ret;
    int A[200] = {0};
    for(int i = 0; i < s.length(); i++){
        A[s[i]]++;
    }

    char ch='x';
    int notc = s.length() - k;

    for(int i = 0; i < 200; i++)
        if(A[i]>=notc){
            ch = char(i);
            break;
        }
    for(int i = 0; i < s.length(); i++)
        s[i]=ch;
    ret = s;
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "hello"; int Arg1 = 3; string Arg2 = "lllll"; verify_case(0, Arg2, reconstructMessage(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = "abc"; int Arg1 = 3; string Arg2 = "ddd"; verify_case(1, Arg2, reconstructMessage(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = "wwwwwwwwwwwwwwwwww"; int Arg1 = 0; string Arg2 = "wwwwwwwwwwwwwwwwww"; verify_case(2, Arg2, reconstructMessage(Arg0, Arg1)); }
	void test_case_3() { string Arg0 = "ababba"; int Arg1 = 3; string Arg2 = "aaaaaa"; verify_case(3, Arg2, reconstructMessage(Arg0, Arg1)); }
	void test_case_4() { string Arg0 = "zoztxtoxytyt"; int Arg1 = 10; string Arg2 = "oooooooooooo"; verify_case(4, Arg2, reconstructMessage(Arg0, Arg1)); }
	void test_case_5() { string Arg0 = "jlmnmiunaxzywed"; int Arg1 = 13; string Arg2 = "mmmmmmmmmmmmmmm"; verify_case(5, Arg2, reconstructMessage(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
CorruptedMessage ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
