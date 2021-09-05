//
// Created by francesco on 05/09/21.
//

#ifndef LABPROG_SUBJECT_H

class Subject {
public:
    virtual ~Subject() {}
    virtual void notify() = 0;
    virtual void addObserver(Observer* o) = 0;
    virtual void removeObserver(Observer* o) = 0;
};

#define LABPROG_SUBJECT_H

#endif //LABPROG_SUBJECT_H
