#include "Statistics.h"
#include <algorithm>

Statistics::Statistics() : data(nullptr), count(0) {}

Statistics::Statistics(const Statistics &other)
    : data(new Sequence[other.count]), count(other.count) {
    std::copy(other.data, other.data + count, data);
}

Statistics::~Statistics() {
    delete[] data;
}

void Statistics::addSequence(const Sequence &seq) {
    Sequence *newData = new Sequence[count + 1];
    std::copy(data, data + count, newData);
    newData[count] = seq;

    delete[] data;
    data = newData;
    ++count;
}

int Statistics::getCount() const {
    return count;
}

int Statistics::sum() const {
    int total = 0;
    for (int i = 0; i < count; ++i) {
        total += data[i].sum();
    }
    return total;
}

int Statistics::min() const {
    int minimum = data[0].min();
    for (int i = 1; i < count; ++i) {
        minimum = std::min(minimum, data[i].min());
    }
    return minimum;
}

int Statistics::max() const {
    int maximum = data[0].max();
    for (int i = 1; i < count; ++i) {
        maximum = std::max(maximum, data[i].max());
    }
    return maximum;
}

double Statistics::average() const {
    return 1.0 * sum() / count;
}
