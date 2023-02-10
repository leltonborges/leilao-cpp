#include "Avaliador.h"

void Avaliador::avaliar(const Leilao &leilao) {
    std::vector<Lance> lances = leilao.recuperaLances();

    std::sort(lances.begin(), lances.end(), ordeLance);
    this->lancesOrderAsc = lances;
    this->minValue = lances.begin()->recuperaValor();
    this->maxValue = lances.back().recuperaValor();
}

float Avaliador::getMaxValue() const {
    return this->maxValue;
}

float Avaliador::getMinValue() const {
    return this->minValue;
}

std::vector<Lance> Avaliador::getLancesOrderAsc() const {
    return this->lancesOrderAsc;
}

bool Avaliador::ordeLance(const Lance &lance1, const Lance &lance2) {
    return lance1.recuperaValor() < lance2.recuperaValor();
}
