#include <stdio.h>
#include <iostream>
#include <string.h> 

string action(int x){
    string action;
    if (x >= 1000 || x <= 0) return 'invalid';
    else if (x > 0 && x <= 440) action = 'Stop watering (I)';
    else if (x >= 550 && x < 1000) action = 'Water (H)';
    else action = "Water (L)";

    return action;
}

int main(){
    std::cout << "Sensor value: ";
    int x;
    std::cin >> x;
    std::cout << "\n";
    std::cout << action(x) << std::endl;
}