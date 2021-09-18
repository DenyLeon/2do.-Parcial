#include<iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	string nombre,total[999],bono[1000],apellido,puesto,cod,datosn[100],datosc[100],datosa[100],datosp[200],nuevon,nuevoa,nuevop,nuevos,nuevob,sueldon[1000];
	float s=0,sueldo=0, bon=0;
	
	int opc = 0, i=0,k=0,l=0,m=0,n=0,o=0,p=0;
	while (opc !=5){
	system("cls");
	printf("       Taller el CHAPO \n");
	printf("Nos especializamos en escapes \n\n");
	cout<<"1 Ingresar registro "<<endl;
	cout<<"2 Modificar registro "<<endl;
	cout<<"3 Mostrar registro "<<endl;
	cout<<"4 Buscar por codigo "<<endl;
	cout<<"5 Salir "<<endl;
	cin>>opc;
	
	switch(opc){
	case 1:	
		cout<<"Ingrese codigo de empleado: "<<endl;
		cin>>cod;
		datosc[i]=cod;
		i++;
		cout<<"Ingrese nombre del empleado: "<<endl;
		cin>>nombre;
		datosn[k]=nombre;
		k++;
		cout<<"Ingrese el apellido del empleado: "<<endl;
		cin>>apellido;
		datosa[l]=apellido;
		l++;
		cout<<"Ingrese el puesto del empleado: "<<endl;
		cin>>puesto;
		datosp[m]=puesto;
		m++;
		cout<<"Ingrese el Sueldo base del empleado: "<<endl;
		cin>>sueldo;
		sueldon[n]=sueldo;
		n++;
		cout<<"Ingrese bonificacion del empleado: "<<endl;
		cin>>bon;
		bono[o]=bon;
		o++;
		break;
		total[p]= sueldo+bon;
		
		p++;
		
	case 2:	
		cout<<"Ingrese codigo a modificar: ";
		cin>>cod;
		cout<<"Ingrese nombre del empleado: "<<endl;
		cin>>nuevon;
		cout<<"Ingrese apellido del empleado: "<<endl;
		cin>>nuevoa;
		cout<<"Ingrese puesto del empleado: "<<endl;
		cin>>nuevop;
		cout<<"Ingrese Sueldo base del empleado: "<<endl;
		cin>>nuevos;
		cout<<"Ingrese bonificacion del empleado: "<<endl;
		cin>>nuevob;
		for (int j=0;j<i;j++){
			if(datosc[j]==cod){
				datosn[j]= nuevon;
				datosa[j]= nuevoa;
				datosp[j]= nuevop;
				sueldon[j]= nuevos;
				bono[j]= nuevob;
				cout<<"Modificado";	
				break;	
			}
		}
		break;
	case 3:
		for (int j=0;j<i;j++) {
				cout<<"* "<<datosc[j]<<"\nNOMBRE: "<<datosn[j]<<" "<<datosa[j]<<"\nPUESTO: "<<datosp[j]<<"\nSUELDO BASE: "<<sueldon[j]<<"\nBONIFICACION: "<<bono[j]<<"\n"<<endl;
		}
	
		break; 
		
	case 4:
		s = sueldo + bon;
		cout<<"Ingrese un codigo a buscar"<<endl;
		cin>>cod;
		for (int j=0;j<i;j++){
			if(datosc[j]==cod){
			cout<<datosc[j]<<"\nNOMBRE: "<<datosn[j]<<" "<<datosa[j]<<"\nPUESTO: "<<datosp[j]<<"\nSUELDO: "<<s<<endl;
		}else{
		
			cout<<"error de codigo";
}
		cout<<endl; 
		system ("pause");
		break;
		
		}
	}
	}//while
	
}

