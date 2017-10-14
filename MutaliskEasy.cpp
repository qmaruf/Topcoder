#include <bits/stdc++.h>
using namespace std;

struct MutaliskEasy{
int minimalAttacks(vector <int> x)
{
    queue<pair<vector<int>, int> >q;
    q.push(make_pair(x, 0));
    set<vector<int> >st;
    int w, ret = 1<<20;
    while(!q.empty())
    {
        x = q.front().first;
        w = q.front().second;
        q.pop();

        if(x[0] <= 0 && x[1] <= 0 && x[2] <= 0)return w;
        if(st.count(x))continue;
        st.insert(x);
        vector<int>s = {1, 3, 9};

        do{
            vector<int>v = {x[0] - s[0], x[1] - s[1], x[2] - s[2]};
            q.push(make_pair(v, w+1));
        }while(next_permutation(s.begin(), s.end()));
    }
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {12,10,4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(0, Arg1, minimalAttacks(Arg0)); }
	void test_case_1() { int Arr0[] = {54,18,6}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 6; verify_case(1, Arg1, minimalAttacks(Arg0)); }
	void test_case_2() { int Arr0[] = {55,60,53}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 13; verify_case(2, Arg1, minimalAttacks(Arg0)); }
	void test_case_3() { int Arr0[] = {1,1,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(3, Arg1, minimalAttacks(Arg0)); }
	void test_case_4() { int Arr0[] = {60, 40}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 9; verify_case(4, Arg1, minimalAttacks(Arg0)); }
	void test_case_5() { int Arr0[] = {60}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 7; verify_case(5, Arg1, minimalAttacks(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
MutaliskEasy ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
