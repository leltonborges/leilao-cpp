#ifndef Leilao_hpp
#define Leilao_hpp

#include <vector>
#include <string>
#include "Lance.hpp"

class Leilao {
private:
    std::vector<Lance> lances{};
    std::string descricao{};

    bool compareUserLastLance(const Lance &lance);

public:
    Leilao();

    explicit Leilao(std::string descricao);

    [[nodiscard]] const std::vector<Lance> &recuperaLances() const;

    void recebeLance(const Lance &lance);

};

#endif /* Leilao_hpp */
