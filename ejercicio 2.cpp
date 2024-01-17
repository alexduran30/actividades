#include <iostream>

using namespace std;

// Declaraci�n de funciones
void multiplicacionDosNumeros();
void divisionDosNumeros();
void multiplicacionTresNumeros();
void mayorTresNumeros();

int main() {
	char opcion;
	
	
	do {
		// Men� principal
		cout << "MENU PRINCIPAL"<<endl;
		cout << "1-Multiplicaci�n con 2 n�meros"<<endl;
		cout << "2-Divisi�n con 2 n�meros"<<endl;
		cout << "3-Multiplicaci�n con 3 n�meros"<<endl;
		cout << "4-Mayor de 3 n�meros"<<endl;
		cout << "S-Salir"<<endl;
		cout << "Ingrese la opci�n deseada: ";
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
			cout << "Saliendo del programa. �Hasta luego!"<<endl;
			break;
		default:
			cout << "Opci�n no v�lida. Por favor, ingrese una opci�n v�lida."<<endl;
		}
		
	} while (opcion != 'S' && opcion != 's');
	
	return 0;
}

// Definici�n de funciones
void multiplicacionDosNumeros() {
	double num1, num2;
	cout << "Ingrese el primer n�mero: ";
	cin >> num1;
	cout << "Ingrese el segundo n�mero: ";
	cin >> num2;
	cout << "El resultado de la multiplicaci�n es: " << num1 * num2 << endl;
}

void divisionDosNumeros() {
	double num1, num2;
	cout << "Ingrese el numerador: ";
	cin >> num1;
	cout << "Ingrese el denominador: ";
	cin >> num2;
	
	if (num2 != 0) {
		cout << "El resultado de la divisi�n es: " << num1 / num2 << endl;
	} else {
		cout << "Error: No es posible dividir por cero."<<endl;
	}
}

void multiplicacionTresNumeros() {
	double num1, num2, num3;
	cout << "Ingrese el primer n�mero: ";
	cin >> num1;
	cout << "Ingrese el segundo n�mero: ";
	cin >> num2;
	cout << "Ingrese el tercer n�mero: ";
	cin >> num3;
	cout << "El resultado de la multiplicaci�n es: " << num1 * num2 * num3 << endl;
}

void mayorTresNumeros() {
	double num1, num2, num3;
	cout << "Ingrese el primer n�mero: ";
	cin >> num1;
	cout << "Ingrese el segundo n�mero: ";
	cin >> num2;
	cout << "Ingrese el tercer n�mero: ";
	cin >> num3;
	
	if (num1 >= num2 && num1 >= num3) {
		cout << "El mayor n�mero es: " << num1 << endl;
	} else if (num2 >= num1 && num2 >= num3) {
		cout << "El mayor n�mero es: " << num2 << endl;
	} else {
		cout << "El mayor n�mero es: " << num3 << endl;
	}
}
