#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){

    ofstream file;
    file.open("c:\\Qt\\Projects\\1\\example4.txt");
    int sum=0;//<4
    const int n=100;
    int arr[n];
    srand(2547);
    for (int i=0; i<n; i++){
        arr[i] = rand() % 56;
        if (arr[i]<4){
            sum+=arr[i];

         }
        cout<<arr[i]<<endl;
     }
    cout<<"Sum i<4: "<<sum;
    file<<sum<<endl;
    file.close();
    return 0;
}



