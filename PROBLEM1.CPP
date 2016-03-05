/*Given a sorted array of positive integers, rearrange the array alternately i.e first element should be maximum value, second minimum value, third second max, fourth second min and so on.

Examples:

Input  : arr[] = {1, 2, 3, 4, 5, 6, 7}
Output : arr[] = {7, 1, 6, 2, 5, 3, 4}

Input  : arr[] = {1, 2, 3, 4, 5, 6}
Output : arr[] = {6, 1, 5, 2, 4, 3} */

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int n,m,loop,i,b[10]={0},a[10],j=1,k=0;
	cout<<"enter the number of elements";
	cin>>n;
	m=n;          //copy of total elements used in printing at last.
	cout<<"\n enter the elements";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Original array: ";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	loop=n/2+1;
       while(loop>0)
	{
	b[j]=a[n-1]; 	//note1: j starts from 1.
	b[j+1]=a[k];
	k++;
	j=j+2;
	n--;
	loop--;
	}
	cout<<"\n";
	cout<<"Processed Array: ";
	for(i=1;i<=m;i++)      //p.s::note1.
	cout<<b[i]<<" ";
 getch();
}