#include <iostream>
#include <vector>
using namespace std;

int main ()
{
 vector <int> v = {1, 4, 6};
 for (int i = 0; i < v.size(); i++)
 {
    v[i] *= 2;
 }
 cout<< "Doubled: ";
 for (int x : v)
    cout << x << " ";
 return (0);
}