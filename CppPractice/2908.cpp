#include <iostream>

int main()
{
    char input1[5], input2[5];
    std::cin >> input1 >> input2;

    int int_input1, int_input2;
    int_input1 = 100*static_cast<int>(input1[2]-48) + 10*static_cast<int>(input1[1]-48) + static_cast<int>(input1[0]-48);
    int_input2 = 100*static_cast<int>(input2[2]-48) + 10*static_cast<int>(input2[1]-48) + static_cast<int>(input2[0]-48);

    if (int_input1>int_input2)
        std::cout << int_input1 << "\n";
    else
        std::cout << int_input2 << "\n";

    return 0;
}
