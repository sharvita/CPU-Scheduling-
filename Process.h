//
//  Process.h
//  OSLab3
//
//  Created by Sharvita Paithankar on 5/6/19.
//  Copyright © 2019 Sharvita Paithankar. All rights reserved.
//


#ifndef Process_h
#define Process_h

class Process{
private:
    int PID;
    int CPUTime;
    int arrivalTime;
    int priority;
    long waitTime;
    long turnaroundTime;
    int numOfContextSwitching;
    int timeOfCompletion;
public:
    Process(){PID = 0; CPUTime = 0; arrivalTime = 0; priority = 0; waitTime = 0; turnaroundTime = 0; numOfContextSwitching = 0; timeOfCompletion = 0;};
    void setPID(int _PID){PID = _PID;};
    void setCPUTime(int _CPUTime){CPUTime = _CPUTime;};
    void setArrivalTime(int _ArrivalTime){arrivalTime = _ArrivalTime;};
    void setPriority(int _Priority){priority = _Priority;};
    void addWaitTime(double time){waitTime += time;};
    void addTurnaroundTime(double time){turnaroundTime += time;};
    void incNumOfContextSwitching(){++numOfContextSwitching;};
    void setTimeOfCompletion(int _timeOfCompletion){timeOfCompletion = _timeOfCompletion;};
    int getPID() const {return PID;};
    int getCPUTime() const {return CPUTime;};
    int getArrivalTime() const {return arrivalTime;};
    int getPriority() const {return priority;};
    long getWaitTime() const {return waitTime;};
    long getTurnaroundTime() const {return turnaroundTime;};
    int getNumOfContextSwitching() const {return numOfContextSwitching;};
    int getTimeOfCompletion() const {return timeOfCompletion;};
    void operator=(Process p);
};


void Process::operator=(Process p){
    PID = p.getPID();
    CPUTime = p.getCPUTime();
    arrivalTime = p.getArrivalTime();
    priority = p.getPriority();
    waitTime = p.getWaitTime();
    turnaroundTime = p.getTurnaroundTime();
    numOfContextSwitching = p.getNumOfContextSwitching();
}

bool operator<(const Process &p1, const Process &p2){
    return p1.getCPUTime() > p2.getCPUTime();
};

#endif /* Process_h */
