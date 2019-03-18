#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <ctime>
#include <string.h>
using namespace std;

void header();
int opc_menu_p;

int main() {

	do{
		setlocale(LC_ALL, "spanish"); //Permite usar acentos del español
		system("cls");
		header();
		cout << "\n\n\tMENU PRINCIPAL";
		cout << "\n\n\t1 - VENTA de productos\n\t2 - EDITAR productos\n\t3 - MOSTRAR productos\n\t4 - SALIR del sistema";
		cin >> opc_menu_p
		system("pause>nul");
	}while(volver_menu_p==true);
}

void header() {
	/*Esta func imprime texto en la parte superior de la pantalla
	La uso para simular la permanencia de un elemento de cabecera en la interfaz de usuario cada vez que se limpie la consola*/
	cout << "\t\t\tCONSORCIO FERRETERO MEDINA S.A. de C.V.\n\t\t\tSucursal López Mateos\n\t\t\tTel: (828) 284 64 24\n\t\t\t\twww.grupomedina.mx\n";
}