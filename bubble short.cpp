#include<iostream>
using namespace std ;
template<class T>
void sort(T arr[],int size )
{
  for(int i =0;i<size-1;i++)
  {
   for (int j=0;j<size -i-1;j++)
   {
    if (arr[j]>arr[j+1])
    {
     T temp=arr[j];
     arr[j]=arr[j+1];
     arr[j+1]= temp;
    }
   }
  }
}
template<class T>
void print(T arr[],int size)
{
for (int i=0;i<size;i++)
 {
  cout<<arr[i]<<endl;
 }
 }

int main ()
{
 int arri[10];
 double arrd[10];
 int size ;
 cout << "ENTER SIZE::" << endl;
 cin>>size ;
 cout << "ENTER INTEGER ARRAY ELEMENTS" << endl;
 for (int i=0;i<size;i++)
 {
  cin>>arri[i];
 }
 cout << "ENTER DOUBLE ARRAY ELEMENTS" << endl;
 for (int i=0;i<size;i++)
 {
  cin>>arrd[i];
 }
 
 cout << "INTEGER ARRAY ELEMENTS BEFORE SORTING" << endl;
 for (int i=0;i<size;i++)
 {
  cout<<arri[i]<<endl;
 }
cout << "DOUBLE ARRAY ELEMENTS BEFORE SORTING" << endl;
 for (int i=0;i<size;i++)
 {
  cout<<arrd[i]<<endl;
 }
 cout << "AFTER SORTING INTEGER ARRAY" << endl;
 sort (arri,size);
 print (arri,size);
 cout << "********************" << endl;
 cout << "AFTER SORTING DOUBLE ARRAY" << endl;
 sort (arrd,size);
 print (arrd,size);
 return 0;
 }
 
