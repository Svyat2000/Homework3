#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){

    ofstream file;
    file.open("c:\\Qt\\Projects\\1\\example4.txt");
    double sredP=0,sredO=0,sredAll=0;
    int nP=0,nO=0;
    const int n=100;
    int arr[n];
    srand(2547);

    for (int i=0; i<n; i++){
        arr[i] = (rand() % 101)-50;
      if (arr[i]>0){
           sredP+=arr[i];
           nP++;

        }
        if (arr[i]<0){
            sredO+=arr[i];
           nO++;

         }
        sredAll+=arr[i];


        cout<<arr[i]<<endl;
        file<<arr[i]<<endl;
     }
     sredAll=sredAll/n;
     sredP=sredP/nP;
     sredO=sredO/nO;

    cout<<"Srednee arifm: vsex, polog, otriz = "<<endl<<sredAll<<endl<<sredP<<endl<<sredO<<endl;
    file<<"Srednee arifm: vsex, polog, otriz = "<<endl<<sredAll<<endl<<sredP<<endl<<sredO<<endl;
    file.close();
    return 0;
}



