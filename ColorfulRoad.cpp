#include <bits/stdc++.h>

#define min(a,b) ((a)<(b)?(a):(b))
#define pb push_back
#define ll long long
#define sz(a) (int)a.size()
#define len(a) (int)a.length()
#define sq(a) ((a)*(a))
#define inf 1<<20

using namespace std;

vector<int>vec;

struct ColorfulRoad{

int f(int pos, int col, int tot){
	col = (1+col)%3;
	if(pos>=sz(vec))return inf;
	if(pos == sz(vec)-1){
		cout<<vec[pos]<<" "<<col<<endl;
		if(vec[pos]==col)return tot+1;
		else return inf;
	}
	int ret = inf;
	for(int i=pos+1;i<sz(vec);i++){
		if(vec[i]==col){
			ret = min(ret,f(i,col,tot+sq(i-pos)));
		}
	}
	return ret;
}
int getMin(string road)
{
	vec.clear();
	for(int i=0;i<len(road);i++){
		if(road[i]=='R')vec.pb(0);
		else if(road[i]=='G')vec.pb(1);
		else vec.pb(2);
	}
    int ret = f(0,0,0);
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "RGGGB"; int Arg1 = 8; verify_case(0, Arg1, getMin(Arg0)); }
	void test_case_1() { string Arg0 = "RGBRGBRGB"; int Arg1 = 8; verify_case(1, Arg1, getMin(Arg0)); }
	void test_case_2() { string Arg0 = "RBBGGGRR"; int Arg1 = -1; verify_case(2, Arg1, getMin(Arg0)); }
	void test_case_3() { string Arg0 = "RBRRBGGGBBBBR"; int Arg1 = 50; verify_case(3, Arg1, getMin(Arg0)); }
	void test_case_4() { string Arg0 = "RG"; int Arg1 = 1; verify_case(4, Arg1, getMin(Arg0)); }
	void test_case_5() { string Arg0 = "RBRGBGBGGBGRGGG"; int Arg1 = 52; verify_case(5, Arg1, getMin(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
ColorfulRoad ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
