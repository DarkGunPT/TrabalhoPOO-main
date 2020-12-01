#include "Territorio.h"

Territorio::Territorio(vector<Territorio*> lT, string nome){

	bool verificarNome = false, sair = true;
	int i = 2;
	string novoN = nome;
	this->tipo = tipo;
	do {
		for (Territorio* p : lT) // verifica se existe nomes de territorios iguais
		{
			if (p->nome == novoN)	
				verificarNome = true;
		}

		if (verificarNome) {  // Se existir repetido altera o original
			novoN = nome + to_string(i);
			verificarNome = false;
			i++;
		}
		else
		{
			this->nome = novoN;
			sair = false;
		}
	} while (sair);
}

void Territorio::getTipo(string tipo) {
	this->tipo = tipo;
}

Territorio::~Territorio()
{
}