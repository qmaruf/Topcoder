#include <bits/stdc++.h>
using namespace std;
#define MAX 111
#define pb push_back
#define pii pair<int, int>

vector<pii>vec[MAX];
int N;
int vis[MAX];
bool road[MAX][MAX];

struct LuckyCycle{

int solve(int cur, int to, int prev, int f, int s)
{		
	int ret = -1;
	if(cur == to)
	{
		if(abs(f-s)==1 && (f+s+1)%2==0)
		{
			if(f>s)return 7;
			else return 4;
		}
		else
			return -1;
	}
	
	for(int i = 0; i < vec[cur].size(); i++)
	{
		pii v = vec[cur][i];
		int now = v.first;	
		int cost = v.second;
		if(now == prev)continue;
		if(cost == 4)
		{
			ret = solve(now, to, cur, f+1, s);
			if(ret != -1)break;
		}
		if(cost == 7)
		{
			ret = solve(now, to, cur, f, s+1);
			if(ret != -1)break;
		}
	}
	return ret;

}
vector <int> getEdge(vector <int> edge1, vector <int> edge2, vector <int> weight)
{
    vector <int> ret;
    N = edge1.size()  + 1;
    for(int i = 1; i <= N + 1; i++)vec[i].clear();
    memset(road, 0, sizeof(road));

    for(int i = 0; i < edge1.size(); i++)
    {
    	int u = edge1[i];
    	int v = edge2[i];
    	int w = weight[i];
    	
    	vec[u].pb(make_pair(v, w));
    	vec[v].pb(make_pair(u, w));

    	road[u][v] = road[v][u] = 1;
    }


    for(int i = 1; i <= N; i++)
    {
    	for(int j = i + 1; j <= N; j++)
    	{
    		if(road[i][j] == false)
    		{    			
    			int cost = solve(i, j, -1, 0, 0);
    			if(cost == 4 || cost == 7)
    				return	{i, j, cost};	
    		}
    	}
    }
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <int> &Expected, const vector <int> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { int Arr0[] = {1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {4}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = { }; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); verify_case(0, Arg3, getEdge(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arr0[] = {1, 3, 2, 4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2, 2, 4, 5}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {4, 7, 4, 7}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {1, 5, 7 }; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); verify_case(1, Arg3, getEdge(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arr0[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {4, 4, 4, 4, 4, 4, 7, 7, 7, 7, 7, 7}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {1, 12, 7 }; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); verify_case(2, Arg3, getEdge(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arr0[] = {1, 2, 3, 5, 6}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2, 3, 4, 3, 5}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {4, 7, 7, 7, 7}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {1, 4, 4 }; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); verify_case(3, Arg3, getEdge(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
LuckyCycle ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
