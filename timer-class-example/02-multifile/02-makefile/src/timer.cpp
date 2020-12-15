#include "../include/timer.h"
//member function definitions

void timer::start()
{
    start_time = std::chrono::steady_clock::now();
}

void timer::stop()
{
    stop_time = std::chrono::steady_clock::now();
}

void timer::print_duration()
{
    std::cout<<"duration is: "<< calc_duration().count()<<std::endl;
}

std::chrono::duration<double> timer::calc_duration()
{
    return stop_time-start_time;
}
