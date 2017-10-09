#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
struct SortingGame{

bool good(vi v)
{
  if(v.size() == 1)return true;
  for(int i = 1; i < v.size(); i++)
      if(v[i] < v[i-1])
	return false;
  return true;
}

void pv(vi v)
{
    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int fewestMoves(vi board, int k)
{
    cout<<k<<endl;
    map<vi, int>mp;
    mp[board] = 0;
    queue<vi>q;
    q.push(board);
    while(!q.empty())
    {
        vi u = q.front();
        q.pop();
        // cout<<"+++ ";
        // pv(u);
        if(good(u))
            {
                pv(u);
                return mp[u];        
            }
        int sz = u.size();
        for(int i = 0; i + k - 1 < sz; i++)
        {
            vi temp = u;
            reverse(temp.begin()+i, temp.begin()+i+k);            
            if(mp.count(temp) == 0)
            {
                q.push(temp);
                mp[temp] = 1 + mp[u];
            }
        }
    }
    return -1;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {5,4,3,2,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; int Arg2 = 10; verify_case(2, Arg2, fewestMoves(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {3,2,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; int Arg2 = 1; verify_case(1, Arg2, fewestMoves(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {5,4,3,2,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; int Arg2 = 10; verify_case(2, Arg2, fewestMoves(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {3,2,4,1,5}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; int Arg2 = -1; verify_case(3, Arg2, fewestMoves(Arg0, Arg1)); }
	void test_case_4() { int Arr0[] = {7,2,1,6,8,4,3,5}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; int Arg2 = 7; verify_case(4, Arg2, fewestMoves(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
SortingGame ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
