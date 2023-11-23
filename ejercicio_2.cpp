#include <iostream>
#include <string>
using namespace std;
int main() {
    std::string s1 = "OpenAI is a leading AI research lab.";
    std::string s2 = "Donde esta carlos?";
    std::cout << "Tamano de la cadena 1: " << s1.size() << s2.size() << std::endl;
    std::cout << "Tamano de la cadena 2: " << s2.size() << s2.size() << std::endl;
    std::cout << "Esta la cadena 1 vacia  " << (s1.empty() ? "Sí" : "No") << std::endl;
    std::cout << "Esta la cadena 2 vacia  " << (s2.empty() ? "Sí" : "No") << std::endl;
    return 0;
}