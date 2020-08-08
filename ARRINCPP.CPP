#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
clrscr();
int arr[1000],i,j;
cout<<"Enter the number of elements to be printed: "<<endl;
cin>>j;
cout<<"Enter the elements: "<<endl;
for(i=0;i<j;i++)
{
cin>>arr[i];
}
cout<<"you entered: "<<endl;
for(i=0;i<j;i++)
{
cout<<arr[i]<<endl;
}
getche();
}