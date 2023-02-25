#include <iostream>
#include <random>

//write a function to randomly pick out of two given strings
std::string random_string(std::string s1, std::string s2) {
    //create a random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 1);

    //pick a random number
    int random_number = dis(gen);

    //return the string
    if (random_number == 0) {
        return s1;
    } else {
        return s2;
    }
}

int main() {
    //create two strings
    std::string s1 = "Viernes - Friday";
    std::string s2 = "Sábado - Saturday";

    //create a for loop which runs 8 times and prints out the random string
    for (int i = 0; i < 8; i++) {
        std::cout << random_string(s1, s2) << std::endl;
    }
}
