#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define sz(a) (int)a.size()
#define len(a) (int)a.length()

using namespace std;

bool c1(vector <string> s){
	for(int i=1;i<sz(s);i++){
		if(len(s[i-1])>len(s[i]))return false;
	}
	return true;
}

bool c2(vector <string> s){
	for(int i=1;i<sz(s);i++){
		if(s[i-1]>s[i])return false;
	}
	return true;
}

struct TwoWaysSorting{
string sortingMethod(vector <string> s)
{
    bool f1 = c1(s);
    bool f2 = c2(s);
    if(f1&&f2)return "both";
    else if(f1)return "lengths";
    else if(f2)return "lexicographically";
    else return "none";
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"a", "aa", "bbb"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "both"; verify_case(0, Arg1, sortingMethod(Arg0)); }
	void test_case_1() { string Arr0[] = {"c", "bb", "aaa"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "lengths"; verify_case(1, Arg1, sortingMethod(Arg0)); }
	void test_case_2() { string Arr0[] = {"etdfgfh", "aio"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "none"; verify_case(2, Arg1, sortingMethod(Arg0)); }
	void test_case_3() { string Arr0[] = {"aaa", "z"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "lexicographically"; verify_case(3, Arg1, sortingMethod(Arg0)); }
	void test_case_4() { string Arr0[] = {"z"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "both"; verify_case(4, Arg1, sortingMethod(Arg0)); }
	void test_case_5() { string Arr0[] = {"abcdef", "bcdef", "cdef", "def", "ef", "f", "topcoder"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "lexicographically"; verify_case(5, Arg1, sortingMethod(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
TwoWaysSorting ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
