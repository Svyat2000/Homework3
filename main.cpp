#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
int Random(int min, int max);
int main(){

    ofstream file;
    file.open("c:\\Qt\\Projects\\1\\example4.txt");
    srand(static_cast<unsigned int>(time(0)));
    for (int i=0; i < 10; ++i)
    {
        std::cout <<Random(5,15) <<endl;
        file<<Random(5,15) <<endl;





}
    file.close();
    return 0;
}



int Random(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
