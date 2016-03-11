/*Input:  arr[] = {3, 7, 90, 20, 10, 50, 40}, k = 3
Output: Subarray between indexes 3 and 5
The subarray {20, 10, 50} has the least average 
among all subarrays of size 3.

Input:  arr[] = {3, 7, 5, 20, -10, 0, 12}, k = 2
Output: Subarray between [4, 5] has minimum average*/

#include<iostream.h>
#include<conio.h>

void main()
{
   clrscr();
   int i,n,a[10],k,first,second,third,avg=0,min=0,s[3]={0,0,0};
   cout<<"Enter the number of elements";
   cin>>n;
   cout<<"\nEnter the elements: \n";
   for(i=0;i<n;i++)
   cin>>a[i];
   cout<<"\nenter the number of elements to averaged: ";
   cin>>k;
   first=a[0];
   second=a[1];
   third=a[2];
   min=(first+second+third)/k;
   for(i=3;i<n-3;i++)
	{
	   first=a[i];
	   second=a[i+1];
	   third=a[i+2];
	   avg=(first+second+third)/k;
	   if(min>avg)
	      {
	         min=avg;
	         s[0]=first;
	         s[1]=second;
 	         s[2]=third;
              	      }
	}
 cout<<"\n Minimum average is: "<<min;
 cout<<"\n Subarray with minimum average is: { ";
 for(i=0;i<3;i++)
 cout<<s[i]<<"  ";
 cout<<"}";
  getch();
}