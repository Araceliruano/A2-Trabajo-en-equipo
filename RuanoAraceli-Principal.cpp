//=============================================================================
//==>Nombre del programa:Principal
//==>Autor:Araceli Ruano
//==>Fecha de elaboracion:2022-05-28
//============================================================================
#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int opc;//Variable para la opción del menú
	//variables del programa SumaN
	int AR_c=0,AR_N;
	float AR_s=0,AR_X;
	//variables del programa Compara
	float AR_N1;
	float AR_N2;
	//variables del programa PuntoVenta
	float AR_desc,AR_iva;
	int AR_l;
	float AR_Pdesc,AR_Piva,AR_tb,AR_tn,AR_x;
	// variables del programa LaEdad
	float AR_diaAct,AR_dianac,AR_edad,AR_fact,AR_fnac,AR_mesact,AR_mesnac;
	
	//variables del programa CuentaMoneda
	int AR_c1=0,AR_c2=0,AR_cm;
	float AR_vm;
	float AR_a=0;
	float AR_a1=0,AR_a2=0,AR_cstn=0.1;
	
	do
	{
		system("CLS");// Limpiar pantalla -clear screen-
		cout<<"Ingrese una opcion, 0 para terminar"<<endl;
		cout<<"1.- SUMA VARIOS NUMEROS"<<endl;
		cout<<"2.- COMPARA 2 NUMEROS"<<endl;
		cout<<"3.- PUNTO DE VENTA"<<endl;
		cout<<"4.- CALCULAR LA EDAD "<<endl;
		cout<<"5.- MAQUINA CUENTA MONEDA"<<endl;
		cin>>opc;
		switch(opc)
		{
			case 0:
			break;
			case 1:
				system("cls");
				cout<<"SUMA VARIOS NUMEROS"<<endl;
				cout<<"Ingrese la cantidad de valores a sumar: ";
	            cin>>AR_N;
	       do{
		        cout<<"Ingrese el elemento "<<AR_c+1;
		        cin>>AR_X;
		        AR_c=AR_c+1;
		        AR_s=AR_s+AR_X;
	         }
	        while(AR_c<AR_N);
	           cout<<"La suma de elementos es:"<<AR_s<<endl;
				system("pause");
				break;
			case 2:
				system("cls");
				cout<<"COMPARA 2 NUMEROS"<<endl;
				cout << "Ingrese el valor de AR_N1:" << endl;
	            cin>>AR_N1;
	            cout << "Ingrese el valor de AR_N2:"<< endl;
	            cin>>AR_N2;
	            if (AR_N1==AR_N2) {
		        cout<<"El valor de RA_N1:"<< "Es igual a AR_N2:" << endl;
	            } else {
		        if (AR_N1<AR_N2) {
			cout<<"El valor de AR_N1:" << "Es menor que AR_N2:"<< endl;
		    } else {
			cout<<"El valor de AR_N2:"<< "Es menor que AR_N1:" << endl;
	 	    }}
				system("pause");
				break;
			case 3:
				system("cls");
				cout<<"PUNTO DE VENTA"<<endl;
				cout<<"Ingresa la cantidad de productos:";
	            cin >> AR_l;
	            cout<<"Ingresar el porcentaje de iva:";
 	            cin>> AR_Piva;
	            cout<<"ingresar el porcentaje de descuento:";
	            cin>>AR_Pdesc;
	           do{
	            cout<<"Ingresar el valor del producto"<<AR_c+1;
	            cin>>AR_x;
	            AR_c=AR_c+1;
	            AR_a=AR_a+AR_x;
	            AR_tb=AR_a;
                AR_iva = AR_tb*AR_Piva/100;
	            AR_desc = AR_tb*AR_Pdesc/100;
	            AR_tn = AR_tb+AR_iva-AR_desc;
	
              }while(AR_c<AR_l);
                cout<<"La suma total es:"<<AR_a<<endl;
                cout<<"El iva total es:"<<AR_iva<<endl;
                cout<<"El descuento es"<<AR_desc<<endl;
                cout<<"El total a pagar es:"<<AR_tn<<endl;
				system("pause");
				break;
			case 4:
				system("cls");
				cout<<"CALCULAR LA EDAD"<<endl;
				cout << "Ingresar el anio de nacimiento" << endl;
            //pedimos al usuario que ingrese el año de nacimiento//
	            cin >> AR_fnac;
	            cout << "ingresar el mes de nacimiento" << endl;
	            cin >> AR_mesnac;
	        //pedimos al usuario que ingrese el dia en que nacio//
	            cout << "Ingresar el dia de nacimiento" << endl;
 	            cin >> AR_dianac;
	        //pedimos al usuario que ingrese el año actual//
	            cout << "Ingresar el anio actual" << endl;
	            cin >> AR_fact;
	        //pedimos que ingrese el mes actual//
	            cout << "Ingresar el mes actual" << endl;
	            cin >> AR_mesact;
	        //pedimos que ingrese el dia actual//
	            cout << "Ingresar el dia actual" << endl;
	            cin >> AR_diaAct;
	        //para calcular la edad restamos el año actual con el año de nacimiento//
	            AR_edad = AR_fact-AR_fnac;
	        //para calcular los dias que han pasado, multiplicamos la edad por los 12 meses del año//
	            AR_diaAct = AR_edad*12;
	        //para calcular el mes, restamos el mes actual con el mes de nacimiento//
	            AR_mesact = AR_mesact-AR_mesnac;
	        //presentamos o imprimimos la edad, los dias y los meses//
	            cout << "usted tiene:" << AR_edad << endl;
	            cout << "dias:" << AR_diaAct << endl;
	            cout << "meses:" << AR_mesact << endl;
				system("pause");
				break;
			case 5:
				system("cls");
				cout<<"MAQUINA CUENTA MONEDA"<<endl;
				cout<<"Ingrese la cantidad total de monedas: "<< endl;
                cin>>AR_cm; 
             do{
    	         cout<<"Ingrese el valor de la moneda(0.10, 0.25): ";
    	         cin>>AR_vm;
    	         AR_c=AR_c+1;
    	         AR_a=AR_a+AR_vm;
             if(AR_vm==AR_cstn){
        	     AR_c1=AR_c1+1;
        	     AR_a1=AR_a1+AR_vm;
                }
		     else{ 
		        AR_c2=AR_c2+1;
		        AR_a2=AR_a2+AR_vm;
		        } 
	         }while(AR_c<AR_cm);
	            cout<<"La cantidad total de monedas ingresadas fue:"<<AR_c<<endl;
	            cout<<"La cantidad total de dinero es:"<<AR_a<<endl;
	            cout<<"La cantidad de monedas de 10ctv es:"<<AR_c1<<endl;
	            cout<<"La cantidad total en monedas de 10ctv es:"<<AR_a1<<endl;
	            cout<<"La cantidad de monedas de 25ctv es:"<<AR_c2<<endl;
	            cout<<"La cantidad total de dinero en monedas de 25ctv es:"<<AR_a2<<endl;
				system("pause");
				break;
			default: cout<<"Ingreso una opcion incorrecta"<<endl;
		}
		cout<<endl<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Principal"<<endl;
    cout<<"//==> Archivo : RuanoAraceli-Principal.cpp"<<endl;
    cout<<"//==>Autor: Araceli Ruano"<<endl;
    cout<<"//==>Fecha de elaboracion: 2022-05-28"<<endl;
    cout<<"//================================================="<<endl;
    system("pause");
	}while(opc!=0);
	
	cout<<"Programa finalizado..."<<endl;
	
	return 0;
}