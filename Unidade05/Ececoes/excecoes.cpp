#include<iostream>
using namespace std;

class fatorial_exception : public exception {
	string msg;
	public:
		virtual const char* what() const throw() {
		return "My exception happened";
  		}
};


int fatorial(int n){
	if (n < 0) {
		throw invalid_argument("Não existe fatorial de n < 0");
	}
	if (n >= 20) {
		throw overflow_error("Não consigo computar para n>=20");
	}
	if (n <= 1) {
		return 1;
	}
	return n * fatorial(n-1);
}

int main() {
	int num;
	try {
		cin >> num;
		cout << fatorial(num);
	} catch (fatorial_exception &e) {
		cout << e.what() << endl;
	} 
}

