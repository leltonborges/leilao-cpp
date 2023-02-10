#include "Leilao.hpp"

#include <iostream>
#include <utility>

Leilao::Leilao() {
    std::cout << "Criando leilão" << std::endl;
}

Leilao::Leilao(std::string descricao):
        descricao(std::move(descricao)) {

}

const std::vector<Lance> &Leilao::recuperaLances() const {
    return lances;
}

void Leilao::recebeLance(const Lance &lance) {
    if (lances.empty() || !compareUserLastLance(lance))
        lances.push_back(lance);

}

bool Leilao::compareUserLastLance(const Lance &lance) {
    return lances.back().getUserName() == lance.getUserName();
}
