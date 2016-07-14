#include<iostream>
using namespace std;

int rev(int s)
{
	int arr[s];
	for (int i=0;i<s;i++)
	{
	int g;
	cin>>g;
	arr[i] = g;
	}

	int ind = s-1;
	for(ind ; ind >=0; ind--)
	{
	cout<< arr[ind] << " ";
	}
	return 0;
}
	int main()
{
	cout<<"enter size of arr \n";
	int j;
	cin >>j;
	rev(j);
	
}

