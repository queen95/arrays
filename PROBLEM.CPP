/*Given an array of integers, count number of subarrays (of size more than one) that are strictly increasing.

Examples:

Input: arr[] = {1, 4, 3}
Output: 1
There is only one subarray {1, 4}

Input: arr[] = {1, 2, 3, 4}
Output: 6
There are 6 subarrays {1, 2}, {1, 2, 3}, {1, 2, 3, 4}
		      {2, 3}, {2, 3, 4} and {3, 4}*/

#include<conio.h>
#include<iostream.h>

void main()
{
	clrscr();
	int i,j,n,a[10],count=0;
	cout<<"Enter the number of elements";
	cin>>n;
	cout<<"\nEnter the array elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		   {
			if(a[j]>a[j-1])
			 count++;
			else
			 break;
		   }
	}
	cout<<"The number of subsets are: "<<count;
	getch();
}