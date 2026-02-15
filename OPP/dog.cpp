#include <iostream>
using namespace std;

    class Dog
    {
        public:
            int age;
            string nom;

            Dog (string name, int n)
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
    Dog rex ("Rex" , 5);
    rex. aboyer();
}