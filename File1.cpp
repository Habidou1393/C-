#include <iostream>
#include <tchar.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    while (true)
    {
    float resultat;
    float valeur1,valeur2;
    char operateur;
    
    cout << " Un caclul : ";
    std::cin >> valeur1 >> operateur >> valeur2;
    if(operateur == '+');{
    	resultat=valeur1+valeur2;	
    }
    if(operateur == '-');{
    	resultat=valeur1-valeur2;
    }
    if(operateur == '*');{
    	resultat=valeur1*valeur2;
    }
    if(operateur == '/'){
    resultat=valeur1/valeur2;
    }
    cout <<" Resulat : " << resultat << endl;
    }

    std::cout << "FIN DU PROGRAMME CALCULATRICE SANS ERREUR" << std::endl;
    return 0;
}
