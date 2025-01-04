#include<iostream>
using namespace std;
 int main()
 {
  int n;
  cout<<"\n\nENTER ANY POSITIVE NUMBER:\n\n";
  cin>>n;
  if(n>=0)
  {
    if(n%2==0)
    {
     cout<<"\n"<<n<<" IS AN EVEN NUMBER.";
    }
    else
    {
     cout<<"\n"<<n<<" IS AN ODD NUMBER.";
    }
  }
  else
  {
    cout<<"\nNUMBER SHOULD NOT BE NEGATIVE.";
  }
  return 0; 
  }
