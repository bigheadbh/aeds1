
/* Num programa que lê um valor inteiro, faça a sua validação através do tratamento de uma exceção. Caso não seja inteiro continuar pedindo a introdução do valor inteiro. */

#include<iostream>

#include<exception>



using namespace std;

void testeInteiro(float n){
    int valor = n;
    if(n != valor){
        throw invalid_argument("Eh permitido apenas a entrade de numeros inteiros!\n");
    }
}

int main(){
    float a;
    try{
        cin >> a;
        testeInteiro(a);
    } catch(invalid_argument &e){
        cout << e.what() << endl;
    } catch(overflow_error &e){
        cout << e.what() << endl;
    }
    return 0;
}

