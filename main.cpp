#include <iostream>
#include <fstream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main(){

    ofstream file;
    file.open("c:\\Qt\\Projects\\1\\example4.txt");
    const int n=20;
    int arr[n];
    srand(1365);
    int maxChet=0;

    for (int i=0; i<n; i++){
        arr[i] = (rand() % 101)-50;
        if(arr[i]%2==0){
            if(maxChet<arr[i]){
                maxChet=arr[i];
            }
        }

        cout<<arr[i]<<endl;
        file<<arr[i]<<endl;
        }


    cout<<"Max chet number: "<<maxChet<<endl;
    file<<"Max chet number: "<<maxChet<<endl;

    file.close();
    return 0;
}



