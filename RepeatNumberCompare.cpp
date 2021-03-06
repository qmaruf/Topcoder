#include <bits/stdc++.h>
using namespace std;

struct RepeatNumberCompare{

int count(int n)
{
	int c = 0;
	while(n)
	{
		c += 1;
		n= n/10;
	}
}
string compare(int x1, int k1, int x2, int k2)
{
	string a = to_string(x1);
	string b = to_string(x2);
	string A = "", B = "";

	for(int i = 0; i < k1; i++) A += a;
	for(int i = 0; i < k2; i++) B += b;

	//cout<<A<<endl<<B<<endl;
	if(A.length() < B.length())return "Less";
	else if(A.length() > B.length())return "Greater";
	else{
		for(int i = 0; i < A.length(); i++)
			if(A[i] > B[i])
				return "Greater";
			else if(A[i] < B[i])
				return "Less";

		return "Equal";
	}
    
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 1234; int Arg1 = 3; int Arg2 = 70; int Arg3 = 4; string Arg4 = "Greater"; verify_case(0, Arg4, compare(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 1010; int Arg1 = 3; int Arg2 = 101010; int Arg3 = 2; string Arg4 = "Equal"; verify_case(1, Arg4, compare(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 1234; int Arg1 = 10; int Arg2 = 456; int Arg3 = 20; string Arg4 = "Less"; verify_case(2, Arg4, compare(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 5; int Arg1 = 9; int Arg2 = 555555555; int Arg3 = 1; string Arg4 = "Equal"; verify_case(3, Arg4, compare(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_4() { int Arg0 = 5; int Arg1 = 9; int Arg2 = 555555554; int Arg3 = 1; string Arg4 = "Greater"; verify_case(4, Arg4, compare(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_5() { int Arg0 = 5; int Arg1 = 9; int Arg2 = 555555556; int Arg3 = 1; string Arg4 = "Less"; verify_case(5, Arg4, compare(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_6() { int Arg0 = 1000000000; int Arg1 = 50; int Arg2 = 1000000000; int Arg3 = 50; string Arg4 = "Equal"; verify_case(6, Arg4, compare(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
RepeatNumberCompare ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
