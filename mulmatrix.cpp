#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int l,m,n,o,num,big,A[100][100],B[100][100],C[100][100],b='A',check[5]={l,m,n,o};
  cout<<"Enter the no. of matrices you want to multiply:\n";
  cin>>num;
  cout<<"\nEnter the order of the matrix-"<<b<<":\n";
  cout<<"i= ";
  cin>>l;
  cout<<"j= ";
  cin>>m;
  cout<<"\nEnter the elements of matrix-A\n";
  for(int i=0;i<l;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>A[i][j];
    }
  }
  cout<<"\nA=\n";
  for(int i=0;i<l;i++)
  {
    cout<<"|\t";    // For horizontal tab- '\t'
    for(int j=0;j<m;j++)
    {
      cout<<A[i][j]<<"\t";
    }
    cout<<"|\n";
  }
  cout<<"\n\nEnter the order of the matrix-B:\n";
  cout<<"i= ";
  cin>>n;
  cout<<"j= ";
  cin>>o;
  cout<<"\nEnter the elements of matrix- B\n";
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<o;j++)
    {
      cin>>B[i][j];
    }
  }
  cout<<"\nB=\n";
  for(int i=0;i<n;i++)
  {
    cout<<"|\t";
    for(int j=0;j<o;j++)
    {
      cout<<B[i][j]<<"\t";
    }
    cout<<"   |\n";                                                                                                  
  }
  //bignum
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      if(check[j]>check[j+1])
      {
        big=check[j];
      }
    }
  }
  cout<<"\n\nMatrix-C=\n";
  for(int i=0;i<big;i++)
  {
    for(int j=0;j<big;j++)
    {
    }
  }
  return 0;
}