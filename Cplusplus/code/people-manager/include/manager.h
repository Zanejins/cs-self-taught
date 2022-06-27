#include "worker.h"

class Manager: public Worker {
public:
    Manager(int id,string names,int did);
    void showInfo();
    string getDeptName();
};