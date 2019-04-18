#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <ctime>
#include <string>
using namespace std;

void	header();
void	cls();
bool	isNumero(char);
/*void	venta();
void	add();
void	edit();
void	remove();
void	list();*/

char	opc_menu_p,
	opc_menu_venta, opc_menu_edit, opc_menu_muestra, opc_submenu_editar,
	escape;

bool	volver_menu_p = false,
	is_ok_menu_p = false, is_ok_submenu_editar = false,
	repetir_venta,repetir_edit, repetir_muestra,
	salir;

////////////

//////////
struct registro{
	char codigo[8];
	char nombre[50];
	float precio_unit;
	int exist;
}prod[150];

int main() {
	setlocale(LC_ALL, "spanish"); //Permite usar acentos del espa√±ol
	do {
		cls();
		header();
		cout << "\n\n\tMENU PRINCIPAL";
		cout << "\n\n\t[1] - VENTA de productos\n\t[2] - EDITAR productos\n\t[3] - MOSTRAR productos\n\t[4] - SALIR del sistema";
		cout << "\n\n\tIngrese una opciÛn   ";
		cin >> opc_menu_p; 			//scanf_s("%c", &opc_menu_p, 1);     Antes quer√≠a usar esta instruccion pero me decidi por usar cin
		
		do {
			
			if (isNumero(opc_menu_p) && ((opc_menu_p > 48) && (opc_menu_p < 53)) ) {
				is_ok_menu_p = true;
			}
			else {
				cls();
				header();
				cout << "\n\n\tMENU PRINCIPAL";
				cout << "\n\n\t[1] - VENTA de productos\n\t[2] - EDITAR productos\n\t[3] - MOSTRAR productos\n\t[4] - SALIR del sistema";
				cout << "\n\n\tIngrese una opcion valida  ";
				is_ok_menu_p = false;
				cin.ignore(100, '\n');
				cin >> opc_menu_p;
			}
			
		} while (!is_ok_menu_p);
		
		
		switch (opc_menu_p) {
		case 49: { //PUNTO DE VENTAAAAAAAAAAAAAAAAAAAAAA
			do {
				cls();
				header();
				cout << "\n\n\tVENTA DE PRODUCTOS\n";
				cout << "\tfoo\n";
				cout << "\n\tIngrese 1 para procesar una nueva compra\n\tIngrese otra cosa para volver al men˙ principal   ";
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
		case 50: { //EDICION DE PRODUCTOS AAAAAAAAAAAAAAA
			do {
				cls();
				header();
				cout << "\n\n\tEDICIÛN DE PRODUCTOS\n";
				cout << "\n\t[1] - AGREGAR PRODUCTO\n\t[2] - EDITAR PRODUCTO\n\t[3] - ELIMINAR PRODUCTO\n\t[4] - Regresar\n\n\tIngrese una opciÛn   ";
				cin >> opc_submenu_editar;
				do{
					if (isNumero(opc_submenu_editar) && ((opc_submenu_editar > 48) && (opc_submenu_editar < 53))) {
						is_ok_submenu_editar = true;
					}
					else {
						is_ok_submenu_editar = false;
						cls();
						header();
						cout << "\n\n\tEDICIÛN DE PRODUCTOS\n";
						cout << "\n\t[1] - AGREGAR PRODUCTO\n\t[2] - EDITAR PRODUCTO\n\t[3] - ELIMINAR PRODUCTO\n\t[4] - Regresar\n\n\tIngrese una opcion valida   ";
						cin >> opc_submenu_editar;
					}
				} while (!(is_ok_submenu_editar));
				
				int contadorpendejo;            //LLEVAR DECLARACIONES A ANTES DE MAIN
				char repetir_submenu_edit;
				bool repetir_sub_edit;
				
				switch (opc_submenu_editar) {
					case '1': { //ADD
						contadorpendejo = 1;
						do{
							cls();
							header();						
							cout << "\n\n\tAÒadir #" << contadorpendejo << endl;
							contadorpendejo++;
							cout << "\tDesea repetir este men˙ inservible?\n\tIngrese 1	";
							cin >> repetir_submenu_edit;
							if (repetir_submenu_edit == 49){
								repetir_sub_edit = true;
							}else{
								repetir_sub_edit = false;
							}
						}while(repetir_sub_edit);
						repetir_edit = true;
						break;
					}
					case'2': { //EDIT
						contadorpendejo = 1;
						do{
							cls();
							header();
							cout << "\n\n\tEditar #" << contadorpendejo << endl;
							contadorpendejo++;
							cout << "\tDesea repetir este men˙ inservible?\n\tIngrese 1	";
							cin >> repetir_submenu_edit;
							if (repetir_submenu_edit == 49){
								repetir_sub_edit = true;
							}else{
								repetir_sub_edit = false;
							}
						}while(repetir_sub_edit);
						repetir_edit = true;
						break;
					}
					case'3': { //REMOVE
						contadorpendejo = 1;						
						do{
							cls();
							header();
							cout << "\n\n\tEliminar #" << contadorpendejo << endl;
							contadorpendejo++;
							cout << "\tDesea repetir este men˙ inservible?\n\tIngrese 1	";
							cin >> repetir_submenu_edit;
							if (repetir_submenu_edit == 49){
								repetir_sub_edit = true;
							}else{
								repetir_sub_edit = false;
							}
						}while(repetir_sub_edit);
						repetir_edit = true;
						break;
					}
					case'4':{
						cls();
						repetir_edit = false;
						volver_menu_p = true;
						break;
					}
				}
				
			} while (repetir_edit);
			break;
		}
		case 51: { //MUESTRA DE PRODUCTOS AAAAAAAAAAAAAAAAAAA
			do {
				cls();
				header();
				cout << "\n\n\tMUESTRA DE PRODUCTOS\n";
				cout << "\tfoo\n";
				cout << "\n\tIngrese 1 para mostrar prod. de nuevo\n\tIngrese otra cosa para volver al men˙ principal   ";
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
			cls();
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
	cout << "\t\t\tCONSORCIO FERRETERO MEDINA S.A. de C.V.\n\t\t\tSucursal LÛpez Mateos\n\t\t\tTel: (828) 284 64 24\n\t\t\twww.grupomedina.mx\n";
}

void cls() {
	system("cls");
}
