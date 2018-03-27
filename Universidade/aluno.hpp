#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <string>
#include "pessoa.hpp"

using namespace std;

class Aluno : public Pessoa {

// Atributos
private:
   int creditos;
   float ira;
   int semestre;
   string curso;
// Métodos
public:
   Aluno();
   ~Aluno();
   void setCreditos(int creditos);
   int getCreditos();
   void setIra(float ira);
   float getIra();
   void setSemestre(int semestre);
   int getSemestre();
   void setCurso(string curso);
   string getCurso();
   void imprimeDados();

};


#endif
