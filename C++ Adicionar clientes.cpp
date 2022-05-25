#include<iostream>
#include<conio.h>
#include<string>

 using namespace std; 
 
  	struct cliente {
  		int idade;
  		string nome;
		int cliente_id;   
  }clientes[10];
  
  
   int main(){
 		int i = 0, r;
 		
 			cout<<"Quantos clientes deseja cadastrar? \n";
 			cin>>r;
 		
 		system("cls");
 		
 		for (i=0; i<r; i++){
			
			cout<<"Digite o nome do cliente \n", i;
 			cin>>clientes[i].nome;
 			
 			cout<<"Digite a idade do cliente \n", i;
 			cin>>clientes[i].idade;
 			
 			cout<<"Digite a id do cliente \n";
 			cin>>clientes[i].cliente_id;
 			
 		system("cls");}
	 	
 		for (i=0; i<r; i++){
			
			cout<<"\nO nome do cliente: "<<clientes[i].nome;
			
			cout<<"\nA idade do cliente: "<<clientes[i].idade;
			
			cout<<"\nA id do cliente: "<<clientes[i].cliente_id;}	
 		
	 
   	
  	getch();
   	return 0;
   }
