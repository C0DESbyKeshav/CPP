#include<iostream>
using namespace std;

 class Personal_details
 {
   public:

    char name[50];
    int age;
    char gender[10];
    char address[100];

   int Introduction()
   {
     cout<<"\n\nEnter your name ?\n";
     cin.getline(name,50);
     cout<<"\nWhat's your gender ?\n";
     cin.getline(gender,10);
     cout<<"\nWhere do you live ?\n";
     cin.getline(address,100);
     cout<<"\nHow old are you ?\n";
     cin>>age;

     
     cout<<"\n\nYour name is "<<name<<".";
     cout<<"\nYour gender is "<<gender<<".";
     cout<<"\nYou live in "<<address<<".";
     cout<<"\nYou are "<<age<<" years old.";
     return 0;
   }

 };


 int main()
 {
   
   Personal_details p1;
   p1.Introduction();
   return 0;
 }