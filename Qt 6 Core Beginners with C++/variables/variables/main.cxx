#include <QCoreApplication>
#include <QDebug>
#include <array>
#include <vector>

enum Colors{
    black, red, green, blue, white = 255
};

struct product{
    int weight{};
    double value{};
    Colors color{};
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    bool LightSwitch{false};

    qInfo() << "Is Light On: " << LightSwitch;

    int age{44};
    double height{6.02};

    qInfo() << "Age: " << age;
    qInfo() << "Height: "<< height;

    int dogs{-1};
    qInfo() << "Dogs: "<< dogs;
    qInfo() << "size: " << sizeof(dogs);

    const int id{215};


    product laptop;
    qInfo() << "Size:" << sizeof(laptop);

    laptop.color = Colors::green;
    laptop.value = 540.87;
    laptop.weight = 3;

    qInfo() << "Weight: " << laptop.weight;
    qInfo() << "value: " << laptop.value;
    qInfo() << "Color: " << laptop.color;


    // zero-base indexed array
    int ages[4] = {23, 7 ,12, 1000};
    ages[2] = 89;
    qInfo() << ages[0] << ages[1] << ages[2] << ages[3];

    std::array<int, 5> cars;
    cars[0] = 5;
    cars[1] = 78;
    cars[2] = 67;
    cars[3] = 23;
    cars[4] = 1;
    qInfo() << cars[0] << cars[1] << cars[2] << cars[3] << cars[4];

    qInfo() << "Array Size in count: " << cars.size() << "and in bytes: " << sizeof(cars);

    std::vector<int> costs(5,1);
    qInfo() << costs[0] << costs[1] << costs[2] << costs[3] << costs[4];

    qInfo() << "vector Size in count: " << cars.size() << "and in bytes: " << sizeof(cars);

    return a.exec();
}
