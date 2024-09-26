#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
public:
    virtual ~Car() = default;

    virtual std::string getCarModel() const = 0;

    virtual double getBhp() const = 0;
};

class Koenigsegg : public Car {
public:
    std::string getCarModel() const override;

    double getBhp() const override;
};


class McLaren : public Car {
public:
    std::string getCarModel() const override;

    double getBhp() const override;
};

#endif
