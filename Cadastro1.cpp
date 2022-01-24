#include <stdio.h>
#include <iostream>
#include <string>
#include "vector"

using namespace std;

class Usuario{
public:
	string nome;
	
	};
	
int verifica(vector<Usuario> &cadastro, string &novo){
	int pos = 0;
	for (auto i = cadastro.begin(); i != cadastro.end(); i++){
			
		if(cadastro[pos].nome == novo){
				return 1;
			}
			pos++;
		}
		return 0;		
	}

int main()
{
	vector<Usuario> cadastro;
	string parar;
	string entrada;
	
	
	while(parar != "nao"){
		cout << "Digite o nome do usuário a ser cadastrado" << endl;
		cin >> entrada;
		int teste = verifica (cadastro, entrada);
			
			if(teste == 1){
				cout << "Usuário já cadastrado!" << endl;
			}
			if(teste == 0){
				Usuario novo;
				novo.nome = entrada;
				cadastro.push_back(novo);
			}
		
		cout << "Deseja continuar? [sim/nao]" << endl;
		cin >> parar;
		if (parar != "sim" && parar != "nao"){
			cout << "ERRO: Digite no formato [sim/nao]" << endl;
			cout << "Deseja continuar? [sim/nao]" << endl;
			cin >> parar;
		}
	}
	
	cout << "Nomes cadastrados:" << endl;
	for(long unsigned int i = 0; i<cadastro.size(); i++){
		cout << cadastro[i].nome << endl;
	}
	
	
	return 0;
}
