#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>

class Item {
private:
int id;
std::string nome;

public:
    Item(int id, const std::string& nome);
    ~Item();
    int getId() const {return this->id;};
    std::string getNome() const {return this->nome;};
};

#endif // ITEM_HPPS