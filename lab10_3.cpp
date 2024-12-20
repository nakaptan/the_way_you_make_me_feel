#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int count = 0;
    float sum = 0.0;
    float sum_of_square = 0.0;
    string textline;
    ifstream source("score.txt");

    while (getline(source, textline))
    {
        float value = stof(textline);
        sum += value;
        sum_of_square += value * value;
        count++;
    }

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    float mean = sum / count;
    cout << "Mean = " << mean << "\n";

    float stdvt = sqrt((sum_of_square / count) - pow(mean, 2));
    cout << "Standard deviation = " << stdvt << "\n";

    return 0;
}