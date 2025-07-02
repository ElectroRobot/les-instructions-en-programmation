#include <iostream>
using namespace std;

int somme(int i, int j)
{
    return i+j;
}

int main() {

	//déclaration des variables:
	int m;
	m = 102;
	cout << m << endl;
	cout << "------------------------------------------" << endl;
	
	//affichage d'une chaine de caractère
	cout << "Hello world" << endl;
	cout << "------------------------------------------" << endl;
	
	//Boucle itérative avec affichage
	for (int i = 0; i < 5; i++) {
	  cout << i << "\n";
	}
	cout << "------------------------------------------" << endl;
	cout << "la somme de 3 + 4 est :" << somme(3,4) << endl;
	
	
  return 0;
}
