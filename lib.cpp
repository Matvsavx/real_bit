#include <stdio.h>
#include <iostream>
#include "lib.h"

using namespace std;

int result1, result2, result3, result4, value;

int first(int stepen){

    int a;
    a = 1;
    a = a << stepen;
    return a;
}

void second(){

    for(int i=sizeof(result2)*8-1; i>=0; --i){

        printf("%d", (result2 >> i)&1);
    }
}

int third(int value){
    int j;
    for(int i=sizeof(value)*8-1; i>=0; --i){

        if ((value >> i&1)==1){

            j++;
        }
    }
    return  j;

}

int fourth(int value){

    int ones=0, zeros=0;
    for(int i=0; i<=sizeof(value)*8-1; i++){

        if ((value >> i&1)==1){

            ones=ones+zeros+1;
            zeros=0;

        }else{

            zeros++;
        }
    }
    return  ones;

}

void fifth(){

    int n,i;

    cout<<"1:\n";
    cin>>n;
    cout<<"2:\n";
    cin>>i;
    cout<<"ответ:\n"<<(n|(1<<i))<<endl;

}

void sixth(){

    int n,i;

    cout<<"1:\n";
    cin>>n;
    cout<<"2:\n";
    cin>>i;
    cout<<"ответ:\n"<<(n&(65535 ^(1<<i)))<<endl;

}

void seventh() {

    int n, i;

    cout << "1 число:\n";
    cin >> n;
    cout << "2 число:\n";
    cin >> i;
    cout << "ответ:\n" << (n ^ (1 << i)) << endl;

}

void eighth(){

    int length=16, n;

    cout << "Введите число:\n";
    cin>>n;
    if ((n & (1 << (length - 1))) >> (length - 1) == 1){

        cout<<"ответ\n:"<<(((n << 1) | 1) ^ (1 << length))<<endl;

    }else{

        cout << "ответ:\n" << (n << 1) << endl;
    }

}

void ninth(){

    int count = 0, n;

    cout << "Введите число:\n";
    cin >> n;

    for (int i=0; i<=sizeof(value)*8-1; i++) {

        if ((n & (3 << i)) >> i == 3) {

            count++;
        }

    }
    cout << "ответ" << count << endl;
}

void tenth(){

    int x, y, z;

    cout << "1 число:\n";
    cin >> x;
    cout << "2 число:\n";
    cin >> y;
    cout << "3 число:\n";
    cin>> z;
    cout << "ответ:\n" << (x ^ ((1 << y) | (1 << z)));
}

void eleventh(){

    int n;
    int i;

    cout << "Число" << "\n";
    cin >> n;
    cout << "Номер бита:" << "\n";
    cin >> i;
    cout << "Ответ: " << (((n >> (i + 1)) << i) | (n & ((1 << i) - 1))) << "\n";
}









