#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define sz(a) (int)a.size()
#define len(a) (int)a.length()

using namespace std;

int gcd(int a, int b){
	if(b==0)return a;
	else return gcd(b,a%b);
}
struct DreamingAboutCarrots{
int carrotsBetweenCarrots(int x1, int y1, int x2, int y2)
{
    int a = abs(x1-x2);
    int b = abs(y1-y2);
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
    cout<<a<<" "<<b<<endl;
    return gcd(a,b)-1;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 1; int Arg1 = 1; int Arg2 = 5; int Arg3 = 5; int Arg4 = 3; verify_case(0, Arg4, carrotsBetweenCarrots(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 0; int Arg1 = 0; int Arg2 = 1; int Arg3 = 1; int Arg4 = 0; verify_case(1, Arg4, carrotsBetweenCarrots(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 50; int Arg1 = 48; int Arg2 = 0; int Arg3 = 0; int Arg4 = 1; verify_case(2, Arg4, carrotsBetweenCarrots(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 0; int Arg1 = 0; int Arg2 = 42; int Arg3 = 36; int Arg4 = 5; verify_case(3, Arg4, carrotsBetweenCarrots(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
DreamingAboutCarrots ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
