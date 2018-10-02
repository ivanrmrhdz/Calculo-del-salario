//Carlos Ivan Romero Hernandez

//Librerías Necesarias:
#include <iostream> //Para trabajar con entrada y salida de datos
#include <iomanip> //Para precision de decimales
#include <windows.h> //Para usar system("pause")


//acortar sentencias std
using namespace std;

//cuerpo del programa
main() {
	    
	     
	//Variables 
	float ventas;
	float sueldo;
	
	//Ciclo do-while para comprobar si el numero ingresado es menor que cero 		
	do{
	 system("Color 3F");
	//Se pide valores al usuario	

	cout<<"Ingrese cantidad de Ventas Mensual: "<<endl;
    cin>>ventas;
    
    //Comprobar si es un tipo de dato incorrecto 
    while(cin.fail()){
    	
    	cin.clear();
    	
    	cin.ignore(1000,'\n');
    	
    	cout<<"El dato ingresado no es correcto"<<endl;
        cout<<"\a\a";
    	cout<<"*********************************"<<endl;
    	cout<<" "<<endl;

        
	}
    		
	}while(ventas<=0); //si el numero es menor que cero se repite do, si es mayor continua con la ejecucion
	
	
	//Condiciones para sueldo		
	if(ventas <= 500000){
		
		//Valor predefinido de sueldo
		sueldo = 80000;
		
		//El resultado tardará n milisegundos en aparecer
		Sleep(1200);
		cout<<" "<<endl;
        cout<<"\a";//producira un beep agudo seguido de uno más grave
		cout<<"EL Salario que recibira es igual a: "<<sueldo<<endl;
		Beep(650,800);//Beep grave, los numeros corresponden a la frecuencia y los milisegundos que dura
		
	} 
	
	else if(ventas <= 1000000){
		
		//Valor predefinido de sueldo
		sueldo = 160000;
		
		//El resultado tardará n milisegundos en aparecer
		Sleep(1200);
		cout<<" "<<endl;
        cout<<"\a";//producira un beep agudo seguido de uno más grave
		cout<<"EL Salario que recibira es igual a: "<<sueldo<<endl;
		Beep(650,800);//Beep grave, los numeros corresponden a la frecuencia y los milisegundos que dura
		
	}
	
	else if(ventas <= 1500000){
		
		//Valor predefinido de sueldo
		sueldo = 320000;
		
		//El resultado tardará n milisegundos en aparecer
		Sleep(1200);
		cout<<" "<<endl;
        cout<<"\a";//producira un beep agudo seguido de uno más grave
		cout<<"EL Salario que recibira es igual a: "<<sueldo<<endl;
		Beep(650,800);//Beep grave, los numeros corresponden a la frecuencia y los milisegundos que dura
		
	}
	
	else if(ventas <= 2500000){
		
		//Valor predefinido de sueldo
		sueldo = 450000;
		
		//El resultado tardará n milisegundos en aparecer
		Sleep(1200);
		cout<<" "<<endl;
        cout<<"\a";//producira un beep agudo seguido de uno más grave
		cout<<"EL Salario que recibira es igual a: "<<sueldo<<endl;
		Beep(650,800);//Beep grave, los numeros corresponden a la frecuencia y los milisegundos que dura
		
	}
	
	else if(ventas <= 4000000){
		
		//Valor predefinido de sueldo
		sueldo = 550000;
		
		//El resultado tardará n milisegundos en aparecer
		Sleep(1200);
		cout<<" "<<endl;
        cout<<"\a";//producira un beep agudo seguido de uno más grave
		cout<<"EL Salario que recibira es igual a: "<<sueldo<<endl;
		Beep(650,800);//Beep grave, los numeros corresponden a la frecuencia y los milisegundos que dura
		
	}
	
	else{
		
		//Se calcula el 20% de las ventas, eso será el salario.
		sueldo = ventas*0.20;
		
		//El resultado tardará n milisegundos en aparecer
		Sleep(1200);
		cout<<" "<<endl;
        cout<<"\a";//producira un beep agudo seguido de uno más grave
        // se ajustó la precision numerica para mostrar datos decimales
		cout<<"EL Salario que recibira es igual a: "<<fixed<<setprecision(2)<<sueldo<<endl;
  	    Beep(650,800);//Beep grave, los numeros corresponden a la frecuencia y los milisegundos que dura
        

	     }

	system("pause");//La ejecución termina		
	
}
