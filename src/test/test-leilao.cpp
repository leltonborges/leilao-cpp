#include "../main/Usuario.hpp"
#include "../main/Lance.hpp"
#include "../main/Leilao.hpp"
#include "catch2.h"

static Leilao getLeiloes();

TEST_CASE("Leilao") {
    SECTION("Não dever recebe lance consecutivos do mesmo usuário") {
        Leilao leilao("Fiat 147 0KM");
        Usuario user("Beutrano");
        Lance lance1(user, 1000);
        Lance lance2(user, 1500);

        leilao.recebeLance(lance1);
        leilao.recebeLance(lance2);

        REQUIRE(1 == leilao.recuperaLances().size());
        REQUIRE(1000 == leilao.recuperaLances().back().recuperaValor());
    }
}