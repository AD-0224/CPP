#include <iostream>
using namespace std;

class Cars
{
  public:
    int speed;

    Cars(int v)
    {
        speed = v;
    }

    void accelerate()
    {
        speed += 10;
    }

    void display()
    {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};
