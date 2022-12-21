#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;


enum Topping
{
    SWEET,
    SOUR,
    NEUTRAL
};

class Fruit
{
public: string name, size, colour;
    Topping taste;


    Fruit(string name, string size, string colour, Topping taste )
    {
        this->name = name;
        this->size = size;
        this->colour = colour;
        this->taste = taste;
    };

};

class FruitSalad
{
public:
    vector<Fruit> testVector;
    Topping saladTopping;

    FruitSalad() { };

    FruitSalad(vector <Fruit> testVector)
    {
        this->testVector = testVector;
    };


    void addel(Fruit i)
    {
        testVector.push_back(i);
    };



    void  topping()
    {
        int sweetCount = 0;
        int sourCount = 0;
        int neutralCount = 0;

        for(int i=0; i < testVector.size(); i++){
            if (testVector[i].taste == 0) {
                sweetCount++;
            }
            else if (testVector[i].taste == 1){
                sourCount++;
            } else if (testVector[i].taste == 2){
                neutralCount++;
            }
        }

        if ((sweetCount >= sourCount )&&( sweetCount >= neutralCount)){
            saladTopping = SWEET;
        } else if((neutralCount >= sourCount )&&( neutralCount >= sweetCount)){
            saladTopping = NEUTRAL;
        } else if ((sourCount >= neutralCount )&&( sourCount >= sweetCount)){
            saladTopping = SOUR;
        }
        cout << saladTopping<<endl;
    };

    void shuffle()
    {
        std::random_shuffle(testVector.begin(), testVector.end());
    };

    void printFruits(){
        for(int i=0;i<testVector.size();i++){
            cout << testVector[i].name<< endl;
        }
    }

};