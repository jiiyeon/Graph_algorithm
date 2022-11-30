#include <iostream>

int main()
{
    int hour, min, time, h_value, m_value;
    std::cin >> hour >> min >> time;

    min += time;

    h_value=min/60;
    m_value=min%60;

    hour+=h_value;
    min=m_value;

    if (hour>24 || hour==24)
        hour-=24;
    
    std::cout << hour << " " << min << std::endl;

    return 0;
}
