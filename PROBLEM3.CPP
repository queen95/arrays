/*We are given two sorted array. We need to merge these two arrays such that the initial numbers (after complete sorting) are in the first array and the remaining numbers are in the second array. Extra space allowed in O(1).

Example:

Input: ar1[] = {1, 5, 9, 10, 15, 20};
       ar2[] = {2, 3, 8, 13};
Output: ar1[] = {1, 2, 3, 5, 8, 9}
        ar2[] = {10, 13, 15, 20} */

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int a[10],b[10],i,j,temp,n,m,k,loop,l;
	cout<<"enter the number of elements of first array: ";
	cin>>n;
	cout<<"\nenter elements of first array in sorted way ";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the number of elements of second array: ";
	cin>>m;
	cout<<"\nenter elements of second array in sorted way ";
	for(i=0;i<m;i++)
	cin>>b[i];
	i=j=0;
	loop=m+n;
	while(loop>n)
	{
		if(a[i]>b[j])
		   {
		       temp=b[j];
		       b[j]=a[i];
		       a[i]=temp;
		       for(k=0;k<m-1;k++)
			{
			  if(b[k]>b[k+1])
			    {
			       temp=b[k+1];
			       b[k+1]=b[k];
			       b[k]=temp;
			    }
			}
			cout<<"The second array: ";
			for(l=0;l<m;l++)
			cout<<b[l]<<",";
		       i++;
		   }
		else
		if(a[i]<b[j])
		  {
		     i++;
		  }
		loop--;
	
	}
	cout<<"The first array: ";
	for(i=0;i<n;i++)
	cout<<a[i]<<",";

	cout<<"The second array: ";
	for(i=0;i<m;i++)
	cout<<b[i]<<",";
	getch();
}