#include <iostream> 
#include <vector>
#include <string>
using namespace std; 

int main () {


string frutas[] = {"frutilla", "arandanos", "kiwi", "bananas"};


cout << " esta es mi lista de frutas \n";
// conts auto& cuando no sabemos el tipo de dato 
// for each o for en rango 
for (string  unaFruta:frutas){
    cout << unaFruta << endl;
}
    return 0; 
}