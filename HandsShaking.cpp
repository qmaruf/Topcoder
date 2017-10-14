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

#define ll long long
struct HandsShaking{

ll mem[50];
ll f(int n)
{
    if(n == 0 || n == 2)return 1;
    ll ret = 0;

    int l = 0;
    while(l<=n)
    {
        ret += f(l) * f(n-l);
        l += 2;
    }
    //for(int i = 1; i < n; i += 2){
    //    cout<<i-1<<" "<<n-i-1<<endl;
    //    ret += f(i-1) * f(n-i-1);
    //}

    return ret;
}
long long countPerfect(int n)
{
    memset(mem, -1, sizeof(mem));
    long long ret = 0;
    ret = f(n);
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 2; long long Arg1 = 1LL; verify_case(0, Arg1, countPerfect(Arg0)); }
	void test_case_1() { int Arg0 = 4; long long Arg1 = 2LL; verify_case(1, Arg1, countPerfect(Arg0)); }
	void test_case_2() { int Arg0 = 8; long long Arg1 = 14LL; verify_case(2, Arg1, countPerfect(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
HandsShaking ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
