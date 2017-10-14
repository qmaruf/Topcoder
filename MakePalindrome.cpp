#include <bits/stdc++.h>
using namespace std;

struct MakePalindrome{
map<char, int>mp;

string copy(char ch, int n)
{
	string ret = "";
	for(int i = 0; i < n; i++)ret += ch;
	return ret;
}
vector <string> constructMinimal(string card)
{
    vector <string> ret;
    mp.clear();
    for(int i = 0; i < card.length(); i++)
    {
    	char ch = card[i];
    	if(mp.count(ch))
    		mp[ch]+=1;
    	else
    		mp[ch]=1;    	
    }
    auto it = mp.begin();
    string tmp = copy(it->first, it->second);    
    mp[it->first]=0;
    it++;
    int ln = 0;
    for(; it!=mp.end(); it++)
    {    	
    	if((it->second)%2==0 && it->second)
    	{
    		ln = it->second/2;
    		mp[it->first]=0;    		
    	}
    	else
    	{
    		ln = (it->second-1)/2;
    		mp[it->first]=1;    			
    	}
    	tmp = copy(it->first, ln) + tmp + copy(it->first, ln);
    }  

    

    for(auto it=mp.begin(); it!=mp.end(); it++)
    {   		
    	if(it->second==1 && tmp.length()%2==0)
    	{
    		string A = tmp.substr(0, tmp.length()/2);
    		string B = tmp.substr(tmp.length()/2);		
    		tmp = A + it->first + B;
    		mp[it->first]=0;
    		break;
    	}
    }
    ret.push_back(tmp);
    for(auto it=mp.begin(); it!=mp.end(); it++)
    	if(it->second)
    		ret.push_back(string(1, it->first));
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
	void test_case_4() { string Arg0 = "z"; string Arr1[] = {"z" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(4, Arg1, constructMinimal(Arg0)); }

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
