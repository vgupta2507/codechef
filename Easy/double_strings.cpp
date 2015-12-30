#include <iostream>
using namespace std;

int main()
{
   int T;
   cin>>T;
   long int N;
   for(int i=1; i<=T; i++)
   {
      cin>>N;
      cout<<(N/2)*2<<endl;
   }

   return 0;
}
