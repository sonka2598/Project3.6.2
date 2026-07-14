#include <iostream>
#include <Windows.h>
#include <counter.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string answer;
    cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    cin >> answer;
    Counter counter;
    if (answer == "да" || answer == "Да" || answer == "yes") {
        int init;
        cout << "Введите начальное значение счётчика: ";
        cin >> init;
        counter = Counter(init);
    }

    while (true) {
        char command;
        cout << "Введите команду ('+', '-', '=', 'x'): ";
        cin >> command;
        switch (command) {
        case '+':
            counter.increment();
            break;
        case '-':
            counter.decrement();
            break;
        case '=':
            cout << counter.getValue() << endl;
            break;
        case 'x':
            cout << "До свидания!" << endl;
            return 0;
        default:
            cout << "Неизвестная команда. Попробуйте снова.\n";
        }
    }
    return 0;
}
