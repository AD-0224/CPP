#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {3, 8, 2, 6};

    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }

    std::cout << "Sum = " << sum << std::endl;
    return 0;
}