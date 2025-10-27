#include<bits/stdc++.h>
using namespace std;

int main()
{
	int budget;cin>>budget;
	int Watermelon;cin>>Watermelon;
	int Pomegranates;cin>>Pomegranates;
	int Nuts;cin>>Nuts;
	if(budget>=Watermelon)
	{
		cout<<"Watermelon";
	}
	else if(budget>=Pomegranates)
	{
		cout<<"Pomegranates";
	}
	else if(budget>=Nuts)
	{
		cout<<"Nuts";
	}
	return 0;
}