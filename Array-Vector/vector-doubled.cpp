#include <iostream>
#include <vector>

int main ()
{
 std::vector <int> v = {1, 4, 6};
 for (int i = 0; i < v.size(); i++)
 {
    v[i] *= 2;
 }
 std::cout<< "Doubled: ";
 for (int x : v)
    std::cout << x << " ";
 return (0);
}