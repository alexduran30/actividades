/*
Estudiante: Alex Duran Baptista
Materia: Programacion 1
Docente:  Jared Lopez Leaño

PRACTICO #3
lo que nos pidieron fue que hagamos un menu donde la opcion 1 sea una suma de cadenas, la segunda opcion sea la muestra de un nombre completo
por ejemplo "juan perez flores" y que imprima "Perez Flores Juan" y por ultimo la 3er opcion sea un ofuscador donde cambien los caracteres de la siguiente manera
A/a 4
E/e 3
I/i 1
0/o 0
S/s 5
T/t 7

*/

#include <iostream>
#include <cctype>
#include <sstream>

using namespace std;

// Función para realizar la suma de una cadena
int suma_cadena(const string& cadena) {
	istringstream stream(cadena);
	string elemento;
	int resultado = 0;
	
	while (getline(stream, elemento, '+')) {
		resultado += stoi(elemento);
	}
	
	return resultado;
}

string nombreCompleto, nombre, apePat, apeMat;

// Función para convertir la primera letra de cada palabra a mayúscula
void convertirMayusculas(string &str) {
	for (size_t i = 0; i < str.length(); ++i) {
		if (i == 0 || isspace(str[i - 1])) {
			str[i] = toupper(str[i]);
		} else {
			str[i] = tolower(str[i]);
		}
	}
}


//Funcion para separar los nombres
void separarNombres() {  
	int pini, pfinal;
	pini = 0;
	pfinal = nombreCompleto.find(" ", pini);
	nombre = nombreCompleto.substr(pini, pfinal - pini);
	convertirMayusculas(nombre);
	pini = pfinal + 1;
	pfinal = nombreCompleto.find(" ", pini);
	apePat = nombreCompleto.substr(pini, pfinal - pini);
	convertirMayusculas(apePat);
	pini = pfinal + 1;
	apeMat = nombreCompleto.substr(pini);
	convertirMayusculas(apeMat);
}

//Funcion para mostrar los nombres ya separados
void imprimirNombreCompleto() { 
	cout << "Ingrese su nombre completo: ";
	getline(cin, nombreCompleto);
	separarNombres();
	cout << "Nombre: " << nombre << endl;
	cout << "Apellido Paterno: " << apePat << endl;
	cout << "Apellido Materno: " << apeMat << endl;
	cout << "Nombre completo: " << apePat << " " << apeMat << " " << nombre << endl;
}


// Función para ofuscar una cadena según las reglas dadas
string ofuscar(const string& cadena) {
	string cadena_ofuscada = cadena;
	
	for (char& c : cadena_ofuscada) {
		switch (c) {
		case 'A': case 'a': c = '4'; break;
		case 'E': case 'e': c = '3'; break;
		case 'I': case 'i': c = '1'; break;
		case 'O': case 'o': c = '0'; break;
		case 'S': case 's': c = '5'; break;
		case 'T': case 't': c = '7'; break;
		}
	}
	
	return cadena_ofuscada;
}

// Función que encapsula el menú principal
char menuPrincipal() {
	char opcion;
	
	cout << "MENU PRINCIPAL" << endl;
	cout << "(1) - Suma de una cadena" << endl;
	cout << "(2) - Nombre completo" << endl;
	cout << "(3) - Ofuscar" << endl;
	cout << "(s/S) - Salir" << endl;
	
	cout << "Seleccione una opción: ";
	cin >> opcion;
	cin.ignore(); // Limpiar el buffer de entrada
	
	return opcion;
}

int main(int argc, char *argv[]) {
	char opcion;
	
	do {
		opcion = menuPrincipal();
		switch (opcion) {
		case '1':
			// Submenú para la suma de una cadena
		{
			string entrada;
			cout << "Ingrese la cadena para sumar: ";
			cin >> entrada;
			cout << "Resultado: " << suma_cadena(entrada) << endl;
		}
		break;
		case '2':
			// Submenú para imprimir el nombre completo
			imprimirNombreCompleto();
			break;
		case '3':
			// Submenú para ofuscar
		{
			string entrada;
			cout << "Ingrese la cadena para ofuscar: ";
			cin >> entrada;
			cout << "Cadena ofuscada: " << ofuscar(entrada) << endl;
		}
		break;
		case 's':
		case 'S':
			// Salir del programa
			cout << "Saliendo del programa." << endl;
			break;
		default:
			cout << "Opción no válida. Por favor, intente nuevamente." << endl;
		}
	} while (opcion != 's' && opcion != 'S');
	
	return 0;
}
