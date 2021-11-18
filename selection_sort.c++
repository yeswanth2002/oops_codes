#include <iostream>
using namespace std;
#define MAX 100

int selectionSort(int A) 
{
  int i,j,n;
  for (j=0;j<n-1;j++) 
  {
    min = j;
    for (i=j+1;i<n;i++) 
	{
      if (A[i]<A[min])
        min = i;
    }
    if(i!=min)
    {
     int temp = A[min];
     A[min] = A[i];
     A[i] = temp;
    }
  }
  return A;
}

int main() {
    int n, A[MAX],i;
  cout<<"Enter the number of elements: ";
   cin>>n;
   cout<<"Enter elements of the array: "<<endl;
   for(i=0;i<n;i++) 
   {
      cin>>A[i];
   }
  selectionSort(data, n);
  cout<<"Sorted array in Acsending Order:\n";
  for(i=0;i<n;i++) 
  {
    cout<<A[i]<<" ";
  }
}
