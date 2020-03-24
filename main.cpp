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
    int nmax = 0, nmin=0;

    for (int i=0; i<n; i++){
        arr[i] = (rand() % 101)-50;


        cout<<arr[i]<<endl;
        file<<arr[i]<<endl;
        }
     for (int i=1;i<n;i++) {
         if(fabs(nmax)<fabs(arr[i])){
            nmax=arr[i];
          }
         if(fabs(nmin)>fabs(arr[i])){
            nmin=arr[i];
        }
    }
    cout<<"Max module number: "<<nmax<<endl<<"Min module number: "<<nmin<<endl;
    file<<"Max module number: "<<nmax<<endl<<"Min module number: "<<nmin<<endl;

    file.close();
    return 0;
}



