#include <iostream>
#include <string>

int main()
{
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string input;
    std::cin >> input;
    
    int i=0;
    while (i<alphabet.length())
    {
        std::cout << static_cast<int>(input.find(alphabet[i])) << " ";
        i++;
    }
    return 0;
}
