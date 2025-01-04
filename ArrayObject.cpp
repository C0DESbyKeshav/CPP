#include <iostream>
using namespace std;
class student
{
private:
  int rollno;
  int age;
  int sex;
  float height, weight;

public:
  int getinfo()
  {
    cout << "Roll no: ";
    cin >> rollno;
    cout << "Age: ";
    cin >> age;
    cout << "Sex (1 for male & 2 for female): ";
    cin >> sex;
    cout << "Height: ";
    cin >> height;
    cout << "Weight: ";
    cin >> weight;
    return 0;
  }

  int disinfo()
  {
    cout << "\nRoll no= " << rollno;
    cout << "\nAge= " << age << " yrs";
    if (sex == 1)
    {
      cout << "\nSex= Male";
    }
    else if (sex == 2)
    {
      cout << "\nSex= Female";
    }
    else
    {
      cout << "\nError";
    }
    cout << "\nHeight= " << height << " cms";
    cout << "\nWeight= " << weight << " kg\n";
    return 0;
  }
};

int main()
{
  student object[100];
  int i, n;
  cout << "How many students ?\n";
  cin >> n;
  cout << "Enter Information:\n";
  for (i = 1; i <= n; i++)
  {
    int j = i;
    cout << "\nRecord= " << j << "\n";
    object[i].getinfo();
  }
  cout << "\nContent of class \n";
  for (i = 1; i <= n; i++)
  {
    object[i].disinfo();
  }
  return 0;
}