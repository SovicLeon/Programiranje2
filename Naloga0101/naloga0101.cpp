#include <iostream>

using namespace std;

unsigned int sumOfNumbers(int number) {
    unsigned int sumNumber = 0;
    while (number != 0) {
        sumNumber += number % 10;
        number /= 10;
    }
    return sumNumber;
}

bool isPerfectNumber(unsigned int number) {
    unsigned int sumDivisorsNumber = 0;
    for (unsigned int i = 1; i < number; ++i) {
        if (number % i == 0)
            sumDivisorsNumber += i;
    }
    return (sumDivisorsNumber == number);
}

unsigned int countDivisors(unsigned int number) {
    unsigned int divisorsNumber = 0;
    for (unsigned int i = 1; i < number; ++i) {
        if (number % i == 0)
            divisorsNumber++;
    }
    return divisorsNumber;
}

int main() {
    int inputNumber;
    unsigned int sumNumber;

    do {
        cout << "Enter a number: ";
        cin >> inputNumber;
    } while (inputNumber <= 0);

    sumNumber = sumOfNumbers(inputNumber);

    cout << "Sum of digits in number: " << sumNumber << endl;

    cout << "Number of divisors of number " << sumNumber << ": " << countDivisors(sumNumber) << endl;

    if (isPerfectNumber(sumNumber)) {
        cout << "The number " << sumNumber << " is a perfect number.";
    } else {
        cout << "The number " << sumNumber << " is not a perfect number.";
    }

    return 0;
}
