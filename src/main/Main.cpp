#include <iostream>
#include <cstring>
#include <memory>
#include "Usuario.hpp"

using namespace std;

/*void *operator new(size_t bytes) {
    cout << "Alocado " << bytes << " Bytes" << endl;
    return std::malloc(bytes);
}*/

class String {
private:
    char *data;
    size_t size;
public:
    explicit String(const char *string) {
        std::cout << "Criando string" << std::endl;
        size = strlen(string);
        data = new char[size];
        std::memcpy(data, string, size);
    }

    ~String() {
        delete data;
    }

    String(const String &other) {
        std::cout << "copy string" << std::endl;
        size = std::strlen(other.data);
        data = new char[size];
        std::memcpy(data, other.data, size);
    }

    String(String &&other) noexcept(false) {
        std::cout << "move string" << std::endl;
        size = other.size;
        data = other.data;

        other.size = 0;
        other.data = nullptr;
    }
};

class User {
private:
    String name;
public:
    explicit User(const String &string):
            name(string) {}

    explicit User(const String &&string):
            name((String &&) string) {}
};

void showNameUser(const std::unique_ptr<Usuario> user) {
    cout << "Show Name user: " << user->getName() << endl;
}

void showNameUser(const std::shared_ptr<Usuario> user) {
    cout << "Show Name user: " << user->getName() << endl;
}

int &getNumber() {
    static int value = 10;
    return value;
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
    std::cout << "Number: " << getNumber() << std::endl;
    getNumber() = 78;
    std::cout << "Number: " << getNumber() << std::endl;

    User(String("Fulano de tal"));
    return 0;
}