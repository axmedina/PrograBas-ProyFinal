#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <ctime>
#include <string.h>
using namespace std;

void header();

int main() {

	setlocale(LC_ALL, "spanish"); //Permite usar acentos del español
	system("cls");
	header();
	system("pause>nul");
	return 0;
}

void header() {
	/*Esta func imprime texto en la parte superior de la pantalla
	La uso para simular la permanencia de un elemento de cabecera en la interfaz de usuario cada vez que se limpie la consola*/
	cout << "\tCONSORCIO FERRETERO MEDINA S.A. de C.V.\n\tSucursal López Mateos - Tel: (828) 284 64 24\n\twww.grupomedina.mx\n";
}