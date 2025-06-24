#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    for (int i = 4; i >= 0; i--)
    std::cout << v[i] << " ";
    return (0);
}