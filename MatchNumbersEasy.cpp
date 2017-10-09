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
vector<int>m;
struct MatchNumbersEasy{

string mx(string a, string b){
    if(a.length()>b.length())return a;
    else if(a.length()<b.length())return b;
    else return max(a,b);
}
string f(int pos, int tot, int n, string s){
    string ret = s;
    for(int j=pos;j>=0;j--){
        if(tot+m[j]<=n && s[0]!='0'){
            string x = f(pos, tot+m[j], n, s+(char)(j+'0'));
            ret = mx(ret,x);
        }
    }
    return ret;
}
string maxNumber(vector <int> M, int n)
{
    m = M;
    string ret = f(m.size()-1,0 ,n,"");
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {6,7,8}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 21; string Arg2 = "210"; verify_case(0, Arg2, maxNumber(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {5,23,24}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 30; string Arg2 = "20"; verify_case(1, Arg2, maxNumber(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {1,5,3,2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; string Arg2 = "0"; verify_case(2, Arg2, maxNumber(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {1,1,1,1,1,1,1,1,1,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 50; string Arg2 = "99999999999999999999999999999999999999999999999999"; verify_case(3, Arg2, maxNumber(Arg0, Arg1)); }
    
// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
MatchNumbersEasy ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
