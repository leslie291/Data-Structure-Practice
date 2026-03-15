#include "Car.h"

 void Car::accelerate(double gas){
    speed_ += gas;
 }
    double Car::getSpeed() const{
    return speed_;
    }
    void Car::setSpeed(int newSpeed){
    speed_ = newSpeed;
    }