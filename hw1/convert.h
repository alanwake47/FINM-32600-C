//guards

#pragma endregion
#include <string>
using namespace std;

enum Currency {USD=0, EUR=1, GBP=2, CAD=3, AUD=4, JPY=5, INR=6};

float get_rate(int currency);
float calc_forex(float base, float rate_b, float rate_f);
string enum_to_string(int currency);