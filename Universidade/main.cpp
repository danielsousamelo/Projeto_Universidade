#include <iostream>
#include "pessoa.hpp"
#include "aluno.hpp"

using namespace std;

int main(int argc, char ** argv){

   Pessoa pessoa1;
   Pessoa * pessoa2 = new Pessoa();

   Aluno aluno1;
   Aluno * aluno2 = new Aluno();

   pessoa1.setNome("João");
   pessoa1.setMatricula(4588);

   pessoa2->setNome("Maria");
   pessoa2->setMatricula(1801564);

   cout << "Pessoa1" << endl;
   cout << "Nome: " << pessoa1.getNome() << endl;
   cout << "Matrícula: " << pessoa1.getMatricula() << endl;

   cout << "Pessoa2" << endl;
   cout << "Nome: " << pessoa2->getNome() << endl;
   cout << "Matrícula: " << pessoa2->getMatricula() << endl;

   delete pessoa2;

   aluno2->setNome("Jorge");
   aluno2->setRG(123123);
   aluno2->setCPF(19678542643);
   aluno2->setSexo("M");
   aluno2->setIra(3.5);
   aluno2->setSemestre(3);
   aluno2->setCurso("Eng. de Software");
   aluno2->setCreditos(50);

   aluno2->imprimeDados();

   delete aluno2;


};
