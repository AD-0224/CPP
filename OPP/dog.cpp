#include <iostream>
using namespace std;

    class Chien
    {
        public:
            int age;
            string nom;

            Chien (string name, int n)
            {
                nom = name;
                age = n;
            }
            void aboyer ()
            {
                cout << "Wouf ! Je m'appelle " << nom << " et j'ai " << age << " ans" << endl;
            }
    }
    ;

int main ()
{
    Chien rex ("Rex" , 5);
    rex. aboyer();
}