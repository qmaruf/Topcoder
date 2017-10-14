#include <bits/stdc++.h>
using namespace std;

struct ForwardMancala{

int tccheck(vector<int> vec)
{
	int c = 0;
	for(int i = 0; i < vec.size(); i++)			
		if(vec[i]){
			// cout<<vec[i]<<endl;
			c++;
		}
	// cout<<"c "<<c<<endl;
	return c;	
}

int get_min_pos(vector<int> vec)
{
	// cout<<"in gmp"<<endl;
	int val = 100;
	int pos = -1;

	for(int i = 0; i < vec.size(); i++)
	{
		if(vec[i])
		{
			if(vec[i] < val)
			{
				val = vec[i];
				pos = i;
			}
		}
	}
	return pos;
}
vector <int> findMoves(vector <int> start)
{
	int sz = start.size();
    vector <int> ret;

    while(true)
    {
    	int c = tccheck(start);
    	// cout<<"ccc "<<c<<endl;
    	if(c <= 1)break;
    	int pos = get_min_pos(start);
    	ret.push_back(pos);
    	int val = start[pos];
    	start[pos] = 0;
    	pos = (pos+1)%sz;
    	while(val > 0)
    	{
    		val--;
    		start[pos] += 1;
    		pos = (pos+1)%sz;
    	}
    }
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <int> &Expected, const vector <int> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { int Arr0[] = {6,1,0,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1, 2, 3, 1, 2, 3 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, findMoves(Arg0)); }
	void test_case_1() { int Arr0[] = {0,10,0,0,0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = { }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, findMoves(Arg0)); }
	void test_case_2() { int Arr0[] = {0,1,0,1,0,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {3, 4, 1, 2, 3, 4 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, findMoves(Arg0)); }
	void test_case_3() { int Arr0[] = {5,0,0,1,3,0,2,0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, findMoves(Arg0)); }
	void test_case_4() { int Arr0[] = {10,10,10,10,10,10,10,10,10,10}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(4, Arg1, findMoves(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
ForwardMancala ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
