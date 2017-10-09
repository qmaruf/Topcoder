#include <bits/stdc++.h>
using namespace std;
#define EMPTY "."
struct MakePalindrome{
vector <string> constructMinimal(string card)
{
    vector <string> ret;
    int A[120] = {0};
    for(int i = 0; i < card.length(); i++){    	
    	// int ch = card[i]-'a';
    	A[card[i]]++;    	
    }

    // for(int i = 0; i < 120; i++)
    // 	cout<<A[i]<<endl;

    vector<string>vec;
    for(int i = 0; i < 120; i++)
    {
    	if(A[i])
    	{
    		string tmp = "";
    		for(int j = 0; j < A[i]; j++)
    			tmp += (char)i;
    		// cout<<i<<" "<<tmp<<endl;
    		vec.push_back(tmp);
    	}
    }
    string p, q, res;

    while(1){

    for(int i = 0; i < vec.size(); i++)
    {
    	string w1 = vec[i];
    	if(w1==EMPTY)continue;
    	bool flag = 0;
    	for(int j = i+1; j < vec.size(); j++)
    	{    		
    		
    		string w2 = vec[j];
    		if(w2==EMPTY)continue;

    		int l1 = w1.length();
    		int l2 = w2.length();

    		if (l1%2==0)
    		{
    			p = w1.substr(0, l1/2);
    			q = w1.substr(l1/2);
    			res = p + w2 + q;
    			flag = 1;
    		}
    		else if(l2%2==0)
    		{
    			p = w2.substr(0, l2/2);
    			q = w2.substr(l2/2);
    			res = p + w1 + q;	
    			flag = 1;
    		}
    		if(flag)
    		{    			
    			vec[i] = vec[j] = EMPTY;
    			vec.push_back(res);
    			break;    			
    		}    		
    	}
    	if(flag)break;
    }
    int cnt = 0;
    for(int i = 0; i < vec.size();i++)
    	if(vec[i].length()%2==0)
    		cnt=1;
    if(cnt==0)break;
	}

    for(int i = 0; i < vec.size(); i++){
    	if(vec[i]!=EMPTY)
    		ret.push_back(vec[i]);
    	//cout<<vec[i]<<endl;
    }
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <string> &Expected, const vector <string> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { string Arg0 = "abbaa"; string Arr1[] = {"ababa" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, constructMinimal(Arg0)); }
	void test_case_1() { string Arg0 = "abc"; string Arr1[] = {"a", "b", "c" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, constructMinimal(Arg0)); }
	void test_case_2() { string Arg0 = "aaabbbccc"; string Arr1[] = {"aba", "bcb", "cac" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, constructMinimal(Arg0)); }
	void test_case_3() { string Arg0 = "topcoder"; string Arr1[] = {"oco", "d", "e", "p", "r", "t" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, constructMinimal(Arg0)); }
	void test_case_4() { string Arg0 = "aaaaabbbbcccdde"; string Arr1[] = {"z" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(4, Arg1, constructMinimal(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
MakePalindrome ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
