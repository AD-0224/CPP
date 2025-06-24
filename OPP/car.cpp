
#include <iostream>
using namespace std;

class Voiture
{
  public:
    int vitesse;

    Voiture(int v)
    {
        vitesse = v;
    }

    void accelerer()
    {
        vitesse += 10;
    }

    void afficher()
    {
        cout << "Vitesse: " << vitesse << " km/h" << endl;
    }
};
