#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
 
int menu () {
	system ("cls");
	int x; 
	cout<<"------Bienvenido------"<<endl;
	cout<<"1. Agregar producto "<<endl;
	cout<<"2. leer archivo y mostrar producto "<<endl;
	cout<<"3. salir" <<endl;
 	cout<<"opcion"<<endl;		
	cin>>x;
 			
 		
 		 return x;
}

void hacerpedido(string leer){

 	 ifstream pedido("stock.txt", ios::in);
	  
	 string codigo_articulo;
	 string num_articulo;
	 string proveedor;
	 string precio;
	 string nivel_actual;
	 string niv_min;
				pedido>> num_articulo;
				pedido>> proveedor;
				pedido>> precio;
				pedido>> nivel_actual;
				pedido>> niv_min;	

}

void agregar(ofstream &es){
	 system ("cls");
	 string codigo_articulo;
	 string num_articulo;
	 string proveedor;
	 string precio;
	 string nivel_actual;
	 string niv_min;
		es.open("stock.txt", ios::out|ios::app);
			cout<<"codigo articulo: "<<endl;
			cin>>codigo_articulo;
			cout<<"numero del articulo: "<<endl;
			cin>>num_articulo;
			cout<<"proveedor: "<<endl;
			cin>>proveedor;
			cout<<"precio: "<<endl;
			cin>>precio;
			if(nivel_actual==niv_min);			
			es<<codigo_articulo<<"    "<<num_articulo<<"   "<<proveedor<<"   "<<precio<<"\n";
		es.close ();
	
}


void archivo (ifstream &lec){
	 system ("cls");
	 string codigo_articulo;
	 string num_articulo;
	 string proveedor;
	 string precio;
	 string nivel_actual;
	 string niv_min;	
	lec.open("stock.txt", ios::in);
		lec>>codigo_articulo;
			while(!lec.eof()){
				fflush(stdin);
				lec>> num_articulo;
				lec>> proveedor;
				lec>> precio;
				lec>> nivel_actual;
				lec>> niv_min;	
				cout<<"<<<<<<<Lista de Poducto Disponible>>>>>"<<endl;
				cout<<"---------------------------------------------"<<endl;
				cout<<"	codigo del articulo-----: "<<codigo_articulo<<endl;
				cout<<"	numero del articulo-----: "<<num_articulo<<endl;
				cout<<"	proveedor-------------- : "<<proveedor<<endl;
				cout<<"	precio del producto---- : "<<precio<<endl;
				cout<<"	nivel actual : "<<nivel_actual<<endl;
				cout<<"	nivel minimo : "<<niv_min<<endl;
				cout<<"-----------------------------------------------"<<endl<<endl;
			
				lec>>codigo_articulo;
			system("pause");
			
			lec.close(); 
			}
		
			
}

int main () {
		
		ifstream lec; 
		ofstream Esc;		
		int op;
			do {
				
				system("cls");
				op = menu ();	
				switch (op){
				 case 1:
				 	agregar(Esc);
					system ("cls");
				 break;
				 case 2:
				 	
				 	archivo(lec);
				 	break;
				 	
			}
	
	}while(op!=3);	
	
			
 	return 0;
}



