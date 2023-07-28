#include<iostream>
using namespace std;

int main(){
    int array[]= {1,2,3,4};
    int size= sizeof(array)/sizeof(array[0]);

    //for loop
    for(int index=0; index<size;index++){
        cout<<array[index]<<endl;
    }

    //while loop
    int index=0;
    while(index<size){
        cout<<array[index]<<endl;
        index++;
    }

    //for each loop
    for(int element: array){
        cout<<element<<endl;
    }



    return 0;
}