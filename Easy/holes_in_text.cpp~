#include <iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	char alpha[100];
	for(int i=1; i<=T; i++)
	{
	   int num_holes=0;
	   cin>>alpha;
		for(int j=0; j<100; j++)
		{
         if(alpha[j]=='A' or alpha[j]=='D' or alpha[j]=='O' or alpha[j]=='P' or alpha[j]=='Q' or alpha[j]=='R')
         {
            num_holes++;
         }
         else if(alpha[j]=='B')
         {
            num_holes += 2;
         }
         else if(alpha[j]=='\0')
         {break;}
		}
		cout<<num_holes<<endl;
	}
	return 0;
}
