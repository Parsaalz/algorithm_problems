#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		int rateasrials;cin>>rateasrials;
		int totalworktimes;cin>>totalworktimes;
		int holidaytimework;cin>>holidaytimework;
		int totalpayment=0;
		if(totalworktimes-holidaytimework>=140)
		{
			totalpayment+=140*rateasrials;
			totalpayment+=holidaytimework*(2*rateasrials);
			totalpayment+=(totalworktimes-holidaytimework-140)*(1.5*rateasrials);
		}
		else
		{
			totalpayment+=(totalworktimes-holidaytimework)*rateasrials;
			totalpayment+=holidaytimework*(2*rateasrials);;
		}
		string totalpaymentstr=to_string(totalpayment);
		int flag=0;
		int remaining=totalpaymentstr.length()%3;
		int counter=0;
		for(int i=0;i<totalpaymentstr.length();i++)
		{
			if(remaining == 0)
			{
				if(counter==2)
				{
					if(i!=totalpaymentstr.length()-1)
						{
							cout<<totalpaymentstr[i];
							cout<<",";
							counter=0;
							
						}
						else
						{
							cout<<totalpaymentstr[i];	
						}
				}
				else
				{
					counter++;
					cout<<totalpaymentstr[i];
				}
			}
			else
			{
				if(remaining == i && flag !=1)
				{
					cout<<",";
					cout<<totalpaymentstr[i];
					counter++;
					flag=1;
				}
				else
				{
					if(flag==1)
					{
						if(counter==2)
						{
							if(i!=totalpaymentstr.length()-1)
							{
								cout<<totalpaymentstr[i];
								cout<<",";
								counter=0;	
								
							}
							else
							{
								cout<<totalpaymentstr[i];
							}
						}
						else
						{
							counter++;
							cout<<totalpaymentstr[i];
						}
					}
					else
					{
						cout<<totalpaymentstr[i];
					}
				}
			}
		}
		cout<<"\n";
	}
	
}