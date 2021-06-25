#include "data.h"
#include <ctime>

int main(){
    try {
        Data teste(21,2,2020);
        cout << teste.toString() << endl;
    } catch (DataInvalida D){
        D.Msg();
    }
    return 0;
}