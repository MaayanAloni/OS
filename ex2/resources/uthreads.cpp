//
// Created by Omri Or on 16/04/2023.
//
#include <map>
#include <set>
#include "uthreads.h"

enum State{RUNNING=0, READY=1, BLOCKED=2};

enum ERROR_INDEX{ERROR_1,ERROR_2,ERROR_3,ERROR_4,ERROR_5,
		ERROR_6,ERROR_7,ERROR_8,NUM_ERRORS};

const char* const LIBRARY_ERROR[NUM_ERRORS] = {
		"thread library error: quantum_usecs input to uthread_init is negative \n",
		"thread library error: division by 0 \n",
		"thread library error: maayan is beautiful \n",
		"thread library error: but omri is more \n",
		"system error: 1\n",
		"system error: 2\n",
		"system error: 3\n",
		"system error: 4\n"
};


//struct Thread{
//    // Constructor
//    Thread(int pid, State state, thread_entry_point entryPoint){
//        this->pid = pid;
//        this->state = state;
//        this->entryPoint = entryPoint;
//    }
//
//    // Fields:
//    private:
//        int pid = -1;
//        State state;
//        thread_entry_point entryPoint = nullptr;
//};


struct Thread{
	int pid = -1;
	State state = -1;
	thread_entry_point entryPoint = nullptr;
};


// ordered map (bst) of threads by keys
std::orderedset<int> FREE_TID;
std::map<int, Thread> CURR_TID;

/**
 * @brief initializes the thread library.
 *
 * Once this function returns, the main thread (tid == 0) will be set as RUNNING. There is no need to
 * provide an entry_point or to create a stack for the main thread - it will be using the "regular" stack and PC.
 * You may assume that this function is called before any other thread library function, and that it is called
 * exactly once.
 * The input to the function is the length of a quantum in micro-seconds.
 * It is an error to call this function with non-positive quantum_usecs.
 *
 * @return On success, return 0. On failure, return -1.
*/
int uthread_init(int quantum_usecs){
    if (quantum_usecs <= 0) {
    	stderr::out << LIBRARY_ERROR[ERROR_1];
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