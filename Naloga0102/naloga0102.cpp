#include <iostream>
#include <ctime>

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
    cout << "0 ... EXIT" << endl;
    cout << "============================" << endl;
    cout << "Select: ";
}

void fillArray(float *array, const unsigned int size) {
    for (unsigned int i = 0; i < size; i++) {
        float randomNumber;
        randomNumber = rand() % 30 + 5;
        randomNumber /= 10;
        array[i] = randomNumber;
    }
}

void printArray(const float *array, const unsigned int size) {
    for (unsigned int i = 0; i < size; i++) {
        cout << ((i > 0) ? ", " : "") << array[i];
    }
}

float averageNumberArray(const float *array, const unsigned int size) {
    float sumNumber = 0;
    for (unsigned int i = 0; i < size; i++) {
        sumNumber += array[i];
    }
    return sumNumber / size;
}

int lowerThanAverageArray(const float *array, const unsigned int size) {
    int belowAverageNumber = 0;
    float averageConsumptionNumber = averageNumberArray(array, size);
    for (unsigned int i = 0; i < size; i++) {
        if (array[i] < averageConsumptionNumber) {
            belowAverageNumber++;
        }
    }
    return belowAverageNumber;
}

float biggestInArray(const float *array, const unsigned int size) {
    unsigned int biggestNumberIndex = 0;
    for (unsigned int i = 0; i < size; i++) {
        if (array[i] > array[biggestNumberIndex]) {
            biggestNumberIndex = i;
        }
    }
    return array[biggestNumberIndex];
}

int betweenArray(const float *array, const unsigned int size) {
    int betweenNumber = 0;
    for (unsigned int i = 0; i < size; i++) {
        if (array[i] < 2.5 && array[i] > 2.0) {
            betweenNumber++;
        }
    }
    return betweenNumber;
}

void checkMonthlyGoal(const float *array, const unsigned int size, float goal) {
    float sumNumber = 0;
    for (unsigned int i = 0; i < size; ++i) {
        sumNumber += array[i];
    }
    if (sumNumber < goal) {
        cout << "Monthly goal failed! You are " << goal - sumNumber << " l below the given goal (" << goal << " l).";
    } else {
        cout << "Monthly goal reached! You are " << sumNumber - goal << " l above the given goal (" << goal << " l).";
    }
}

int main() {
    const unsigned int days = 30;
    float *waterIntakes = new float[days];

    srand(time(nullptr));

    bool running = true;
    int selection;
    float goalNumber;

    do {
        menu();
        cin >> selection;
        switch (selection) {
            case 1:
                fillArray(waterIntakes, days);
                break;
            case 2:
                printArray(waterIntakes, days);
                break;
            case 3:
                cout << "Average water intake: " << averageNumberArray(waterIntakes, days);
                break;
            case 4:
                cout << "Number of days with water consumption lower than average: "
                     << lowerThanAverageArray(waterIntakes, days);
                break;
            case 5:
                cout << "Most water consumed in a day: " << biggestInArray(waterIntakes, days);
                break;
            case 6:
                cout << "Number of days with the recommended water consumption: " << betweenArray(waterIntakes, days);
                break;
            case 7:
                cout << "Enter monthly goal(l): ";
                cin >> goalNumber;
                checkMonthlyGoal(waterIntakes, days, goalNumber);
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

    delete[] waterIntakes;

    return 0;
}