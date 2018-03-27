#include "pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(){
   cout << "Construtor da Classe Pessoa"<< endl;
   nome = "";
   sexo = "";
   RG = 0;
   CPF = 0;
   email = "";
   matricula = 0;   
}
Pessoa::~Pessoa(){
   cout << "Destrutor da Classe Pessoa" << endl;
}

void Pessoa::setNome(string nome){
   this->nome = nome;
}
string Pessoa::getNome(){
   return nome;
}
void Pessoa::setSexo(string sexo){
   this->sexo = sexo;
}
string Pessoa::getSexo(){
   return sexo;
}
void Pessoa::setRG(int RG){
   this->RG = RG;
}
int Pessoa::getRG(){
   return RG;
}
void Pessoa::setCPF(long int CPF){
   this->CPF = CPF;
}
long int Pessoa::getCPF(){
   return CPF;
}
void Pessoa::setEmail(string email){
   this->email = email;
}
string Pessoa::getEmail(){
   return email;
}
void Pessoa::setMatricula(int matricula){
   this->matricula = matricula;
}
int Pessoa::getMatricula(){
   return matricula;
}
