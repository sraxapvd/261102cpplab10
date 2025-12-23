#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;

int main() {

    int count = 0;
    float sum = 0;
    float sum_of_square = 0;
    string line;

    ifstream source("score.txt");

    while (source >> line)
    {
        float x = atof(line.c_str());
        sum += x;
        sum_of_square += x*x ;
        count++ ;
    }
    
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/count << "\n";
    cout << "Standard deviation = " << sqrt((sum_of_square / count) - pow(sum / count, 2));

}