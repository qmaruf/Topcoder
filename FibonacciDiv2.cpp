#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define sz(a) (int)a.size()
#define len(a) (int)a.length()

using namespace std;

struct FibonacciDiv2{
int find(int N)
{
	vector<ll>vec;
	vec.pb(0);vec.pb(1);
	int cnt = 0;
	for(int i=2;;i++){
		ll p = vec[i-1]+vec[i-2];
		vec.pb(p);
		if(p>=1000000)cnt++;
		if(cnt==2)break;
	}

	for(int i=0;i<vec.size()-1;i++){
		if(N>=vec[i]&&N<=vec[i+1]){
			cout<<N<<" "<<vec[i]<<" "<<vec[i+1]<<endl;
			return min(abs(N-vec[i]),abs(N-vec[i+1]));
		}
	}
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 1; int Arg1 = 0; verify_case(0, Arg1, find(Arg0)); }
	void test_case_1() { int Arg0 = 13; int Arg1 = 0; verify_case(1, Arg1, find(Arg0)); }
	void test_case_2() { int Arg0 = 15; int Arg1 = 2; verify_case(2, Arg1, find(Arg0)); }
	void test_case_3() { int Arg0 = 19; int Arg1 = 2; verify_case(3, Arg1, find(Arg0)); }
	void test_case_4() { int Arg0 = 1000000; int Arg1 = 167960; verify_case(4, Arg1, find(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
FibonacciDiv2 ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
