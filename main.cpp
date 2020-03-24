#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){

    ofstream file;
    file.open("c:\\Qt\\Projects\\1\\example4.txt");
    const int n=100;
    int arr[n];
    srand(2547);

    for (int i=0; i<n; i++){
        arr[i] = (rand() % 101)-50;
        if (arr[i]%2==1){
           arr[i]+=3;

        }
        if (arr[i]%2==0){

           arr[i]*=2;

         }



        cout<<arr[i]<<endl;
        file<<arr[i]<<endl;
     }



    file.close();
    return 0;
}



