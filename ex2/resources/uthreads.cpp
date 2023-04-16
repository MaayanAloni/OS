//
// Created by Omri Or on 16/04/2023.
//
#include <map>
#include <set>
#include "uthreads.h"

enum State{RUNNING=0, READY=1, BLOCKED=2};

struct Thread{
    // Constructor
    Thread(int pid, State state, thread_entry_point entryPoint){
        this->pid = pid;
        this->state = state;
        this->entryPoint = entryPoint;
    }

    // Fields:
    private:
        int pid = -1;
        State state;
        thread_entry_point entryPoint = nullptr;
};



// order set
std::set<int> AVAILABLE_THREADS_PID;

// map of threads
std::map<int, Thread> CURRENT_THREADS;




int uthread_init(int quantum_usecs){
    if (quantum_usecs <= 0) {
        return -1;
    }
    return 0;
}
int uthread_spawn(thread_entry_point entry_point){};
int uthread_terminate(int tid){};
int uthread_block(int tid){};
int uthread_resume(int tid){};
int uthread_sleep(int num_quantums){};
int uthread_get_tid(){};
int uthread_get_total_quantums(){};
int uthread_get_quantums(int tid){};