#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char a[100],b[100];
  int l,j=0,count=0;
  cout<<"Enter a sentence or a name:\n";
  cin.getline(a,100);
  l=strlen(a);
  for(int i=l;i>=0;i--)
  {
    b[j]=a[i]; 
    cout<<b[j];
    j++;
  }
  int k=1;
  for(int m=0;m<=l-1;m++) 
  {
    //cout<<"\na["<<m<<"]="<<a[m];
    //cout<<"\nb["<<k<<"]="<<b[k];
    if(a[m]==b[k])
    {
      count++;
    }
    //cout<<"\ncount="<<count;
    k++;
  }
  //cout<<"\nl="<<l<<"\ncount="<<count;
  if(count==l)
  {
    cout<<"\nIt is a palindrome.";
  }
  else
  {
    cout<<"\nIt is not a palindrome";
  }
  return 0;
}