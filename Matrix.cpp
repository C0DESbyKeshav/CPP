#include <iostream>
using namespace std;
int main()
{ 
 
  int DA,a11,a12,a13,a21,a22,a23,a31,a32,a33,n,i,j,p,q,r,swap1,swap2,swap3,s1,s2,s3;
  int a[3][3];
  cout<<"\n\nSolving Inverse of a matrix using Row transformation";
  cout<<"\nNOTE: Inverse of a matrix can be found only if that matrix is a square matrix";
  start:
  cout<<"\n\nEnter '2' for 2x2 matrix or \nEnter '3' for 3x3 matrix.\n";
  cin>>n;
 
  
  switch(n)
  {
    case 2:   
      break;
    
    case 3:
      cout<<"\n\nEnter the elements (numbers only):";
      cout<<"\nEnter the elements in the sequence of:\n";
      for(i=1;i<=3;i++)
      {
        for(j=1;j<=3;j++)
        {
          cout<<"a"<<i<<j<<"= ";
          cin>>a[i][j];
        }
      }  
     
      cout<<"        _     _\n";
      cout<<"       | "<<a[1][1]<<" "<<a[1][2]<<" "<<a[1][3]<<" |\n";
      cout<<"Let A= | "<<a[2][1]<<" "<<a[2][2]<<" "<<a[2][3]<<" |\n";              
      cout<<"       | "<<a[3][1]<<" "<<a[3][2]<<" "<<a[3][3]<<" |\n";
      cout<<"       |_     _|\n\n";
    
      p=(a[2][2]*a[3][3])-(a[3][2]*a[2][3]);
      q=(a[2][1]*a[3][3])-(a[3][1]*a[2][3]);
      r=(a[2][1]*a[3][2])-(a[3][1]*a[2][2]);
      DA=(a[1][1]*p)-(a[1][2]*q)+(a[1][3]*r);
      
      cout<<"So, |A|= "<<a[1][1]<<"[("<<a[2][2]<<"x"<<a[3][3]<<")-("<<a[3][2]<<"x"<<a[2][3]<<")] - ("<<a[1][2]<<")[("<<a[2][1]<<"x"<<a[3][3]<<")-("<<a[3][1]<<"x"<<a[2][3]<<")] + ("<<a[1][3]<<")[("<<a[2][1]<<"x"<<a[3][2]<<")-("<<a[3][1]<<"x"<<a[2][2]<<")]\n";
      cout<<"       = "<<a[1][1]<<"("<<p<<") - [("<<a[1][2]<<")x("<<q<<")] + [("<<a[1][3]<<")x("<<r<<")]\n";
      cout<<"So, |A|= "<<DA;
      if(DA==0)
      {
        cout<<"\n\nSince, |A| is equal to 0";
        cout<<"\n   So, |A| is a singular matrix.";
        cout<<"\n   So,  A' does not exists.";
        cout<<"\n   So, As provided, We can't find the inverse of matrix A.\n\n";
      }
      else
      {
        cout<<"\n\nSince, |A| is not equal to 0";
        cout<<"\n   So, |A| is a non singular matrix.";
        cout<<"\n   So,  A' does exists.";
       
        a11=1;  a12=0;  a13=0;
        a21=0;  a22=1;  a23=0;
        a31=0;  a32=0;  a33=1;

        cout<<"\n\nConsider AxA'=I\n";
        cout<<"So,\n";
        cout<<" _     _       _     _\n";
        cout<<"| "<<a[1][1]<<" "<<a[1][2]<<" "<<a[1][3]<<" |     | "<<a11<<" "<<a12<<" "<<a13<<" |\n";
        cout<<"| "<<a[2][1]<<" "<<a[2][2]<<" "<<a[2][3]<<" |xA'= | "<<a21<<" "<<a22<<" "<<a23<<" |\n";      
        cout<<"| "<<a[3][1]<<" "<<a[3][2]<<" "<<a[3][3]<<" |     | "<<a31<<" "<<a32<<" "<<a33<<" |\n";
        cout<<"|_     _|     |_     _|";
        
        if(a[1][1]!=1)
        {
          if(a[2][1]=1)
          {
            int prob32=a[3][2],prob33=a[3][3];

            swap1=a[1][1];
            a[1][1]=a[2][1];
            a[2][1]=swap1;
            swap2=a[1][2];
            a[1][2]=a[2][2];
            a[2][2]=swap2;
            swap3=a[1][3];
            a[1][3]=a[2][3];
            a[2][3]=swap3;
           
            s1=a11;
            a11=a21;
            a21=s1;
            s2=a12;
            a12=a22;
            a22=s2;
            s3=a13;
            a13=a23;
            a23=s3;

            cout<<"\n\nR1 <-> R2\n\n";
            
            cout<<" _     _       _     _\n";
            cout<<"| "<<a[1][1]<<" "<<a[1][2]<<" "<<a[1][3]<<" |     | "<<a11<<" "<<a12<<" "<<a13<<" |\n";
            cout<<"| "<<a[2][1]<<" "<<a[2][2]<<" "<<a[2][3]<<" |xA'= | "<<a21<<" "<<a22<<" "<<a23<<" |\n";   
            cout<<"| "<<a[3][1]<<" "<<prob32 <<" "<<prob33 <<" |     | "<<a31<<" "<<a32<<" "<<a33<<" |\n";  
            cout<<"|_     _|     |_     _|\n\n";

            a[2][1]=a[2][1]-a[2][1]*a[1][1]; a[3][1]=a[3][1]-a[3][1]*a[1][1];
            a[2][2]=a[2][2]-a[2][1]*a[1][2]; prob32=prob32-a[3][1]*a[2][1];
            a[2][3]=a[2][3]-a[2][1]*a[1][3]; prob33=prob33-a[3][1]*a[1][3];
            a21=a21-a[2][1]*a11; a31=a31-a[3][1]*a11;
            a22=a22-a[2][1]*a12; a32=a32-a[3][1]*a12;
            a23=a23-a[2][1]*a13; a33=a33-a[3][1]*a13;

            cout<<" _     _       _     _\n";
            cout<<"| "<<a[1][1]<<" "<<a[1][2]<<" "<<a[1][3]<<" |     | "<<a11<<" "<<a12<<" "<<a13<<" |\n";
            cout<<"| "<<a[2][1]<<" "<<a[2][2]<<" "<<a[2][3]<<" |xA'= | "<<a21<<" "<<a22<<" "<<a23<<" |\n";   
            cout<<"| "<<a[3][1]<<" "<<prob32 <<" "<<prob33 <<" |     | "<<a31<<" "<<a32<<" "<<a33<<" |\n";  
            cout<<"|_     _|     |_     _|";

          }
        }
        else
        {

        }
        
      }
        
     break; 
        
  
    default:
      cout<<"\n\nPlease enter appropriate commands.\n\n";
      goto start;
  
    }  
}