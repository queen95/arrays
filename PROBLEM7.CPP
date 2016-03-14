/*Given two integer arrays of same size, “arr[]” and “index[]”, reorder elements in “arr[]” according to given index array. It is not allowed to given array arr’s length.

Example:

Input:  arr[]   = [10, 11, 12];
        index[] = [1, 0, 2];
Output: arr[]   = [11, 10, 12]
        index[] = [0,  1,  2] 

Input:  arr[]   = [50, 40, 70, 60, 90]
        index[] = [3,  0,  4,  1,  2]
Output: arr[]   = [40, 60, 90, 50, 70]
        index[] = [0,  1,  2,  3,   4]   */

#include<iostream.h>
#include<conio.h>
 
void main()
{
clrscr();
int a[10],index[10],i,j,temp[10],n,x;
cout<<"enter the number of elements: ";
cin>>n;
cout<<"\nenter the array elements\n ";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\nenter the index elements\n ";
for(i=0;i<n;i++)
cin>>index[i];
for(i=0;i<n;i++)
{
  x=index[i];
  temp[x]=a[i];
}
cout<<"\n the input array is:  ";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\n the index array is:  ";
for(i=0;i<n;i++)
cout<<index[i]<<" ";
cout<<"\n the new array is:  ";
for(i=0;i<n;i++)
cout<<temp[i]<<" ";
getch();
}