#ifndef Usuario_hpp
#define Usuario_hpp

#include <string>

class Usuario {
private:
    std::string name;
public:
    explicit Usuario(std::string);

    [[nodiscard]] std::string getName() const;
    [[nodiscard]] std::string getFirstName() const;
};

#endif
