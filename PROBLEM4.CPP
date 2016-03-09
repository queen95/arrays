/*
Given an array arr[] of size n. Three elements arr[i], arr[j] and arr[k] form an inversion of size 3 if a[i] > a[j] >a[k] and i < j < k. Find total number of inversions of size 3.

Example:

Input:  {8, 4, 2, 1}
Output: 4
The four inversions are (8,4,2), (8,4,1), (4,2,1) and (8,2,1).

Input:  {9, 6, 4, 5, 8}
Output:  2
The two inversions are {9, 6, 4} and {9, 6, 5}
*/

#include<iostream.h>
#include<conio.h>
 void main()
{
clrscr();
int a[10],i,n,j,k;
int count=0;
cout<<"enter the number of elements: ";
cin>>n;
cout<<"\nenter the elements: " ;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
 for(j=i+1;j<n-1;j++)
   {
      if(a[i]>a[j])
	{
	   for(k=j+1;k<n;k++)
	       {
		if(a[j]>a[k])
		   count++;
	       }
	}
   }
}
cout<<"\n The number of possible inversions are: "<<count;
getch();
}