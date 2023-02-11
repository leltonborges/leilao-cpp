#include <iostream>
#include <string>
#include <memory>
#include "Usuario.hpp"

using namespace std;

void *operator new(size_t bytes) {
    cout << "Alocado " << bytes << " Bytes" << endl;
    return std::malloc(bytes);
}

void showNameUser(const std::unique_ptr<Usuario> user){
    cout << "Show Name user: " << user->getName() << endl;
}

void showNameUser(const std::shared_ptr<Usuario> user){
    cout << "Show Name user: " << user->getName() << endl;
}

int main() {
    std::cout << "---------------" << endl;
    std::string fulano = "Fulano Acala de Tal beutrano & Ciclano da Abete das canvas";
    std::string_view beutrano(fulano.c_str(), fulano.find('&') - 1);
    std::string_view cilano(fulano.c_str() + fulano.find('&'));

    std::cout << "MyName: " << fulano << endl;

    std::unique_ptr<Usuario> user(new Usuario("Fulano de tal Beutrano"));
    std::unique_ptr<Usuario> user1 = std::make_unique<Usuario>(Usuario("Fulano de tal Beutrano"));
    std::shared_ptr<Usuario> user2 = std::make_shared<Usuario>(Usuario("Fulano de tal Beutrano"));

    showNameUser(user2);

    return 0;
}