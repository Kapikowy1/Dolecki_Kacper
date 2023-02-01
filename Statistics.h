#ifndef STATISTICS_H
#define STATISTICS_H

#include "Sequence.h"

class Statistics {
public:
    Statistics();
    Statistics(const Statistics &other);
    ~Statistics();

    void addSequence(const Sequence &seq);
    int getCount() const;

    int sum() const;
    int min() const;
    int max() const;
    double average() const;

private:
    Sequence *data;
    int count;
};

#endif
