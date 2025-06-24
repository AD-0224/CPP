#include <iostream>
using namespace std;

class Etudiant
{
    public:
        string nom;
        float note1;
        float note2;

        Etudiant (string name, int n1, int n2)
        {
            nom = name;
            note1 = n1;
            note2 = n2;
        }
        void afficherNote()
        {
            cout << "Note1: " << note1 << " Note2: " << note2 << endl;
        }

        void calculMoyenne ()
        {
            float average;
            average = (note1 + note2) / 2;
            cout << "Moyenne: " << average << endl;
        }

        void admis ()
        {
            float average;
            average = (note1 + note2) / 2;

            if (average >= 10)
            {
                cout << "Admis" << endl;
            }
            else 
                cout << "Ajourne" << endl;
        }
}
;

int main ()
{
    Etudiant Alice ("Alice", 13, 17);
    Alice.afficherNote();
    Alice.calculMoyenne();
    Alice.admis();
}