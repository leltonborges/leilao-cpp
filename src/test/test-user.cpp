#include "../main/Usuario.hpp"
#include "catch2.h"

TEST_CASE("Teste de usuários") {
    SECTION("Deve obter apenas o primeiro name do usuário") {
        Usuario user("Beutrano de Tal");
        const std::string firsName = user.getFirstName();

        REQUIRE("Beutrano" == firsName);
    }

    SECTION("Deve obter o nome") {
        Usuario user("Beutrano");
        const std::string firsName = user.getFirstName();

        REQUIRE("Beutrano" == firsName);
    }
}