#include <iostream>
using namespace std;

int found(int elem, int array[][2], int size);
int highest_freq(int array[][2], int size);


int main()
{
   int T;
   cin >> T;
   int N, array[100][2], array_ptr, index;
   for(int i=0; i<T; i++)
   {
      cin >> N;
      array_ptr = 0;
      
      for(int j=0; j<N; j++)
      {
         array[j][0] = 0;
         array[j][1] = 0;
      }
      
      for(int j=0; j<N; j++)
      {
         int elem;
         cin >> elem;
         index = found(elem, array, array_ptr);     
         if( index != -1 ) 
         {
            array[index][1] ++;
         }
         else
         {
            array[array_ptr][0] = elem;
            array[array_ptr][1]++;
            array_ptr++;
         }        
      }
      /*
      for(int i=0; i<array_ptr; i++)
      {
         cout << array[i][0] << " " << array[i][1] << endl;
      }
      */
      int most_freq = highest_freq(array, array_ptr);
      cout << array[most_freq][0] << " " << array[most_freq][1] << endl;
   }

   return 0;
}

int found(int elem, int array[][2], int size)
{
   for(int i=0; i<size; i++)
   {
      if( array[i][0] == elem )
      {
         return i;
      }
   }
   return -1;
}

int highest_freq(int array[][2], int size)
{
   int max_freq=-1, max_elem=-1, max_index=-1;
   for(int i=0; i<size; i++)
   {
      if(array[i][1] > max_freq)
      {
         max_freq = array[i][1];
         max_elem = array[i][0];
         max_index = i;
      }
      else if(array[i][1] == max_freq and array[i][0] < max_elem)
      {
         max_freq = array[i][1];
         max_elem = array[i][0];
         max_index = i;
      }     
   }
   return max_index;
}
