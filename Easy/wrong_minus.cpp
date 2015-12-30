#include <iostream>
using namespace std;

int main()
{
   int A, B;
   cin >> A >> B;
   int correct_minus = A - B;   
   int wrong_minus = ( (correct_minus % 10 == 9) ? (correct_minus-1) : (correct_minus+1) );
   cout<< wrong_minus << endl;
   
   return 0;
}
