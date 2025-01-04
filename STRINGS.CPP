#include<iostream>
using namespace std;
#include<string.h>
 int main()
 {
 char a[100],b[100],c[100],d[100],e[100],f[100],k[100];
 long double l,m,n,o;
 cout<<"\nENTER YOUR FIRST NAME: ";
 cin.getline(a,100);
 strcpy(d,a);
 cout<<"YOUR FIRST NAME IS "<<d<<"\n";
 l=strlen(a);
 cout<<"THE LENGTH OF YOUR FIRST NAME = "<<l<<".\n";

 cout<<"\nENTER YOUR MIDDLE NAME: ";
 cin.getline(b,100);
 strcpy(e,b);
 cout<<"YOUR MIDDLE NAME IS "<<e<<"\n";
 m=strlen(b);
 cout<<"THE LENGTH OF YOUR MIDDLE NAME = "<<m<<".\n";

 cout<<"\nENTER YOUR LAST NAME: ";
 cin.getline(c,100);
 strcpy(f,c);
 cout<<"YOUR LAST NAME IS "<<f<<"\n";
 n=strlen(c);
 cout<<"THE LENGTH OF YOUR LAST NAME = "<<n<<".\n";

 char g[100]="";
 char h[100]="";
 char i[100]="";
 strcat(a,g);
 strcat(b,h);
 strcat(c,i);
 cout<<"\nYOUR FULL NAME IS "<<a<<" "<<b<<" "<<c<<".";

 o=l+m+n;
 cout<<"\n\nTHE TOTAL LENGTH OF YOUR FULL NAME = "<<o;

 cout<<"\n\nENTER YOUR FRIENDS NAME:\n";
 cin.getline(k,100);
 if(strcmp(k,d)==0)
 {
  cout<<"YOUR AND YOUR FRIEND'S NAME IS SAME.";
 }
 else
 {
  cout<<"YOUR AND YOUR FRIEND'S NAME IS NOT SAME.";
 }
 return 0;
 }