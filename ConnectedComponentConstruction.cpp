#include <bits/stdc++.h>
using namespace std;

struct ConnectedComponentConstruction{
vector <string> construct(vector <int> s)
{
	vector <string> ret;
	int A[51][51];
	memset(A, 0, sizeof(A));
	vector<int>vec[101];


	for(int i = 0; i < s.size(); i++)
		vec[s[i]].push_back(i);

	for(int i = 2; i < 101; i++)
	{			
		if((vec[i].size()%i)!=0 && vec[i].size()!=0)
		{			
			return ret;
		}
		
		int n = vec[i].size();
		for(int j = 0; j < n; j+=i)
		{
			for(int a = j; a < j + i; a++)
			{
				for(int b = j; b < j + i; b++)
				{
					if(a==b)continue;
					A[vec[i][a]][vec[i][b]]=1;
					A[vec[i][b]][vec[i][a]]=1;
				}	
			}	
		}
		
	}

	// for(int i = 0; i < s.size(); i++)
	// {
	// 	for(int j = 0; j < s.size(); j++)
	// 	{
	// 		cout<<A[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	for(int i = 0; i < s.size(); i++)
	{
		string res = "";
		for(int j = 0; j < s.size(); j++)
		{
			if(A[i][j])res += "Y";
			else res += "N";
		}
		ret.push_back(res);
	}	
		
	// cout<<"here"<<endl;
	return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <string> &Expected, const vector <string> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { int Arr0[] = {2,1,1,2,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"NNNYN", "NNNNN", "NNNNN", "YNNNN", "NNNNN" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, construct(Arg0)); }
	void test_case_1() { int Arr0[] = {1,1,1,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"NNNN", "NNNN", "NNNN", "NNNN" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, construct(Arg0)); }
	void test_case_2() { int Arr0[] = {3,3,3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"NYY", "YNY", "YYN" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, construct(Arg0)); }
	void test_case_3() { int Arr0[] = {4,4,4,4,4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, construct(Arg0)); }
	void test_case_4() { int Arr0[] = {1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"N" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(4, Arg1, construct(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
ConnectedComponentConstruction ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
