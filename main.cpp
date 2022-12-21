#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include <algorithm>
#include "5lab.cpp"

int main() {
    Fruit num1("apple" , "small" , "red" , SWEET);
    Fruit num2("orange", "small", "orange", SOUR);
    Fruit num3("watermelon", "big", "green",SOUR);
    Fruit num4("pineapple", "big", "yellow" , SOUR);

    FruitSalad Obj1;

    Obj1.addel(num1);
    Obj1.addel(num2);
    Obj1.addel(num3);
    Obj1.addel(num4);

    Obj1.printFruits();
    cout << "\n";
    Obj1.shuffle();
    Obj1.printFruits();
    cout << "\n";
    Obj1.topping();

    return 0;
};

