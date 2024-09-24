#include <iostream> 
#include <vector>
#include <string>
using namespace std; 

int main () {

// camtidad de elementos =>   1       2        3 
 // vector <strings> frutas = {"frutilla", "kiwi", "arandano", "banana"}
//    posicion =>             0       1        2
//                        1   2   3
vector <int > numeros = {33, 32, 23};
//                        0   1  2
//      posicion de vector
string frutas[] = {"frutilla", "arandanos", "kiwi", "bananas"};

 // para saber el largo de array
int largoVector = sizeof (frutas);
int pesoDeCadaElemento = sizeof (frutas[0]);
// calculo para sacar el largo 
int tamanio = largoVector / pesoDeCadaElemento;
cout << largoVector << endl;
cout << pesoDeCadaElemento << endl;
cout << tamanio << endl;
cout << frutas[0] << endl;
cout << " esta es mi lista de frutas \n";
// esto es con un for comun 
for (int i = 0; i < tamanio; i++){
    cout << i+1 << "-" << frutas[i] << endl;
} 
    return 0; 
}
/*
#include <iostream> 

using namespace std; 

int main () {

string frutas[] = {"frutilla", "arandanos", "kiwi"}; 
cout << sizeof (frutas[0]);
    return 0; 
}

*/

/*
en c++ string 
NO es un tipo de dato
es un objeto dentro del lenguaje
*/

// datos complejos
// arrays =>
// vectores =>
//colecciones =>
//listas =>
//pilas =>
// colas =>
// objetos

