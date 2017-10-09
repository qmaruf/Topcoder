#include <iostream>
using namespace std;

int A[5] = {-1, 1, 3, -2, -3};
int B[5] = {0};

void merge(int a, int b, int c, int d)
{
	int idx = a;
	while(a<=b && c<=d)
	{
		if(A[a] <= A[c])
			B[idx++] = A[a++];
		else 
			B[idx++] = A[c++];
	}
	while(a<=b)B[idx++] = A[a++];
	while(c<=d)B[idx++] = A[c++];
	for(int i=0;i<idx;i++)
		cout<<B[i]<<" ";
		cout<<endl;
}
void sort(int lo, int hi)
{
	if(lo<hi)
	{		
		int mid = (lo+hi)/2;
		sort(lo, mid);
		sort(mid+1, hi);		
		merge(lo, mid, mid+1, hi);
	}
}
int main()
{
	sort(0,4);
	for(int i=0;i<5;i++)
		cout<<B[i]<<" ";
	return 0;
}