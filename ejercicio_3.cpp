#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hola ";
    std::string str2 = "mundo! ";
    std::string str4 = " Como estas?";
    std::string str5 = "muy ";
    std:: string str6 = "bien";
    std::string str3 = str1 + str2;
    std::string str7 = str5 + str6;
    std::cout << "Cadena resultante: " << str3 << std::endl;
    std::cout << "Cadena respuesta: " << str7 << std::endl;
    return 0;
}


