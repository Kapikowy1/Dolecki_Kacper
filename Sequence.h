#ifndef SEQUENCE_H
#define SEQUENCE_H

class Sequence {
public:
    Sequence();
    Sequence(const Sequence &other);
    ~Sequence();

    int getValueAt(int index) const;
    void setValueAt(int index, int value);

    int getLength() const;
    void setLength(int length);

    int sum() const;
    int min() const;
    int max() const;
    double average() const;

private:
    int *data;
    int length;
};

#endif
