#include "Avaliador.h"

void Avaliador::avaliar(const Leilao &leilao) {
    std::vector<Lance> lances = leilao.recuperaLances();
    this->maxValue = lances.begin()->recuperaValor();
    this->minValue = lances.begin()->recuperaValor();

    for (const Lance &l: lances) {
        if (l.recuperaValor() > this->maxValue)
            this->maxValue = l.recuperaValor();
        else if (l.recuperaValor() < this->minValue)
            this->minValue = l.recuperaValor();
    }
}

float Avaliador::getMaxValue() const {
    return this->maxValue;
}

float Avaliador::getMinValue() const {
    return this->minValue;
}
