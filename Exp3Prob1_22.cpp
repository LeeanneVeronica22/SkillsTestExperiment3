#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int  size=10, array[50], i, j, temp, total, ave;
 
  cout<< "Enter 10 numbers: ";
  for (i=0; i<size; i++)
  {
      cin>> array[i];
  }
  cout << endl;
  
  for (i=0; i<size; i++)
  {
      for (j=i+1; j< size; j++)
      {
          if(array[i]> array[j])
          {
              temp = array[i];
              array[i]= array[j];
              array[j]=temp;
          }
      }
  }
  
  cout<< "Array after sorting: \n";
  for (i=0; i<size; i++)
  {
      cout <<array[i]<<" ";
  }
  cout << endl;
  cout<< "\nsmallest number: \n"<< array[0];
  cout << endl;
  cout<< "\nlargest number: \n" << array[9];

for (i=0; i< size; i++)
{
    total+=array[i];
}
cout << endl;
 cout<< "\ntotal: \n"<<total; 
 getch();
  return 0;
}
  

