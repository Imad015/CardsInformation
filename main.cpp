#include <iostream>
using namespace std;
struct informationInfo{
    string firstName;
    string lastName;
    int age;
    string phone;
};

void readInformation(informationInfo &person){
    cout<<"enter your firstname: \n";
    cin>>person.firstName;
    cout<<"enter your lastname: \n";
    cin>>person.lastName;
    cout<<"enter your age: \n";
    cin>>person.age;
    cout<<"enter your phone: \n";
    cin>>person.phone;
}

void writeInformation(informationInfo person){
    cout<<"*****************************"<<endl;
    cout<<"Firstname: "<<person.firstName<<endl;
    cout<<"Lastname: "<<person.lastName<<endl;
    cout<<"age: "<<person.age<<endl;
    cout<<"phone: "<<person.phone<<endl;
    cout<<"*****************************"<<endl;
}

void readInformationtoArray(informationInfo arr[],int numberOfCards){
    for(int i =0; i<numberOfCards;i++){
        cout<<"Person "<<i+1<<": \n";
        readInformation(arr[i]);

    }

}

void writeInformationtoArray(informationInfo arr[],int numberOfCards){
    for(int i=0;i<numberOfCards;i++){
            cout<<"Person "<<i+1<<": \n";
            writeInformation(arr[i]);
    }

}

int main(){
    int numberOfCards = 0;
    cout<<"enter number Cards: \n";
    cin>>numberOfCards;
    informationInfo arr[numberOfCards];
    readInformationtoArray(arr,numberOfCards);
    writeInformationtoArray(arr,numberOfCards);
    return 0;

}
