#include "Sequence.h"
#include <algorithm>
#include <numeric>

Sequence::Sequence() : data(nullptr), length(0) {}

Sequence::Sequence(const Sequence &other)
    : data(new int[other.length]), length(other.length) {
    std::copy(other.data, other.data + length, data);
}

Sequence::~Sequence() {
    delete[] data;
}

int Sequence::getValueAt(int index) const {
    return data[index];
}

void Sequence::setValueAt(int index, int value) {
    data[index] = value;
}

int Sequence::getLength() const {
    return length;
}

void Sequence::setLength(int length) {
    delete[] data;
    data = new int[length];
    this->length = length;
}

int Sequence::sum() const {
    return std::accumulate(data, data + length, 0);
}

int Sequence::min() const {
    return *std::min_element(data, data + length);
}

int Sequence::max() const {
    return *std::max_element(data, data + length);
}

double Sequence::average() const {
    return 1.0 * sum() / length;
}
