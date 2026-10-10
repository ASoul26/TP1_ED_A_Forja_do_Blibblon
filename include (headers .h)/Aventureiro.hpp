#ifndef AVENTUREIRO_HPP
#define AVENTUREIRO_HPP
#include <string>
#include "Build.hpp"
class Aventureiro{
private:
int id;
std::string nome;
Build buildAtual;

public:
Aventureiro(int id,std::string &nome,Build* buildAtual);
~Aventureiro();
int getId() const {return this->id;};
std::string getNome() const {return this->nome;};



}




#endif // AVENTUREIRO_HPP