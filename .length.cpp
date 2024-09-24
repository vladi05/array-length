#include <iostream> 
#include <vector>
#include <string>
using namespace std; 

int main () {

string palabra = "algo";

cout << endl;
cout << endl;
// .length sirve para saber el largo de alguna palabra
cout << "la palabra "  << palabra << " tiene " << palabra.length () << " letras" << endl;

string frutas[] = {"frutilla", "arandanos", "kiwi", "bananas"};
cout << endl;
cout << endl;
// .length sirve para saber el largo de alguna palabra
for (int i = 0; i <= 3; i++)
cout << "la palabra "  << frutas[i] << " tiene " << frutas[i].length () << " letras " << endl;
    return 0; 
}