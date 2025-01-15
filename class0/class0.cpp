#include <iostream>
using namespace std;

class Counter {
private:
    int count = 0;  // Переменная-член

public:
    void increment() {
        count++;     // Изменяем состояние объекта
    }
    
    void printCount() const {

        count += 1;  // [!] см комментарий педагога
        cout << "Текущее значение счетчика: " << count << endl;
    }
};

int main() {
    Counter counter;
    
    counter.printCount();   // Выведет: Текущее значение счетчика: 0
    
    counter.increment();
    
    counter.printCount();   // Выведет: Текущее значение счетчика: 1
    
    return 0;
}
