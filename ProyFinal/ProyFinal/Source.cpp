#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <ctime>
#include <string.h>
using namespace std;

void	header();
bool	isNumero(char);

char	opc_menu_p,
		opc_menu_venta, opc_menu_edit, opc_menu_muestra,
		escape;

bool	volver_menu_p = false,
		is_ok_menu_p = false,
		repetir_venta,repetir_edit, repetir_muestra,
		salir;

int main() {
	setlocale(LC_ALL, "spanish"); //Permite usar acentos del español
	do {

		system("cls");
		header();
		cout << "\n\n\tMENU PRINCIPAL";
		cout << "\n\n\t1 - VENTA de productos\n\t2 - EDITAR producto\n\t3 - MOSTRAR productos\n\t4 - SALIR del sistema";
		cout << "\n\n\tIngrese una opción   ";
		cin >> opc_menu_p; 			//scanf_s("%c", &opc_menu_p, 1);     Antes quería usar esta instruccion pero me decidi por usar cin

		do {
			
			if (isNumero(opc_menu_p)) {
				is_ok_menu_p = true;
			}
			else {
				system("cls");
				header();
				cout << "\n\n\tMENU PRINCIPAL";
				cout << "\n\n\t1 - VENTA de productos\n\t2 - EDITAR productos\n\t3 - MOSTRAR productos\n\t4 - SALIR del sistema";
				cout << "\n\n\tIngrese una opción VÁLIDA  ";
				is_ok_menu_p = false;
				cin.ignore(30, '\n');
				cin >> opc_menu_p;

			}
			
		} while (is_ok_menu_p == false);


		switch (opc_menu_p) {
			case 49: {
				do {
					system("cls");
					header();
					cout << "\n\n\tVENTA DE PRODUCTOS\n";
					cout << "\tfoo\n";
					cout << "\n\tIngrese 1 para procesar una nueva compra\n\tIngrese otra cosa para volver al menú principal   ";
					cin >> opc_menu_venta;
					if (opc_menu_venta == 49)
						repetir_venta = true;
					else {
						repetir_venta = false;
						volver_menu_p = true;
					}
				} while (repetir_venta);
				break;
			}
			case 50: {
				do {
					system("cls");
					header();
					cout << "\n\n\tEDICIÓN DE PRODUCTOS\n";
					cout << "\tfoo\n";
					cout << "\n\tIngrese 1 para editar otro producto\n\tIngrese otra cosa para volver al menú principal   ";
					cin >> opc_menu_edit;
					if (opc_menu_edit == 49)
						repetir_edit = true;
					else {
						repetir_edit = false;
						volver_menu_p = true;
					}
				} while (repetir_edit);
				break;
			}
			case 51: {
				do {
					system("cls");
					header();
					cout << "\n\n\tMUESTRA DE PRODUCTOS\n";
					cout << "\tfoo\n";
					cout << "\n\tIngrese 1 para mostrar prod. de nuevo\n\tIngrese otra cosa para volver al menú principal   ";
					cin >> opc_menu_muestra;
					if (opc_menu_muestra == 49)
						repetir_muestra = true;
					else {
						repetir_muestra = false;
						volver_menu_p = true;
					}
				} while (repetir_muestra);
				break;
			}
			case 52: { //SALIR
				volver_menu_p = false;
				system("cls");
				cout << "\n\n\tSaliendo del sistema . . .\n\n\tPresione cualquier tecla.";
				system("pause>nul");
				break;
			}

		}
		
	}while(volver_menu_p);
}

bool isNumero(char carac) {
	bool isNumero;
	if ((carac > 48) && (carac < 57)) {
		isNumero = true;
	}
	else {
		isNumero = false;
	}
	return isNumero;
}

void header() {
	/*Esta func imprime texto en la parte superior de la pantalla
	La uso para simular la permanencia de un elemento de cabecera en la interfaz de usuario cada vez que se limpie la consola*/
	cout << "\t\t\tCONSORCIO FERRETERO MEDINA S.A. de C.V.\n\t\t\tSucursal López Mateos\n\t\t\tTel: (828) 284 64 24\n\t\t\t\www.grupomedina.mx\n";
}
