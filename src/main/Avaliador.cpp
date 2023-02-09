#include "Avaliador.h"

void Avaliador::avaliar(const Leilao& leilao) {
    std::vector<Lance> lances = leilao.recuperaLances();
    for (const Lance& l: lances) {
        if(l.recuperaValor() > this->maiorValor)
            this->maiorValor = l.recuperaValor();
    }
}

float Avaliador::getMaiorValor() const {
    return this->maiorValor;
}
