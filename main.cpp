#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){

    ofstream file;
    file.open("c:\\Qt\\Projects\\1\\example4.txt");
    int nP=0,nO=0;
    const int n=100;
    int arr[n];
    srand(2547);

    for (int i=0; i<n; i++){
        arr[i] = (rand() % 101)-50;
        if (arr[i]>0){
           nP++;

        }
        if (arr[i]<0){

           nO++;

         }



        cout<<arr[i]<<endl;
        file<<arr[i]<<endl;
     }


    cout<<"Kol-vo polog: "<<nP<<endl<<"Kol-vo otriz: "<<nO<<endl;
    file<<"Kol-vo polog: "<<nP<<endl<<"Kol-vo otriz: "<<nO<<endl;
    file.close();
    return 0;
}



