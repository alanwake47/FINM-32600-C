#include <iostream>
#include "gradeconversion.h"
using namespace std;

int main() {
    cout << "GIVE ME YOUR SCORE:" << endl;
    int score;
    cin >> score;

    cout << "Your Grade is : " << converter(score) << endl;
    return 0;
}
