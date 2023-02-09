#ifndef Usuario_hpp
#define Usuario_hpp

#include <string>

class Usuario {
private:
    std::string nome;
public:
    explicit Usuario(std::string);

    [[nodiscard]] std::string recuperaNome() const;
};

#endif /* Usuario_hpp */
