#ifndef COUNTER_H
#define COUNTER_H

class Counter
{

public:
    Counter();
    Counter(int init);

    void increment() {
        ++value;
    }

    void decrement() {
        --value;
    }

    int getValue() const {
        return value;
    }

private:
    int value;
};
#endif // COUNTER_H
