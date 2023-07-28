// Take array of element by user input using loops(vowels) and print the element
#include <iostream>
using namespace std;

int main(){


    char vowels[5];

    //using for loop
    // for(int index=0; index<5; index++){
    // cin>>vowels[index];
    // }

    // for(int index=0; index<5; index++){
    //     cout<<vowels[index]<<"";
    // }



    //using for each loop
    for(char &element:vowels){
        cin>>element;
    }
    for(char element:vowels){
        cout<<element<<endl;
    }

    return 0;

}

