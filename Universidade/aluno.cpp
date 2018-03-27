#include <iostream>
#include "aluno.hpp"

using namespace std;

Aluno::Aluno(){
   cout << "Construtor da Classe Aluno" << endl;
   setNome("");
   setSexo("");
   setRG(0);
   setCPF(0);
   setEmail("");
   setMatricula(0);
   setCreditos(0);
   setIra(5.0);
   setSemestre(1);
   setCurso("");
}
Aluno::~Aluno(){
  cout << "Destrutor da Classe Aluno" << endl;
}
void Aluno::setCreditos(int creditos){
   this->creditos = creditos;
}
int Aluno::getCreditos(){
   return creditos;
}
void Aluno::setIra(float ira){
   this->ira = ira;
}
float Aluno::getIra(){
   return ira;
}
void Aluno::setSemestre(int semestre){
   this->semestre = semestre;
}
int Aluno::getSemestre(){
   return semestre;
}
void Aluno::setCurso(string curso){
   this->curso = curso;
}
string Aluno::getCurso(){
   return curso;
}
void Aluno::imprimeDados(){
   cout << "Nome: " << getNome() << endl;
   cout << "Sexo: " << getSexo() << endl;
   cout << "RG: " << getRG() << endl;
   cout << "CPF: " << getCPF() << endl;
   cout << "email: " << getEmail() << endl;
   cout << "Matricula: " << getMatricula() << endl;
   cout << "Creditos: " << creditos << endl;
   cout << "Ira: " << ira << endl;
   cout << "Semestre: " << semestre << endl;
   cout << "Curso: " << curso << endl;
}





