#include <iostream>

int main()
{
    int hour, min;
    std::cin >> hour >> min;

    if (min<45)
    {
        hour-=1;
        min=min+60-45;
        if(hour<0)
            hour+=24;
    }
    else
        min-=45;
    
    std::cout << hour << " " << min << std::endl;

    return 0;
}
