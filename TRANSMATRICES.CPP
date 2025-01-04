#include<iostream>
using namespace std;
 int main()
 {
   int mat[3][3],i,j;
   cout<<"\n\nEnter numbers for matrices:\n\n";

   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       cin>>mat[i][j];
     }
   }

   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       cout<<mat[i][j]<<" ";
     }
     cout<<"\n";
   }


   cout<<"\n\nTranspose of the above matrix is\n\n";

   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       cout<<mat[j][i];
       cout<<" ";
     }
     cout<<"\n";
   }

   return 0;
   }