#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>

using namespace std;

class Pessoa {

// Atributos
private:
   string nome;
   string sexo;
   int RG;
   long int CPF;
   string email;
   int matricula;

// Métodos
public:
   Pessoa();
   ~Pessoa();
   void setNome(string nome);
   string getNome();
   void setSexo(string sexo);
   string getSexo();
   void setRG(int RG);
   int getRG();
   void setCPF(long int CPF);
   long int getCPF();
   void setEmail(string email);
   string getEmail();
   void setMatricula(int matricula);
   int getMatricula();
};

#endif
