#include<iostream>
#include<math.h>
using namespace std;

//ADDITION:

float add(long double c,long double p, long double q,long double r)
{
c=p+q+r;
cout<<"\nTHE ADDITION OF THREE NUMBERS = "<<c;
return 0;
}

float add(long double c,long double p, long double q,long double r,long double s)
{
c=p+q+r+s;
cout<<"\nTHE ADDITION OF FOUR NUMBERS = "<<c;
return 0;
}

float add(long double c,long double p, long double q,long double r,long double s,long double t)
{
c=p+q+r+s+t;
cout<<"\nTHE ADDITION OF FIVE NUMBERS = "<<c;
return 0;
}

float add(long double c,long double p, long double q,long double r,long double s,long double t,long double u)
{
c=p+q+r+s+t+u;
cout<<"\nTHE ADDITION OF SIX NUMBERS = "<<c;
return 0;
}

float add(long double c,long double p, long double q,long double r,long double s,long double t,long double u,long double v)
{
c=p+q+r+s+t+u+v;
cout<<"\nTHE ADDITION OF SEVEN NUMBERS = "<<c;
return 0;
}

float add(long double c,long double p, long double q,long double r,long double s,long double t,long double u,long double v,long double w)
{
c=p+q+r+s+t+u+v+w;
cout<<"\nTHE ADDITION OF EIGHT NUMBERS = "<<c;
return 0;
}
//------------------------------------------------------------------------------------------------
//SUBTRACTION:

float sub(long double c,long double p, long double q,long double r)
{
c=p-q-r;
cout<<"\nTHE SUBTRACTION OF THREE  NUMBERS = "<<c;
return 0;
}

float sub(long double c,long double p, long double q,long double r,long double s)
{
c=p-q-r-s;
cout<<"\nTHE SUBTRACTION OF FOUR  NUMBERS = "<<c;
return 0;
}

float sub(long double c,long double p, long double q,long double r,long double s,long double t)
{
c=p-q-r-s-t;
cout<<"\nTHE SUBTRACTION OF FIVE  NUMBERS = "<<c;
return 0;
}

float sub(long double c,long double p, long double q,long double r,long double s,long double t,long double u)
{
c=p-q-r-s-t-u;
cout<<"\nTHE SUBTRACTION OF SIX  NUMBERS = "<<c;
return 0;
}

float sub(long double c,long double p, long double q,long double r,long double s,long double t,long double u,long double v)
{
c=p-q-r-s-t-u-v;
cout<<"\nTHE SUBTRACTION OF SEVEN  NUMBERS = "<<c;
return 0;
}

float sub(long double c,long double p, long double q,long double r,long double s,long double t,long double u,long double v,long double w)
{
c=p-q-r-s-t-u-v-w;
cout<<"\nTHE SUBTRACTION OF EIGHT  NUMBERS = "<<c;
return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------
//MULTIPLICATION:

float mul(long double c,long double p, long double q,long double r)
{
c=p*q*r;
cout<<"\nTHE MULTIPLICATION OF THREE  NUMBERS = "<<c;
return 0;
}

float mul(long double c,long double p, long double q,long double r,long double s)
{
c=p*q*r*s;
cout<<"\nTHE MULTIPLICATION OF FOUR  NUMBERS = "<<c;
return 0;
}

float mul(long double c,long double p, long double q,long double r,long double s,long double t)
{
c=p*q*r*s*t;
cout<<"\nTHE MULTIPLICATION OF FIVE  NUMBERS = "<<c;
return 0;
}

float mul(long double c,long double p, long double q,long double r,long double s,long double t,long double u)
{
c=p*q*r*s*t*u;
cout<<"\nTHE MULTIPLICATION OF SIX  NUMBERS = "<<c;
return 0;
}

float mul(long double c,long double p, long double q,long double r,long double s,long double t,long double u,long double v)
{
c=p*q*r*s*t*u*v;
cout<<"\nTHE MULTIPLICATION OF SEVEN  NUMBERS = "<<c;
return 0;
}

float mul(long double c,long double p, long double q,long double r,long double s,long double t,long double u,long double v,long double w)
{
c=p*q*r*s*t*u*v*w;
cout<<"\nTHE MULTIPLICATION OF EIGHT  NUMBERS = "<<c;
return 0;
}
//------------------------------------------------------------------------------------------------------------------------------------------------
//DIVISION:

float div(long double c,long double p, long double q,long double r)
{
c=p/q/r;
cout<<"\nTHE DIVISION OF THREE  NUMBERS = "<<c;
return 0;
}

float div(long double c,long double p, long double q,long double r,long double s)
{
c=p/q/r/s;
cout<<"\nTHE DIVISION OF FOUR  NUMBERS = "<<c;
return 0;
}

float div(long double c,long double p, long double q,long double r,long double s,long double t)
{
c=p/q/r/s/t;
cout<<"\nTHE DIVISION OF FIVE  NUMBERS = "<<c;
return 0;
}

float div(long double c,long double p, long double q,long double r,long double s,long double t,long double u)
{
c=p/q/r/s/t/u;
cout<<"\nTHE DIVISION OF SIX  NUMBERS = "<<c;
return 0;
}

float div(long double c,long double p, long double q,long double r,long double s,long double t,long double u,long double v)
{
c=p/q/r/s/t/u/v;
cout<<"\nTHE DIVISION OF SEVEN  NUMBERS = "<<c;
return 0;
}

float div(long double c,long double p, long double q,long double r,long double s,long double t,long double u,long double v,long double w)
{
c=p/q/r/s/t/u/v/w;
cout<<"\nTHE DIVISION OF EIGHT  NUMBERS = "<<c;
return 0;
}
//------------------------------------------------------------------------------------------------------------------------------------------

int main()
{
start:
int n;
char m;

cout<<"\n\nCHOOSE ANY OPERATION TO PERFORM:\n\n";
cout<<"ENTER 'a' FOR ADDITION\n";
cout<<"ENTER 's' FOR SUBTRACTION\n";
cout<<"ENTER 'm' FOR MULTIPLICATION\n";
cout<<"ENTER 'd' FOR DIVISION\n";
cout<<"ENTER 'p' FOR POWER\n";
cout<<"ENTER 'l' FOR log10\n";
cout<<"ENTER 'q' FOR SQUARE ROOT\n\n";
cout<<"INPUT: ";
cin>>m;
long double a,b,c;
long double p,q,r,s,t,u,v,w;
long double e,f,g,h,i;
switch(m)
{
case 'a':
cout<<"\n\nADDITION:\n\n";
cout<<" ENTER '1' TO ADD TWO NUMBERS\n";
cout<<" ENTER '2' TO ADD THREE NUMBERS\n";
cout<<" ENTER '3' TO ADD FOUR NUMBERS\n";
cout<<" ENTER '4' TO ADD FIVE NUMBERS\n";
cout<<" ENTER '5' TO ADD SIX NUMBERS\n";
cout<<" ENTER '6' TO ADD SEVEN NUMBERS\n";
cout<<" ENTER '7' TO ADD EIGHT NUMBERS\n\n";
cout<<"INPUT: ";
cin>>n;
 
break;

case 's':
cout<<"\n\nSUBTRACTION:\n\n";
cout<<" ENTER '8' TO SUBTRACT TWO NUMBERS\n";
cout<<" ENTER '9' TO SUBTRACT THREE NUMBERS\n";
cout<<" ENTER '10' TO SUBTRACT FOUR NUMBERS\n";
cout<<" ENTER '11' TO SUBTRACT FIVE NUMBERS\n";
cout<<" ENTER '12' TO SUBTRACT SIX NUMBERS\n";
cout<<" ENTER '13' TO SUBTRACT SEVEN NUMBERS\n";
cout<<" ENTER '14' TO SUBTRACT EIGHT NUMBERS\n\n";
cout<<"INPUT: ";
cin>>n;
 
break;

case 'm':
cout<<"\n\nMULTIPLICATION:\n\n";
cout<<" ENTER '15' TO MULTIPLY TWO NUMBERS\n";
cout<<" ENTER '16' TO MULTIPLY THREE NUMBERS\n";
cout<<" ENTER '17' TO MULTIPLY FOUR NUMBERS\n";
cout<<" ENTER '18' TO MULTIPLY FIVE NUMBERS\n";
cout<<" ENTER '19' TO MULTIPLY SIX NUMBERS\n";
cout<<" ENTER '20' TO MULTIPLY SEVEN NUMBERS\n";
cout<<" ENTER '21' TO MULTIPLY EIGHT NUMBERS\n\n";
cout<<"INPUT: ";
cin>>n;
 
break;

case 'd':
cout<<"\n\nDIVISION:\n\n";
cout<<" ENTER '22' TO DIVIDE TWO NUMBERS\n";
cout<<" ENTER '23' TO DIVIDE THREE NUMBERS\n";
cout<<" ENTER '24' TO DIVIDE FOUR NUMBERS\n";
cout<<" ENTER '25' TO DIVIDE FIVE NUMBERS\n";
cout<<" ENTER '26' TO DIVIDE SIX NUMBERS\n";
cout<<" ENTER '27' TO DIVIDE SEVEN NUMBERS\n";
cout<<" ENTER '28' TO DIVIDE EIGHT NUMBERS\n\n";
cout<<"INPUT: ";
cin>>n;
 
break;

case 'p':
cout<<"\n\nENTER TWO NUMBERS FOR OPERATION OF POWER:\n\n";
cin>>a>>b;
c=pow(a,b);
cout<<"\nTHE SOLUTION OF "<<a<<"^"<<b<<" = "<<c;
break;

case 'l':
cout<<"\n\nENTER TWO NUMBERS FOR CALCULATION OF log10:\n\n";
cin>>e;
cin>>f;
g=e*log10(f);
cout<<"\nTHE SOLUTION OF "<<e<<"log10("<<f<<") = "<<g;
break;

case 'q':
cout<<"\n\nENTER A NUMBER WHICH YOU WANT SQUARE ROOT OF: \n\n";
cin>>h;
i=sqrt(h);
cout<<"\nTHE SQUARE ROOT OF "<<h<<" = "<<i;
break;

default:
cout<<"\n\nUNEXPECTED COMMAND REQUESTED";
}
//---------------------------------------------------------------------------------------------------------------------------

switch(n)
{
case 1:
cout<<"\n\nENTER TWO NUMBERS FOR ADDITION:\n\n";
cin>>a>>b;
c=a+b;
cout<<"\nTHE ADDITION OF TWO NUMBERS= "<<c;
break;
case 2:
cout<<"\n\nENTER THREE NUMBERS FOR ADDITION:\n\n";
cin>>p>>q>>r;
add(c,p,q,r);
break;
case 3:
cout<<"\nENTER FOUR NUMBERS FOR ADDITION:\n\n";
cin>>p>>q>>r>>s;
add(c,p,q,r,s);
break;
case 4:
cout<<"\n\nENTER FIVE NUMBERS FOR ADDITION:\n\n";
cin>>p>>q>>r>>s>>t;
add(c,p,q,r,s,t);
break;
case 5:
cout<<"\n\nENTER SIX NUMBERS FOR ADDITION:\n\n";
cin>>p>>q>>r>>s>>t>>u;
add(c,p,q,r,s,t,u);
break;
case 6:
cout<<"\n\nENTER SEVEN NUMBERS FOR ADDITION:\n\n";
cin>>p>>q>>r>>s>>t>>u>>v;
add(c,p,q,r,s,t,u,v);
break;
case 7:
cout<<"\n\nENTER EIGHT NUMBERS FOR ADDITION:\n\n";
cin>>p>>q>>r>>s>>t>>u>>v>>w;
add(c,p,q,r,s,t,u,v,w);
break;

case 8:
cout<<"\n\nENTER TWO NUMBERS FOR SUBTRACTION:\n\n";
cin>>a>>b;
c=a-b;
cout<<"\nTHE SUBTRACTION OF TWO NUMBERS= "<<c;
break;
case 9:
cout<<"\n\nENTER THREE NUMBERS FOR SUBTRACTION:\n\n";
cin>>p>>q>>r;
sub(c,p,q,r);
break;
case 10:
cout<<"\n\nENTER FOUR NUMBERS FOR SUBTRACTION:\n\n";
cin>>p>>q>>r>>s;
sub(c,p,q,r,s);
break;
case 11:
cout<<"\n\nENTER FIVE NUMBERS FOR SUBTRACTION:\n\n";
cin>>p>>q>>r>>s>>t;
sub(c,p,q,r,s,t);
break;
case 12:
cout<<"\n\nENTER SIX NUMBERS FOR SUBTRACTION:\n\n";
cin>>p>>q>>r>>s>>t>>u;
sub(c,p,q,r,s,t,u);
break;
case 13:
cout<<"\n\nENTER SEVEN NUMBERS FOR SUBTRACTION:\n\n";
cin>>p>>q>>r>>s>>t>>u>>v;
sub(c,p,q,r,s,t,u,v);
break;
case 14:
cout<<"\n\nENTER EIGHT NUMBERS FOR SUBTRACTION:\n\n";
cin>>p>>q>>r>>s>>t>>u>>v>>w;
sub(c,p,q,r,s,t,u,v,w);
break;

case 15:
cout<<"\n\nENTER TWO NUMBERS FOR MULTIPLICATION:\n\n";
cin>>a>>b;
c=a*b;
cout<<"\nTHE MULTIPLICATION OF TWO NUMBERS= "<<c;
break;
case 16:
cout<<"\n\nENTER THREE NUMBERS FOR MULTIPLICATION:\n\n";
cin>>p>>q>>r;
mul(c,p,q,r);
break;
case 17:
cout<<"\n\nENTER FOUR NUMBERS FOR MULTIPLICATION:\n\n";
cin>>p>>q>>r>>s;
mul(c,p,q,r,s);
break;
case 18 :
cout<<"\n\nENTER FIVE NUMBERS FOR MULTIPLICATION:\n\n";
cin>>p>>q>>r>>s>>t;
mul(c,p,q,r,s,t);
break;
case  19:
cout<<"\n\nENTER SIX NUMBERS FOR MULTIPLICATION:\n\n";
cin>>p>>q>>r>>s>>t>>u;
mul(c,p,q,r,s,t,u);
break;
case 20:
cout<<"\n\nENTER SEVEN NUMBERS FOR MULTIPLICATION:\n\n";
cin>>p>>q>>r>>s>>t>>u>>v;
mul(c,p,q,r,s,t,u,v);
break;
case  21:
cout<<"\n\nENTER EIGHT NUMBERS FOR MULTIPLICATION:\n\n";
cin>>p>>q>>r>>s>>t>>u>>v>>w;
mul(c,p,q,r,s,t,u,v,w);
break;

case 22:
cout<<"\n\nENTER TWO NUMBERS FOR DIVISION:\n\n";
cin>>a>>b;
c=a/b;
cout<<"\nTHE QUOTIENT OF TWO NUMBERS= "<<c;
break;
case  23:
cout<<"\n\nENTER THREE NUMBERS FOR DIVISION:\n\n";
cin>>p>>q>>r;
div(c,p,q,r);
break;
case 24:
cout<<"\n\nENTER FOUR NUMBERS FOR DIVISION:\n\n";
cin>>p>>q>>r>>s;
div(c,p,q,r,s);
break;
case 25:
cout<<"\n\nENTER FIVE NUMBERS FOR DIVISION:\n\n";
cin>>p>>q>>r>>s>>t;
div(c,p,q,r,s,t);
break;
case 26:
cout<<"\n\nENTER SIX NUMBERS FOR DIVISION:\n\n";
cin>>p>>q>>r>>s>>t>>u;
div(c,p,q,r,s,t,u);
break;
case 27:
cout<<"\n\nENTER SEVEN NUMBERS FOR DIVISION:\n\n";
cin>>p>>q>>r>>s>>t>>u>>v;
div(c,p,q,r,s,t,u,v);
break;
case 28:
cout<<"\n\nENTER EIGHT NUMBERS FOR DIVISION:\n\n";
cin>>p>>q>>r>>s>>t>>u>>v>>w;
div(c,p,q,r,s,t,u,v,w);
break;

default:
{
cout<<"\n\nYou can try again :)";
goto start;
}
return 0;
}
}