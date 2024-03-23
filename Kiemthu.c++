#include <iostream>
#include <string> 
using namespace std; 

string action(int x) {
    string action; 
    if (x >= 1000 || x <= 0) return "invalid"; 
    else if (x > 0 && x <= 440) action = "Stop watering (I)";
    else if (x >= 550 && x < 1000) action = "Water (H)";
    else action = "Water (L)";

    return action;
}

int main() {
    cout << "Sensor value: ";
    int x;
    cin >> x;
    cout << action(x) << endl;
    cout << "\n";
    cout << action(x) << endl;
    return 0; 
}
