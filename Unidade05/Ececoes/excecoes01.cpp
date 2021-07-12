#include<iostream>
using namespace std;

string le_entrada() {
	string texto; 
	while(1){
		try {
			cin >> texto;
			return texto.substr(10);
		} catch (out_of_range &batata) {
            cout << batata.what() << endl;
			cerr << "Entrada invalida! Digite novamente \n"; 
		}
	}
}

int main(){
    cout << le_entrada();
    return 0;
}