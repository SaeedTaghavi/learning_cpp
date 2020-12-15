#ifndef __TIMER_H__
#define __TIMER_H__

#include <iostream>
#include <chrono>

class timer {
   public:
        std::chrono::time_point<std::chrono::steady_clock> start_time;
        std::chrono::time_point<std::chrono::steady_clock> stop_time;
        std::chrono::duration<double> calc_duration();
        void start();
        void stop();
        void print_duration();
};

#endif