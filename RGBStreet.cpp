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
int A[3][30];
struct RGBStreet{
void parseit(int idx, string info){
	stringstream ss(info);
	int n;
	int cnt = 0;
	while(ss>>n){
		A[idx][cnt++]=n;
	}
}
int estimateCost(vector <string> houses)
{
    memset(A,0,sizeof(A));
    for(int i=0;i<houses.size();i++){
    	string info = houses[i];
    	parseit(i,info);
    }

    for(int i=1;i<houses.size();i++){
    	for(int j=0;j<3;j++){
    		int m = 1<<20;
    		for(int k=0;k<3;k++){
    			if(j==k)continue;
    			m = min(m,A[i-1][k]);
    		}
    		A[i][j]+=m;
    	}
    }
    int ret = 1<<20;
    for(int i=0;i<3;i++)ret = min(ret, A[houses.size()-1][i]);
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"1 100 100", "100 1 100", "100 100 1"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(0, Arg1, estimateCost(Arg0)); }
	void test_case_1() { string Arr0[] = {"1 100 100", "100 100 100", "1 100 100"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 102; verify_case(1, Arg1, estimateCost(Arg0)); }
	void test_case_2() { string Arr0[] = {"26 40 83", "49 60 57", "13 89 99"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 96; verify_case(2, Arg1, estimateCost(Arg0)); }
	void test_case_3() { string Arr0[] = {"30 19 5", "64 77 64", "15 19 97", "4 71 57", "90 86 84", "93 32 91"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 208; verify_case(3, Arg1, estimateCost(Arg0)); }
	void test_case_4() { string Arr0[] = {"71 39 44", "32 83 55", "51 37 63", "89 29 100", 
 "83 58 11", "65 13 15", "47 25 29", "60 66 19"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 253; verify_case(4, Arg1, estimateCost(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
RGBStreet ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
