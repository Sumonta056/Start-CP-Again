#include <bits/stdc++.h>
using namespace std;

void find_actual_time(int reflected_hours, int reflected_minutes){
    
    int actual_hours = (12 - reflected_hours) % 12;
    int actual_minutes = (60 - reflected_minutes) % 60;

    // Adjust the actual hours if minutes are 0
    if (actual_minutes == 0) {
        actual_hours = (actual_hours == 0) ? 0 : actual_hours - 1;
    }
    
    cout << "The actual time is " << actual_hours << ":" << (actual_minutes < 10 ? "0" : "") << actual_minutes << endl;
}

int main() {
    int reflected_hours = 11, reflected_minutes = 15;
    find_actual_time(reflected_hours, reflected_minutes);
}