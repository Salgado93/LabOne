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
			int x=1;
			//for(int i=1; i<=200; i++){
				while(x<=1000000){
					if (x == identificar(x)){
						cout << "El numero: " << x << " Cumple" << endl; 
						x++;
					}else{
						x++;
					}
					
				}
				//cout << identificar(40585) << endl;
			//}
			/*int numero=0;
			int numero2=0;
			int suma=0;
			int resto=0;
			int suma2;
			cout << "Ingrese Un Numero: ";
			cin >> numero;
			numero2=numero; 
			while (numero>0){
				resto=numero%10;
				numero=numero/10;
				suma+=factorial(resto);
				suma2=suma;
				cout << resto << "!" << endl;
			}
			cout << endl;
			if(suma == numero2){
				cout << "La suma de la factorial es igual al numero ingresado." << endl;
				cout << "Suma: " << suma2 << endl;
			}*/				
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
