/*Given an array of distinct integers and a sum value. Find count of triplets with sum smaller than given sum value.

Examples:

Input : arr[] = {-2, 0, 1, 3}
	sum = 2.
Output : 2
Explanation :  Below are triplets with sum less than 2
	       (-2, 0, 1) and (-2, 0, 3)

Input : arr[] = {5, 1, 3, 4, 7}
	sum = 12.
Output : 4
Explanation :  Below are triplets with sum less than 4
	       (1, 3, 4), (1, 3, 5), (1, 3, 7) and
	       (1, 4, 5)                      */

#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
int a[10],i,j,k,sum=0,n,min,count=0;
cout<<"enter the number of elements of array: ";
cin>>n;
cout<<"\nenter the array elements:\n";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\n enter the minimum sum: ";
cin>>min;
for(i=0;i<n-2;i++)
{
   for(j=i+1;j<n-1;j++)
     for(k=j+1;k<n;k++)
   {
      sum=0;
      sum=a[i]+a[j]+a[k];
      if(sum<min)
	 count++;
  }
}
cout<<"\nthe number sets that have less sum than entered minimum sum ("<<min<<") : "<<count;
getch();
}