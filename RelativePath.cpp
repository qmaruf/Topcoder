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

vector<string> f(string p){
	vector<string>ret;
	char* pch;
	pch = strtok(p.c_str(),"/");
	while(pch!=NULL){
		ret.push_back(pch);
		pch = strtok(NULL,"/");
	}
	return ret;
}
struct RelativePath{
string makeRelative(string path, string currentDir)
{
    string ret="";
    vector<string>aa = f(path);
    vector<string>bb = f(currentDir);
    int a=0,b=0;
    int len1 = path.length(), len2 = currentDir.length();
    while(aa[a++]==bb[b++]){}

    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "/home/top/data/file"; string Arg1 = "/home/user/pictures"; string Arg2 = "../../top/data/file"; verify_case(0, Arg2, makeRelative(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = "/home/user/movies/title"; string Arg1 = "/home/user/pictures"; string Arg2 = "../movies/title"; verify_case(1, Arg2, makeRelative(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = "/file"; string Arg1 = "/"; string Arg2 = "file"; verify_case(2, Arg2, makeRelative(Arg0, Arg1)); }
	void test_case_3() { string Arg0 = "/a/b/a/b/a/b"; string Arg1 = "/a/b/a/a/b/a/b"; string Arg2 = "../../../../b/a/b"; verify_case(3, Arg2, makeRelative(Arg0, Arg1)); }
	void test_case_4() { string Arg0 = "/root/root/root"; string Arg1 = "/root"; string Arg2 = "root/root"; verify_case(4, Arg2, makeRelative(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
RelativePath ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
