#include <iostream>
using namespace std;

class Fruit {
protected:
    int totalFruits;

public:
    Fruit() : totalFruits(0) {}

    void setFruits(int num) {
        totalFruits += num;
    }

    int getTotalFruits() {
        return totalFruits;
    }
};

class Apples : public Fruit {
private:
    int applesCount;

public:
    Apples() : applesCount(0) {}

    void setApples(int num) {
        applesCount += num;
        setFruits(num);
    }

    int getApplesCount() {
        return applesCount;
    }
};

class Mangoes : public Fruit {
private:
    int mangoesCount;

public:
    Mangoes() : mangoesCount(0) {}

    void setMangoes(int num) {
        mangoesCount += num;
        setFruits(num);
    }

    int getMangoesCount() {
        return mangoesCount;
    }
};

int main() {
    Apples appleBasket;
    Mangoes mangoBasket;

    appleBasket.setApples(10); // Adding 10 apples to the basket
    mangoBasket.setMangoes(5); // Adding 5 mangoes to the basket

    cout << "Number of Apples: " << appleBasket.getApplesCount() << endl;
    cout << "Number of Mangoes: " << mangoBasket.getMangoesCount() << endl;
    cout << "Total number of Fruits: " << appleBasket.getTotalFruits() << endl;

    return 0;
}
