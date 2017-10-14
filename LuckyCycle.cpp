#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int, int>
#define MAX 101
#define vi vector<int>

vector<pii>vec[MAX];
int N;
bool road[MAX][MAX];
bool vis[MAX];

int dfs(int cur, int to, int prev, int four, int seven)
{
    // cout<<cur<<" --> "<<to<<endl;
    // cout<<cur<<endl;
    if(cur == to)
    {
        if(abs(four - seven) == 1 && four != 0 && seven != 0)
        {
            if(four > seven)return 7;
            else return 4;
        }
        else return -1;    
    }
    
    // cout<<cur<<" "<<vec[cur].size()<<endl;

    for(int i = 0; i < vec[cur].size(); i++)
    {
        pii n = vec[cur][i];
        if(n.first == prev){            
            continue;
        }
        int v = n.first;
        int w = n.second;
        if(w == 4)
            return dfs(v, to, cur, four + 1, seven);
        else
            return dfs(v, to, cur, four, seven + 1);
    }
    return -1;
}
struct LuckyCycle{
vector <int> getEdge(vector <int> edge1, vector <int> edge2, vector <int> weight)
{
    vector <int> ret;
    int N = edge1.size() + 1;
    memset(road, 0, sizeof(road));

    for(int i = 0; i < edge1.size(); i++)
    {
        int u = edge1[i];
        int v = edge2[i];
        int w = weight[i];       
        vec[u].pb(make_pair(v, w));
        vec[v].pb(make_pair(u, w));
        road[u][v] = true;
    }

    for(int i = 1; i <= N; i++)
    {
        for(int j = i + 1; j <= N; j++)
        {
            
            if(road[i][j])continue;
            // cout<<i<<" "<<j<<" "<<road[i][j]<<endl;
            int x = dfs(i, j, -1, 0, 0);
            if(x != -1)
            {
                ret = {i, j, x};
                break;
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
