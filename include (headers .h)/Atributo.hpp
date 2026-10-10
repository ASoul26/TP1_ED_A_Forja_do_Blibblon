#ifndef ATRIBUTO_HPP
#define ATRIBUTO_HPP
#include <string>

class Atributo {
private:
int id;
std::string nome;

public:
Atributo(int id,std::string nome);
~Atributo();

int getId() const {return this->id;};
std::string getNome() {return this->nome;};






};


#endif  //ATRIBUTO_HPP