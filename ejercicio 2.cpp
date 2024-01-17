#include <iostream>

using namespace std;

// Declaración de funciones
void multiplicacionDosNumeros();
void divisionDosNumeros();
void multiplicacionTresNumeros();
void mayorTresNumeros();

int main() {
	char opcion;
	
	
	do {
		// Menú principal
		cout << "MENU PRINCIPAL"<<endl;
		cout << "1-Multiplicación con 2 números"<<endl;
		cout << "2-División con 2 números"<<endl;
		cout << "3-Multiplicación con 3 números"<<endl;
		cout << "4-Mayor de 3 números"<<endl;
		cout << "S-Salir"<<endl;
		cout << "Ingrese la opción deseada: ";
		cin >> opcion;
		cin.ignore();  // Limpiar 
		
		switch (opcion) {
		case '1': cout<<"eligio la opcion 1"<<endl;
			multiplicacionDosNumeros();
			break;
			
		case '2': cout<<"eligio la opcion 2"<<endl;
			divisionDosNumeros();
			break;
		case '3': cout<<"eligio la opcion 3"<<endl;
			multiplicacionTresNumeros();
			break;
		case '4': cout<<"eligio la opcion 4"<<endl;
			mayorTresNumeros();
			break;
		case 'S':
		case 's':
			cout << "eligio la opcion salir"<<endl;
			cout << "Saliendo del programa. ¡Hasta luego!"<<endl;
			break;
		default:
			cout << "Opción no válida. Por favor, ingrese una opción válida."<<endl;
		}
		
	} while (opcion != 'S' && opcion != 's');
	
	return 0;
}

// Definición de funciones
void multiplicacionDosNumeros() {
	double num1, num2;
	cout << "Ingrese el primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	cout << "El resultado de la multiplicación es: " << num1 * num2 << endl;
}

void divisionDosNumeros() {
	double num1, num2;
	cout << "Ingrese el numerador: ";
	cin >> num1;
	cout << "Ingrese el denominador: ";
	cin >> num2;
	
	if (num2 != 0) {
		cout << "El resultado de la división es: " << num1 / num2 << endl;
	} else {
		cout << "Error: No es posible dividir por cero."<<endl;
	}
}

void multiplicacionTresNumeros() {
	double num1, num2, num3;
	cout << "Ingrese el primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	cout << "Ingrese el tercer número: ";
	cin >> num3;
	cout << "El resultado de la multiplicación es: " << num1 * num2 * num3 << endl;
}

void mayorTresNumeros() {
	double num1, num2, num3;
	cout << "Ingrese el primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	cout << "Ingrese el tercer número: ";
	cin >> num3;
	
	if (num1 >= num2 && num1 >= num3) {
		cout << "El mayor número es: " << num1 << endl;
	} else if (num2 >= num1 && num2 >= num3) {
		cout << "El mayor número es: " << num2 << endl;
	} else {
		cout << "El mayor número es: " << num3 << endl;
	}
}
