#include <bits/stdc++.h>
using namespace std;

#define MAX 101
#define ll long long
vector<int>vec[MAX];
bool vis[MAX];
map<int, ll>mp;

struct CorporationSalary{

ll solve(int u)
{
	if(vec[u].size() == 0)return 1;
	if(mp.count(u))return mp[u];
	ll ret = 0;
	for(int i = 0; i < vec[u].size(); i++)
		ret += solve(vec[u][i]);
	mp[u] = ret;
	return ret;
}
ll totalSalary(vector <string> rel)
{
	memset(vis, 0, sizeof(vis));
	for(int i = 0; i < MAX; i++)vec[i].clear();
	mp.clear(); 
    ll ret = 0;
    for(int i = 0; i < rel.size(); i++){    	
    	for(int j = 0; j < rel[i].length(); j++){    		
    		if(rel[i][j] == 'Y'){
    			vec[i].push_back(j);
    		}
    	}
    }
    for(int i = 0; i < rel.size(); i++)
       	ret += solve(i);    
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"N"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 1LL; verify_case(0, Arg1, totalSalary(Arg0)); }
	void test_case_1() { string Arr0[] = {"NNYN",
 "NNYN",
 "NNNN",
 "NYYN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 5LL; verify_case(1, Arg1, totalSalary(Arg0)); }
	void test_case_2() { string Arr0[] = {"NNNNNN",
 "YNYNNY",
 "YNNNNY",
 "NNNNNN",
 "YNYNNN",
 "YNNYNN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 17LL; verify_case(2, Arg1, totalSalary(Arg0)); }
	void test_case_3() { string Arr0[] = {"NYNNYN",
 "NNNNNN",
 "NNNNNN",
 "NNYNNN",
 "NNNNNN",
 "NNNYYN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 8LL; verify_case(3, Arg1, totalSalary(Arg0)); }
	void test_case_4() { string Arr0[] = {"NNNN",
 "NNNN",
 "NNNN",
 "NNNN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 4LL; verify_case(4, Arg1, totalSalary(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
CorporationSalary ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE