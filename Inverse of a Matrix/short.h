#include <iostream>
#include <string.h>
using namespace std;

class Short
{
public:
    int LongCh(int elen[9], char a11[10], char a12[10], char a13[10], char a21[10], char a22[10], char a23[10], char a31[10], char a32[10], char a33[10], int len11, int len12, int len13, int len21, int len22, int len23, int len31, int len32, int len33, int swap, int big)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (elen[i] > elen[j])
                {
                    swap = elen[j];
                    elen[j] = elen[i];
                    elen[i] = swap;
                }
            }
        }

        big = elen[0];

        for (int i = 0; i < 9; i++)
        {
            elen[i] = big;
        }

        // To check if why the elements are of equal length or not
        // cout<<"\n\n";
        // for(int i=0; i<=big; i++)
        //{
        //     if(i>len11)
        //     {
        //         a11[i]='*';
        //     }
        //     cout<<a11[i];
        // }
        //
        // cout<<"  ";
        // for(int i=0; i<=big; i++)
        //{
        //     if(i>len12)
        //     {
        //         a12[i]='*';
        //     }
        //     cout<<a12[i];
        // }
        //
        // cout<<"  ";
        // for(int i=0; i<=big; i++)
        //{
        //     if(i>len13)
        //     {
        //         a13[i]='*';
        //     }
        //     cout<<a13[i];
        // }
        //
        // cout<<"  ";
        // for(int i=0; i<=big; i++)
        //{
        //     if(i>len21)
        //     {
        //         a21[i]='*';
        //     }
        //     cout<<a21[i];
        // }
        //
        // cout<<"  ";
        // for(int i=0; i<=big; i++)
        //{
        //     if(i>len22)
        //     {
        //         a22[i]='*';
        //     }
        //     cout<<a22[i];
        // }
        //
        // cout<<"  ";
        // for(int i=0; i<=big; i++)
        //{
        //     if(i>len23)
        //     {
        //         a23[i]='*';
        //     }
        //     cout<<a23[i];
        // }
        //
        // cout<<"  ";
        // for(int i=0; i<=big; i++)
        //{
        //    if(i>len31)
        //    {
        //        a31[i]='*';
        //    }
        //    cout<<a31[i];
        //}
        //
        // cout<<"  ";
        // for(int i=0; i<=big; i++)
        //{
        //    if(i>len32)
        //    {
        //        a32[i]='*';
        //    }
        //    cout<<a32[i];
        //}
        //
        // cout<<"  ";
        // for(int i=0; i<=big; i++)
        //{
        //    if(i>len33)
        //    {
        //        a33[i]='*';
        //    }
        //    cout<<a33[i];
        //}

        return big;
    }

    int Swap(int a[3][3], int swap, int I11, int I12, int I13, int I21, int I22, int I23, int I31, int I32, int I33)
    {
        // swap=a[1][1];
        // a[1][1]=a[2][1];
        // a[2][1]=swap;
        //
        // swap=a[1][2];
        // a[1][2]=a[2][2];
        // a[2][2]=swap;
        //
        // swap=a[1][3];
        // a[1][3]=a[2][3];
        // a[2][3]=swap;
        //
        // swap=I11;
        // I11=I21;
        // I21=swap;
        //
        // swap=I12;
        // I12=I22;
        // I22=swap;
        //
        // swap=I13;
        // I13=I23;
        // I23=swap;

        swap = a[1][1];
        a[1][1] = a[2][1];
        a[2][1] = swap;

        swap = a[1][2];
        a[1][2] = a[2][2];
        a[2][2] = swap;

        swap = a[1][3];
        a[1][3] = a[2][3];
        a[2][3] = swap;

        swap = I11;
        I11 = I21;
        I21 = swap;

        swap = I12;
        I12 = I22;
        I22 = swap;

        swap = I13;
        I13 = I23;
        I23 = swap;

        return 0;
    }

    int PrintA(char a11[10], char a12[10], char a13[10], char a21[10], char a22[10], char a23[10], char a31[10], char a32[10], char a33[10], int len11, int len12, int len13, int len21, int len22, int len23, int len31, int len32, int len33, int big)
    {
        // CHAR PRINT
        cout << "\n\n        __";
        for (int i = 0; i < (big * 3) + 2; i++)
        {
            cout << " ";
        }
        cout << "__";

        cout << "\n       | ";
        for (int i = 0; i <= big; i++)
        {
            if (i > len11)
            {
                a11[i] = ' ';
            }
            cout << a11[i];
        }

        cout << "  ";
        for (int i = 0; i <= big; i++)
        {
            if (i > len12)
            {
                a12[i] = ' ';
            }
            cout << a12[i];
        }

        cout << "  ";
        for (int i = 0; i <= big; i++)
        {
            if (i > len13)
            {
                a13[i] = ' ';
            }
            cout << a13[i];
        }

        cout << " |";
        cout << "\nLet A= | ";
        for (int i = 0; i <= big; i++)
        {
            if (i > len21)
            {
                a21[i] = ' ';
            }
            cout << a21[i];
        }

        cout << "  ";
        for (int i = 0; i <= big; i++)
        {
            if (i > len22)
            {
                a22[i] = ' ';
            }
            cout << a22[i];
        }

        cout << "  ";
        for (int i = 0; i <= big; i++)
        {
            if (i > len23)
            {
                a23[i] = ' ';
            }
            cout << a23[i];
        }

        cout << " |";
        cout << "\n       | ";
        for (int i = 0; i <= big; i++)
        {
            if (i > len31)
            {
                a31[i] = ' ';
            }
            cout << a31[i];
        }

        cout << "  ";
        for (int i = 0; i <= big; i++)
        {
            if (i > len32)
            {
                a32[i] = ' ';
            }
            cout << a32[i];
        }

        cout << "  ";
        for (int i = 0; i <= big; i++)
        {
            if (i > len33)
            {
                a33[i] = ' ';
            }
            cout << a33[i];
        }
        cout << " |";

        cout << "\n       |__";
        for (int i = 0; i < (big * 3) + 2; i++)
        {
            cout << " ";
        }
        cout << "__|";

        // return big;
        return 0;
    }

    int PrintAI(char a11[10], char a12[10], char a13[10], char a21[10], char a22[10], char a23[10], char a31[10], char a32[10], char a33[10], int I11, int I12, int I13, int I21, int I22, int I23, int I31, int I32, int I33, int big)
    {
        cout << "\n __";
        for (int i = 0; i < (big * 3) + 2; i++)
        {
            cout << " ";
        }
        cout << "__";

        cout << "       __   __";

        cout << "\n| ";
        for (int i = 0; i <= big; i++)
        {
            cout << a11[i];
        }

        cout << "  ";
        for (int i = 0; i <= big; i++)
        {
            cout << a12[i];
        }

        cout << "  ";
        for (int i = 0; i <= big; i++)
        {
            cout << a13[i];
        }
        cout << " |";

        cout << "     | " << I11 << " " << I12 << " " << I13 << " |";

        cout << "\n| ";
        for (int i = 0; i <= big; i++)
        {
            cout << a21[i];
        }

        cout << "  ";
        for (int i = 0; i <= big; i++)
        {
            cout << a22[i];
        }

        cout << "  ";
        for (int i = 0; i <= big; i++)
        {
            cout << a23[i];
        }
        cout << " |";

        cout << "xA'= | " << I21 << " " << I22 << " " << I23 << " |";

        cout << "\n| ";
        for (int i = 0; i <= big; i++)
        {
            cout << a31[i];
        }

        cout << "  ";
        for (int i = 0; i <= big; i++)
        {
            cout << a32[i];
        }

        cout << "  ";
        for (int i = 0; i <= big; i++)
        {
            cout << a33[i];
        }
        cout << " |";

        cout << "     | " << I31 << " " << I32 << " " << I33 << " |";

        cout << "\n|__";
        for (int i = 0; i < (big * 3) + 2; i++)
        {
            cout << " ";
        }
        cout << "__|";

        cout << "     |__   __|";

        // return big;
        return 0;
    }

    int CharToInt(char a11[10], char a12[10], char a13[10], char a21[10], char a22[10], char a23[10], char a31[10], char a32[10], char a33[10], int len11, int len12, int len13, int len21, int len22, int len23, int len31, int len32, int len33, int a[3][3], int j, int k)
    {
        j = 1, a[1][1] = 0;
        for (int i = len11 - 1; i >= 0; i--)
        {
            if (a11[0] == '-' && i == 0)
            {
                a[1][1] = -a[1][1];
            }
            else
            {
                k = a11[i] - 48;             // here, if my a11[i] is = 4 then,
                a[1][1] = (k * j) + a[1][1]; // in this line when the char value directly gets converted into int, the value of char will be stored/ calculated
                                             // i.e 4 will be taken as 52 because "char 52" = 4
                                             // so, by subtracting it by a fix value 48, any char value can be converted into the desired int form
                                             // ex., 52-48 = 4 which we wanted.
                j = j * 10;
            }
        }

        j = 1, a[1][2] = 0;
        for (int i = len12 - 1; i >= 0; i--)
        {
            if (a12[0] == '-' && i == 0)
            {
                a[1][2] = -a[1][2];
            }
            else
            {
                k = a12[i] - 48;
                a[1][2] = (k * j) + a[1][2];
                j = j * 10;
            }
        }

        j = 1, a[1][3] = 0;
        for (int i = len13 - 1; i >= 0; i--)
        {
            if (a13[0] == '-' && i == 0)
            {
                a[1][3] = -a[1][3];
            }
            else
            {
                k = a13[i] - 48;
                a[1][3] = (k * j) + a[1][3];
                j = j * 10;
            }
        }

        j = 1, a[2][1] = 0;
        for (int i = len21 - 1; i >= 0; i--)
        {
            if (a21[0] == '-' && i == 0)
            {
                a[2][1] = -a[2][1];
            }
            else
            {
                k = a21[i] - 48;
                a[2][1] = (k * j) + a[2][1];
                j = j * 10;
            }
        }

        j = 1, a[2][2] = 0;
        for (int i = len22 - 1; i >= 0; i--)
        {
            if (a22[0] == '-' && i == 0)
            {
                a[2][2] = -a[2][2];
            }
            else
            {
                k = a22[i] - 48;
                a[2][2] = (k * j) + a[2][2];
                j = j * 10;
            }
        }

        j = 1, a[2][3] = 0;
        for (int i = len23 - 1; i >= 0; i--)
        {
            if (a23[0] == '-' && i == 0)
            {
                a[2][3] = -a[2][3];
            }
            else
            {
                k = a23[i] - 48;
                a[2][3] = (k * j) + a[2][3];
                j = j * 10;
            }
        }

        j = 1, a[3][1] = 0;
        for (int i = len31 - 1; i >= 0; i--)
        {
            if (a31[0] == '-' && i == 0)
            {
                a[3][1] = -a[3][1];
            }
            else
            {
                k = a31[i] - 48;
                a[3][1] = (k * j) + a[3][1];
                j = j * 10;
            }
        }

        j = 1, a[3][2] = 0;
        for (int i = len32 - 1; i >= 0; i--)
        {
            if (a32[0] == '-' && i == 0)
            {
                a[3][2] = -a[3][2];
            }
            else
            {
                k = a32[i] - 48;
                a[3][2] = (k * j) + a[3][2];
                j = j * 10;
            }
        }

        j = 1, a[3][3] = 0;
        for (int i = len33 - 1; i >= 0; i--)
        {
            if (a33[0] == '-' && i == 0)
            {
                a[3][3] = -a[3][3];
            }
            else
            {
                k = a33[i] - 48;
                a[3][3] = (k * j) + a[3][3];
                j = j * 10;
            }
        }

        return 0;
    }

    // int IntToChar(int elen[9], char a11[10], char a12[10], char a13[10], char a21[10], char a22[10], char a23[10], char a31[10], char a32[10], char a33[10], int len11, int len12, int len13, int len21, int len22, int len23, int len31, int len32, int len33 , int a[3][3], int I11, int I12, int I13, int I21, int I22, int I23, int I31, int I32, int I33, int j, int k, int p, int q, int r, int swap, int big)
    //{
    //     cout<<"\n\n";
    //     for(int i=1; i<=3; i++)
    //     {
    //         for(int j=1; j<=3; j++)
    //         {
    //             cout<<a[i][j]<<endl;
    //         }
    //     }
    //
    //    j=1, q=a[1][1], r=a[1][1];
    //    for(p=0; q!=0 ;p++)
    //    {
    //      k = q % 10;
    //      q=q/10;
    //      j=j*10;
    //    }
    //    cout<<"\n\np= "<<p<<"\na[1][1]= "<<a[1][1];
    //    for(int i=0; i<p ;i++)
    //    {
    //        if(a[1][1]<0 && i==0)
    //        {
    //            a11[i]='-';
    //        }
    //        else
    //        {
    //            j=j/10;
    //            r=r/j;
    //            a11[i]=r+48;
    //            r=a[1][1]%j;
    //        }
    //        cout<<"\na11["<<i<<"]= "<<a11[i];
    //    }
    //    len11=p;
    //    elen[0]=p;
    //
    //    j=1,q=a[1][2], r=a[1][2];
    //    for(p=0; q!=0 ;p++)
    //    {
    //      k = q % 10;
    //      q=q/10;
    //      j=j*10;
    //    }
    //    cout<<"\n\np= "<<p<<"\na[1][2]= "<<a[1][2];
    //    for(int i=0; i<p ;i++)
    //    {
    //        if(a[1][2]<0 && i==0)
    //        {
    //            a12[i]='-';
    //        }
    //        else
    //        {
    //            j=j/10;
    //            r=r/j;
    //            a12[i]=r+48;
    //            r=a[1][2]%j;
    //        }
    //        cout<<"\na12["<<i<<"]= "<<a12[i];
    //    }
    //    len12=p;
    //    elen[1]=p;
    //
    //    j=1, q=a[1][3], r=a[1][3];
    //    for(p=0; q!=0 ;p++)
    //    {
    //      k = q % 10;
    //      q=q/10;
    //      j=j*10;
    //    }
    //    cout<<"\n\np= "<<p<<"\na[1][3]= "<<a[1][3];
    //    for(int i=0; i<p ;i++)
    //    {
    //        if(a[1][3]<0 && i==0)
    //        {
    //            a13[i]='-';
    //        }
    //        else
    //        {
    //            j=j/10;
    //            r=r/j;
    //            a13[i]=r+48;
    //            r=a[1][3]%j;
    //        }
    //        cout<<"\na13["<<i<<"]= "<<a13[i];
    //    }
    //    len13=p;
    //    elen[2]=p;
    //
    //    j=1, q=a[2][1], r=a[2][1];
    //    for(p=0; q!=0 ;p++)
    //    {
    //      k = q % 10;
    //      q=q/10;
    //      j=j*10;
    //    }
    //    cout<<"\n\np= "<<p<<"\na[2][1]= "<<a[2][1];
    //    for(int i=0; i<p ;i++)
    //    {
    //        if(a[2][1]<0 && i==0)
    //        {
    //            a21[i]='-';
    //        }
    //        else
    //        {
    //            j=j/10;
    //            r=r/j;
    //            a21[i]=r+48;
    //            r=a[2][1]%j;
    //        }
    //        cout<<"\na21["<<i<<"]= "<<a21[i];
    //    }
    //    len21=p;
    //    elen[3]=p;
    //
    //    j=1, q=a[2][2], r=a[2][2];
    //    for(p=0; q!=0 ;p++)
    //    {
    //      k = q % 10;
    //      q=q/10;
    //      j=j*10;
    //    }
    //    cout<<"\n\np= "<<p<<"\na[2][2]= "<<a[2][2];
    //    for(int i=0; i<p ;i++)
    //    {
    //        if(a[2][2]<0 && i==0)
    //        {
    //            a22[i]='-';
    //        }
    //        else
    //        {
    //            j=j/10;
    //            r=r/j;
    //            a22[i]=r+48;
    //            r=a[2][2]%j;
    //        }
    //        cout<<"\na22["<<i<<"]= "<<a22[i];
    //    }
    //    len22=p;
    //    elen[4]=p;
    //
    //    j=1, q=a[2][3], r=a[2][3];
    //    for(p=0; q!=0 ;p++)
    //    {
    //      k = q % 10;
    //      q=q/10;
    //      j=j*10;
    //    }
    //    cout<<"\n\np= "<<p<<"\na[2][3]= "<<a[2][3];
    //    for(int i=0; i<p ;i++)
    //    {
    //        if(a[2][3]<0 && i==0)
    //        {
    //            a23[i]='-';
    //        }
    //        else
    //        {
    //            j=j/10;
    //            r=r/j;
    //            a23[i]=r+48;
    //            r=a[2][3]%j;
    //        }
    //        cout<<"\na23["<<i<<"]= "<<a23[i];
    //    }
    //    len23=p;
    //    elen[5]=p;
    //
    //    j=1, q=a[3][1], r=a[3][1];
    //    for(p=0; q!=0 ;p++)
    //    {
    //      k = q % 10;
    //      q=q/10;
    //      j=j*10;
    //    }
    //    cout<<"\n\np= "<<p<<"\na[3][1]= "<<a[3][1];
    //    for(int i=0; i<p ;i++)
    //    {
    //        if(a[3][1]<0 && i==0)
    //        {
    //            a31[i]='-';
    //        }
    //        else
    //        {
    //            j=j/10;
    //            r=r/j;
    //            a31[i]=r+48;
    //            r=a[3][1]%j;
    //        }
    //        cout<<"\na31["<<i<<"]= "<<a31[i];
    //    }
    //    len31=p;
    //    elen[6]=p;
    //
    //    j=1, q=a[3][2], r=a[3][2];
    //    for(p=0; q!=0 ;p++)
    //    {
    //      k = q % 10;
    //      q=q/10;
    //      j=j*10;
    //    }
    //    cout<<"\n\np= "<<p<<"\na[3][2]= "<<a[3][2];
    //    for(int i=0; i<p ;i++)
    //    {
    //        if(a[3][2]<0 && i==0)
    //        {
    //            a32[i]='-';
    //        }
    //        else
    //        {
    //            j=j/10;
    //            r=r/j;
    //            a32[i]=r+48;
    //            r=a[3][2]%j;
    //        }
    //        cout<<"\na32["<<i<<"]= "<<a32[i];
    //    }
    //    len32=p;
    //    elen[7]=p;
    //
    //    j=1, q=a[3][3], r=a[3][3];
    //    for(p=0; q!=0 ;p++)
    //    {
    //      k = q % 10;
    //      q=q/10;
    //      j=j*10;
    //    }
    //    cout<<"\n\np= "<<p<<"\na[3][3]= "<<a[3][3];
    //    for(int i=0; i<p ;i++)
    //    {
    //        if(a[3][3]<0 && i==0)
    //        {
    //            a33[i]='-';
    //        }
    //        else
    //        {
    //            j=j/10;
    //            r=r/j;
    //            a33[i]=r+48;
    //            r=a[3][3]%j;
    //        }
    //        cout<<"\na33["<<i<<"]= "<<a33[i];
    //    }
    //    len33=p;
    //    elen[8]=p;
    //
    //    cout<<"\n\n"<<I11<<"\n"<<I12<<"\n"<<I13<<"\n"<<I21<<"\n"<<I22<<"\n"<<I23<<"\n"<<I31<<"\n"<<I32<<"\n"<<I33;
    //    cout<<"\n\n"<<len11<<"\n"<<len12<<"\n"<<len13<<"\n"<<len21<<"\n"<<len22<<"\n"<<len23<<"\n"<<len31<<"\n"<<len32<<"\n"<<len33;
    //    cout<<"\n\n"<<elen[0]<<"\n"<<elen[1]<<"\n"<<elen[2]<<"\n"<<elen[3]<<"\n"<<elen[4]<<"\n"<<elen[5]<<"\n"<<elen[6]<<"\n"<<elen[7]<<"\n"<<elen[8];
    //
    //    Short sl;
    //    big = sl.LongCh(elen, a11, a12, a13, a21, a22, a23, a31, a32, a33, len11, len12, len13, len21, len22, len23, len31, len32, len33, swap, big);
    //    cout<<"\n\nbig= "<<big;
    //
    //    Short spAI;
    //    big = spAI.PrintAI(a11, a12, a13, a21, a22, a23, a31, a32, a33, I11, I12, I13, I21, I22, I23, I31, I32, I33, big);
    //
    //    return big;
    //}
};