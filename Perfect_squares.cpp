#include<iostream>

using namespace std;
int main()
{
	int k;
	cout<<"Enter a number"<<endl;
	cin>>k;
	
	int j=1,i=1;
	while(j<k)
	{
		i++;
		j=i*i;
	}
	if(j==k)
	cout<<k<<" is a perfect square";
	else
	cout<<k<<" is not a perfect square";
	return 0;
}
