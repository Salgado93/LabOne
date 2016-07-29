#include <iostream> 

using std::cout; 
using std::cin; 
using std::endl;
using namespace std;
unsigned long int factorial(unsigned long int);
int identificar(int);
int sumaDivisores(int);
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
			int numero2;
			int suma1;
			cout << "Ingrese Primer Numero: " << endl;
			cin >> numero;
			cout << "Ingrese Segundo Numero: " << endl;
			cin >> numero2;
			suma1 = sumaDivisores(numero);
			if(sumaDivisores(suma1) == numero){
				cout << "Numbers " << numero << " and " << numero2 << " are friends" << endl;	
			}
			else{
				cout << "Numbers aren't friends" << endl;
			}
			 
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
int sumaDivisores(int numero){
		int suma = 1;
		for(int i=2; i<=(numero/2); i++){
			if(numero%i == 0){
				suma +=i;
			}
		}
		return suma;
}
