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
bool isprime(int n)
{
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
}

ll s2i(string s)
{
	ll ret = 0;
	for(int i=0;i<(int)s.length();i++){
		ret = ret*10+(s[i]-'0');
	}
	return ret;
}
struct StrongPrimePower{
vector <int> baseAndExponent(string a)
{
	ll n = s2i(a);
	cout<<n<<endl;
    vector <int> ret;
    for(int q=2;q<=59;q++)
    {
		double dp = pow((double)n, (double)(1.0/(double)q));
		int p = int(dp+0.00001);
		cout<<q<<" "<<p<<" "<<dp<<endl;
		if(isprime(p)){
		
		ll r = 1;
		for(int i=1;i<=q;i++)r=r*p;
		if(r==n){
			ret.push_back(p);
			ret.push_back(q);
			return ret;
		}
	}
	}
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <int> &Expected, const vector <int> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { string Arg0 = "94931877133"; int Arr1[] = {37, 7 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, baseAndExponent(Arg0)); }
	void test_case_1() { string Arg0 = "10"; int Arr1[] = { }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, baseAndExponent(Arg0)); }
	void test_case_2() { string Arg0 = "7"; int Arr1[] = { }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, baseAndExponent(Arg0)); }
	void test_case_3() { string Arg0 = "1296"; int Arr1[] = { }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, baseAndExponent(Arg0)); }
	void test_case_4() { string Arg0 = "576460752303423488"; int Arr1[] = {2, 59 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(4, Arg1, baseAndExponent(Arg0)); }
	void test_case_5() { string Arg0 = "999999874000003969"; int Arr1[] = {999999937, 2 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(5, Arg1, baseAndExponent(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
	freopen("out.txt","w",stdout);
StrongPrimePower ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
