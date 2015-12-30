#include <iostream>
using namespace std;

int main()
{
   int T;
   cin >> T;
   int N, C;
   int A[100];
   for(int i=0; i<T; i++)
   {
      cin >> N >> C;
      for(int j=0; j<N; j++)
      {
         cin >> A[j];
      }
      
      int sum = 0;
      for(int j=0; j<N; j++)
      {
         sum += A[j];
      }
      
      cout << ( (sum < C) ? "Yes" : "No" ) << endl;
   }
   return 0;
}
