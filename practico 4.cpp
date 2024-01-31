/* 
Estudiante: Alex Duran Baptista
Materia: Programacion 1
Docente:  Jared Lopez Leaño

PRACTICO #4
Se nos pide un menu donde la opcion numero 1 sea colocar nombres
apellidos y notas aleatorios (10)
la opcion numero 2 sea ofuscar nombres y apellidos para llenar las contraseñas
la opcion numero 3 sea sacar la media el mayor y el menor de todas las notas
y la opcion 4 sea imprimir los datos, y que para salirse del programa se salga
con la letra "S,s"
el numero de nombres apellidos y notas debian ser de 10 cada uno. 
el ofuscador debia ser de la siguiente manera :
CARÁCTER OFUSCADO
A/a 		4
E/e 		3
I/i 		1
0/o 		0
S/s 		5
T/t 		7
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <algorithm>

using namespace std;

//vectores

vector<string> nombres(10);
vector<string> apellidos(10);
vector<int> notas(10);
vector<string> contrasenas(10);

//funcion para generar nombres apellidos y notas aleatorias

void llenarNombresApellidosNotasAleatorios() {
	string listaNombres[] = {"Juan", "María", "Carlos", "Laura", "Pedro", "Ana", "David", "Sofía", "Luis", "Elena"};
	string listaApellidos[] = {"Gómez", "Martínez", "Fernández", "Pérez", "López", "García", "Rodríguez", "Sánchez", "Romero", "Díaz"};
	
	srand(static_cast<unsigned>(time(0)));
	
	for (int i = 0; i < 10; ++i) {
		int indiceNombre = rand() % (sizeof(listaNombres) / sizeof(listaNombres[0]));
		int indiceApellido = rand() % (sizeof(listaApellidos) / sizeof(listaApellidos[0]));
		
		nombres[i] = listaNombres[indiceNombre];
		apellidos[i] = listaApellidos[indiceApellido];
		notas[i] = rand() % 101;
	}
}

//funcion para colocar la contraseña
void ofuscador() {   
	for (int i = 0; i < 10; ++i) {
		contrasenas[i] = "";
		for (char c : nombres[i] + apellidos[i]) {
			switch (tolower(c)) {
			case 'A': case 'a': contrasenas[i] += '4'; break;
			case 'E': case 'e': contrasenas[i] += '3'; break;
			case 'I': case 'i': contrasenas[i] += '1'; break;
			case 'O': case 'o': contrasenas[i] += '0'; break;
			case 'S': case 's': contrasenas[i] += '5'; break;
			case 'T': case 't': contrasenas[i] += '7'; break;
			default: contrasenas[i] += c;
			}
		}
	}
}

//funcion para imprimir Datos

void imprimirDatos() {
	cout << left << setw(15) << "Nombre" << setw(15) << "Apellido" << setw(5) << "Nota" << setw(15) << "Contraseña" << endl;
	for (int i = 0; i < 10; ++i) {
		cout << left << setw(15) << nombres[i] << setw(15) << apellidos[i] << setw(5) << notas[i] << setw(15) << contrasenas[i] << endl;
	}
}

//funcion para calcular las estadisticas de nota mayor, menor y promedio

void calcularEstadisticas() {
	double promedio = 0.0;
	auto extremos = minmax_element(notas.begin(), notas.end());
	
	for (int nota : notas) {
		promedio += nota;
	}
	
	promedio /= 10;
	
	cout << "\nPromedio de notas: " << promedio << endl;
	cout << "Mayor\n" << "Nota: " << *extremos.second << endl;
	cout << "Menor\n" << "Nota: " << *extremos.first << endl;
}


//funcion para el menu 

char Menu() {
	char opcion;
	
	cout << "MENU PRINCIPAL" << endl;
	cout << "(1) - Llenar nombres, apellidos y notas de forma aleatoria." << endl;
	cout << "(2) - Ofuscar nombres y apellidos para llenar las contraseñas." << endl;
	cout << "(3) - Sacar la media, el mayor y menor de todas las notas." << endl;
	cout << "(4) - Imprimir datos." << endl;
	cout << "(s/S) - Salir" << endl;
	
	cout << "Ingrese la opción deseada: ";
	cin >> opcion;
	
	switch (opcion) {
	case '1':
		llenarNombresApellidosNotasAleatorios();
		break;
	case '2':
		ofuscador();
		break;
	case '3':
		calcularEstadisticas();
		break;
	case '4':
		imprimirDatos();
		break;
	case 's':
	case 'S':
		break;
	default:
		cout << "Opción no válida. Intente de nuevo." << endl;
	}
	
	return opcion;
}

//programa

int main() {
	char opcion;
	
	do {
		opcion = Menu();
	} while (opcion != 's' && opcion != 'S');
	
	return 0;
}
