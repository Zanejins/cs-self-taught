#include<iostream>
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

using namespace std;


int main() {
    Worker* worker = NULL;
    worker= new Employee(1,"张山",1);
    worker->showInfo();
    delete worker;

    worker= new Manager(2,"李四",2);
    worker->showInfo();
    delete worker;

    worker= new Boss(3,"王五",3);
    worker->showInfo();
    delete worker;


    

    /* WorkerManager wm;
    while(true) {
        wm.Show_Menu();
        int choice;
        cout<<"请输入您的选择"<<endl;
        cin>>choice;
        switch(choice) {
            case 0:
                wm.exitsystem();
                break;
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
        }
    } */
    return 0;
}