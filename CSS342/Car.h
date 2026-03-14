#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car{
    private:
    string make_;
    string model_;
    int year_;
    double speed_;

    public:
    Car(const string& make, const string& model, int year, double speed)
    :make_(make), model_(model), year_(year), speed_(speed) {}

    void accelerate(double gas);
    double getSpeed() const;
    void setSpeed(int newSpeed);
};
endif