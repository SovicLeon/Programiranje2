#include "WaterIntake.h"

using namespace std;

void menu() {
    cout << "============================" << endl;
    cout << "=========== MENU ===========" << endl;
    cout << "============================" << endl;
    cout << "1 ... GENERATE WATER INTAKES" << endl;
    cout << "2 ... PRINT WATER INTAKES" << endl;
    cout << "3 ... PRINT AVERAGE WATER INTAKE" << endl;
    cout << "4 ... PRINT NUMBER DAYS WHEN WATER INTAKE WAS LOWER THEN THE AVERAGE" << endl;
    cout << "5 ... PRINT THE BIGGEST WATER CONSUMPTION IN A DAY" << endl;
    cout << "6 ... PRINT NUMBER OF DAYS WHEN WATER INTAKE WAS IN THE RECOMMENDED LIMITS" << endl;
    cout << "7 ... CHECK YOUR MONTHLY GOAL" << endl;
    cout << "8 ... ADD QUANTITY OF WATER TO A DAY" << endl;
    cout << "9 ... PRINT WATER INTAKES OF MONTH" << endl;
    cout << "10 .. SET WATER INTAKE TO A DAY" << endl;
    cout << "11 .. EMPTY WATER INTAKES" << endl;
    cout << "0 ... EXIT" << endl;
    cout << "============================" << endl;
    cout << "Select: ";
}

void fillVector(vector<WaterIntake *> &array, const unsigned int size, unsigned int month, unsigned int year) {
    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(5, 35);
    for (unsigned int i = 0; i < size; i++) {
        array.push_back(new WaterIntake(i + 1, month, year, uniform_dist(e1) / 10.f));
    }
}

void printVector(const vector<WaterIntake *> &array) {
    for (unsigned int i = 0; i < array.size(); i++)
        cout << array[i]->toString() << ((i < array.size() - 1) ? ", " : ".") << std::endl;
}

float averageNumberArray(const vector<WaterIntake *> &array) {
    float sumNumber = 0;
    for (unsigned int i = 0; i < array.size(); i++) {
        sumNumber += array[i]->getQuantity();
    }
    return sumNumber / array.size();
}

int lowerThanAverageArray(const vector<WaterIntake *> &array) {
    int belowAverageNumber = 0;
    float averageConsumptionNumber = averageNumberArray(array);
    for (unsigned int i = 0; i < array.size(); i++) {
        if (array[i]->getQuantity() < averageConsumptionNumber) {
            belowAverageNumber++;
        }
    }
    return belowAverageNumber;
}

float biggestInArray(const vector<WaterIntake *> &array) {
    unsigned int biggestNumberIndex = 0;
    for (unsigned int i = 0; i < array.size(); i++) {
        if (array[i]->getQuantity() > array[biggestNumberIndex]->getQuantity()) {
            biggestNumberIndex = i;
        }
    }
    return array[biggestNumberIndex]->getQuantity();
}

int betweenArray(const vector<WaterIntake *> &array) {
    int betweenNumber = 0;
    for (unsigned int i = 0; i < array.size(); i++) {
        if (array[i]->getQuantity() < 2.5 && array[i]->getQuantity() > 2.0) {
            betweenNumber++;
        }
    }
    return betweenNumber;
}

void checkMonthlyGoal(const vector<WaterIntake *> &array, float goal) {
    float sumNumber = 0;
    for (unsigned int i = 0; i < array.size(); i++) {
        sumNumber += array[i]->getQuantity();
    }
    if (sumNumber < goal) {
        cout << "Monthly goal failed! You are " << goal - sumNumber << " l below the given goal (" << goal << " l).";
    } else {
        cout << "Monthly goal reached! You are " << sumNumber - goal << " l above the given goal (" << goal << " l).";
    }
}

void addQuantityDay(const vector<WaterIntake *> &array, unsigned int day, unsigned int month, unsigned int year,
                    float quantity) {
    for (unsigned int i = 0; i < array.size(); i++) {
        if (array[i]->getDay() == day && array[i]->getMonth() == month && array[i]->getYear() == year) {
            array[i]->addQuantity(quantity);
            return;
        }
    }
}

vector<WaterIntake *> waterIntakesInMonth(vector<WaterIntake *> &waterIntakes, int month, int year) {
    vector<WaterIntake *> waterIntakesOfMonth;
    for (unsigned int i = 0; i < waterIntakes.size(); i++) {
        if (waterIntakes[i]->getMonth() == month && waterIntakes[i]->getYear() == year) {
            waterIntakesOfMonth.push_back(waterIntakes[i]);
        }
    }
    return waterIntakesOfMonth;
}

void setQuantityDay(const vector<WaterIntake *> &array, unsigned int day, unsigned int month, unsigned int year,
                    float quantity) {
    for (unsigned int i = 0; i < array.size(); i++) {
        if (array[i]->getDay() == day && array[i]->getMonth() == month && array[i]->getYear() == year) {
            array[i]->setQuantity(quantity);
            return;
        }
    }
}

void clearVector(const vector<WaterIntake *> &array) {
    for (WaterIntake* i : array) {
        delete i;
    }
}

int main() {
    const unsigned int days = 30;
    vector<WaterIntake *> waterIntakes;
    vector<WaterIntake *> waterIntakesOfMonth;

    bool running = true;
    int selection, day, month, year;
    float goalNumber, quantity;

    do {
        menu();
        cin >> selection;
        switch (selection) {
            case 1:
                cout << "Enter year: ";
                cin >> year;
                cout << "Enter month: ";
                cin >> month;
                fillVector(waterIntakes, days, month, year);
                break;
            case 2:
                printVector(waterIntakes);
                break;
            case 3:
                cout << "Average water intake: " << averageNumberArray(waterIntakes);
                break;
            case 4:
                cout << "Number of days with water consumption lower than average: "
                     << lowerThanAverageArray(waterIntakes);
                break;
            case 5:
                cout << "Most water consumed in a day: " << biggestInArray(waterIntakes);
                break;
            case 6:
                cout << "Number of days with the recommended water consumption: " << betweenArray(waterIntakes);
                break;
            case 7:
                cout << "Enter monthly goal(l): ";
                cin >> goalNumber;
                checkMonthlyGoal(waterIntakes, goalNumber);
                break;
            case 8:
                cout << "Enter year: ";
                cin >> year;
                cout << "Enter month: ";
                cin >> month;
                cout << "Enter day: ";
                cin >> day;
                cout << "Enter quantity of water(l) to add: ";
                cin >> quantity;
                addQuantityDay(waterIntakes, day, month, year, quantity);
                break;
            case 9:
                cout << "Enter year: ";
                cin >> year;
                cout << "Enter month: ";
                cin >> month;
                waterIntakesOfMonth = waterIntakesInMonth(waterIntakes, month, year);
                printVector(waterIntakesOfMonth);
                break;
            case 10:
                cout << "Enter year: ";
                cin >> year;
                cout << "Enter month: ";
                cin >> month;
                cout << "Enter day: ";
                cin >> day;
                cout << "Enter quantity of water(l) to set: ";
                cin >> quantity;
                setQuantityDay(waterIntakes, day, month, year, quantity);
                break;
            case 11:
                clearVector(waterIntakes);
                break;
            case 0:
                running = false;
                break;
            default:
                cout << "Wrong selection!" << endl;
                break;
        }
        cout << endl;
    } while (running);

    clearVector(waterIntakes);

    return 0;
}