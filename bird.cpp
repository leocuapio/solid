#include <iostream>

class Bird {
public:
    virtual void lay_egg() {
        std::cout << "Egg";
    }
};

class flyingBird: public Bird {
public:
    virtual void fly() {
        std::cout << "Bird is flying\n";
    };
};

class Ostrich : public Bird {};

class Eagle: public flyingBird {};

// For demonstration
int main() {
    Eagle eagle;
    Ostrich ostrich;
    
    eagle.lay_egg();
    eagle.fly();

    ostrich.lay_egg();
    // ostrich.fly();
    

    return 0;
}
