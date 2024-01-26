
//estudiante: ALEX ARLANDO DURAN BAPTISTA
//PROGRAMACION 1
//creamos un menu y un sub menu con funciones

#include <iostream>
#include <string>

using namespace std;


int num1, num2;  // Variables globales
string cadena1, cadena2;  // Variables para colocar las cadenas

// Prototipos de funciones
void menuPrincipal();
void submenuOperaciones();
void realizarSuma();
void realizarDivision();
void ingresarCadenas();


void menuPrincipal() {
	cout << "MENU PRINCIPAL" << endl;
	cout << "(1) -- Operaciones con N�meros" << endl;
	cout << "(2) -- Concatenar 2 cadenas." << endl;
	cout << "(s/S) -- Salir" << endl;
}

void submenuOperaciones() {
	char opcion;
	
	do {
		cout << "SUBMENU OP NUMEROS" << endl;
		cout << "1) - Suma de 2 n�meros." << endl;
		cout << "2) - Divisi�n de 2 n�meros." << endl;
		cout << "(m/M) - Volver al Menu principal" << endl;
		
		cout << "Ingrese su elecci�n: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1':
			realizarSuma();
			break;
		case '2':
			realizarDivision();
			break;
		case 'm':
		case 'M':
			cout << "Volviendo al Menu principal." << endl;
			break;
		default:
			cout << "Opci�n no v�lida. Intente de nuevo." << endl;
		}
		
	} while (opcion != 'm' & opcion != 'M');
}

void realizarSuma() {
	cout << "Ingrese el primer n�mero: ";
	cin >> num1;
	cout << "Ingrese el segundo n�mero: ";
	cin >> num2;
	cout << "La suma de " << num1 << " y " << num2 << " es: " << num1 + num2 << endl;
}

void realizarDivision() {
	cout << "Ingrese el numerador: ";
	cin >> num1;
	cout << "Ingrese el denominador: ";
	cin >> num2;
	
	if (num2 != 0) {
		cout << "La divisi�n de " << num1 << " entre " << num2 << " es: " << num1 / num2 << endl;
	} else {
		cout << "Error: No se puede dividir por cero." << endl;
	}
}

void ingresarCadenas() {
	cout << "Ingrese la primera cadena: ";
	cin >> cadena1;
	cout << "Ingrese la segunda cadena: ";
	cin >> cadena2;
}
int main(int argc, char *argv[]) {
	char opcion;
	
	do {
		menuPrincipal();
		
		cout << "Ingrese su elecci�n: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1':
			submenuOperaciones();
			
			break;
		case '2':
			ingresarCadenas(); 
			// Concatenar 2 cadenas
			cout << "Cadenas concatenadas: " << cadena1 + " " + cadena2 << endl;
			break;
		case 's':
		case 'S':
			cout << "Saliendo del programa. �Hasta luego!" << endl;
			break;
		default:
			cout << "Opci�n no v�lida. Intente de nuevo." << endl;
		}
		
	} while (opcion != 's' && opcion != 'S');
	
	return 0;
}
