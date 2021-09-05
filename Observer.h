//
// Created by francesco on 05/09/21.
//

#ifndef LABPROG_OBSERVER_H

class Observer {
public:
    virtual ~Observer() {}
    virtual	void update() = 0;
};

#define LABPROG_OBSERVER_H

#endif //LABPROG_OBSERVER_H
