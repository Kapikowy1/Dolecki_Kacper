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
    Sequence *newData = new Sequence[count + 1
