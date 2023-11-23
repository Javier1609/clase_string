#include <iostream>
#include <string>

int main() {
    std::string sentence = "cr7 es poderoso.";
    std::string sub_str = "cr7";

    size_t pos = sentence.find(sub_str);

    if(pos != std::string::npos)
        std::cout << "Subcadena encontrada en la posicion: " << pos << std::endl;
    else
        std::cout << "Subcadena no encontrada." << std::endl;

    std::string new_sentence = sentence.replace(pos, sub_str.length(), "messi");

    std::cout << "Cadena resultante: " << new_sentence << std::endl;
    return 0;
}
