#ifndef TERRITORIO_H
#define TERRITORIO:H

#include <iostream> //contains string stuff
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Territorio
{
private:
    string nome;
    string tipo;
    int resistencia;
    int produtosPorTurno;
    int ouroPorTurno;
    int pontos;
    
public:
    Territorio(vector<Territorio*> lT, string tipo, string nome);
    string getTipo();
    
    
    
    ~Territorio();
};

class TerritorioInicial : private Territorio
{
 public:
    
};

class Continentes : private Territorio
{
  public:

};

class Ilhas : private Territorio
{
 public:

};

class Planicie : private Continentes
#endif