#include <iostream> 

using std::cout; 
using std::cin; 
using std::endl;

unsigned long int factorial(unsigned long int);
int identificar(int);
int main(int argc,char* argv[]){
	int op=0;
	while(op != 3){
		cout << endl;
		cout << "1. Ejercicio 1" << endl;
		cout << "2. Ejercicio 2" << endl;
		cout << "3. Salir" << endl;
		cin >> op;
		cout << endl;
		if (op == 1){
			int numero=1;
			while(numero<=1000000){
				if (numero == identificar(numero)){
					cout << "El numero: " << numero << " Cumple" << endl; 
					numero++;
				}else{
					numero++;
				}
			}
		}
		if(op == 2){
			int numero;
			cout << "Ingrese Un Numero: " << endl;
			cin >> numero;
		}

	}
	return 0;
}

unsigned long int factorial(unsigned long int n){
	if (n == 0 || n== 1)
		return 1;
	else
		return n * factorial(n-1);
}
int identificar(int numero){
			int resto =0;
			int suma =0;
                        while (numero>0){	
                                resto=numero%10;
                                numero=numero/10;
                                suma+=factorial(resto); 
                        }
                      	return suma;
			

}
