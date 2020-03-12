/*
Different CPU Scheduling Algorithm
/mnt/d/C/cpuSchedule.cpp
Avinal Kumar
February 04, 2020
*/

#include <iostream>
#include <vector>
#include <iomanip>
#include <numeric>
#include <algorithm>

using namespace std;
typedef vector<pair<int, char>> process;

void display(process cpu, vector<int> wait, vector<int> turn, vector<int> arrival)
{
    cout << setw(10) << "Process"
         << setw(16) << "CPU Burst"
         << setw(16) << "Arrival Time"
         << setw(16) << "Waiting Time"
         << setw(16) << "Turnaround Time" << endl;
    for (unsigned int i = 0; i < cpu.size(); i++)
    {
        cout << setw(10) << cpu[i].second
             << setw(16) << cpu[i].first
             << setw(16) << arrival[i]
             << setw(16) << wait[i]
             << setw(16) << turn[i] << endl;
    }

    cout << "Average Waiting time is "
         << accumulate(wait.begin(), wait.end(), 0) / cpu.size()
         << endl;

    cout << "Average Turnaround time is "
         << accumulate(turn.begin(), turn.end(), 0) / cpu.size()
         << endl;
}

/*
First Come First Serve
*/
void FCFS(process cpuBurst)
{
    vector<int> waitTime;
    vector<int> turnAround;

    waitTime.push_back(0);
    turnAround.push_back(cpuBurst.front().first);

    for (unsigned int i = 1; i < cpuBurst.size(); i++)
    {
        waitTime.push_back(waitTime[i - 1] + cpuBurst[i - 1].first);
        turnAround.push_back(turnAround[i - 1] + cpuBurst[i].first);
    }

    int length = cpuBurst.size();
    vector<int> arrival(length, 0);
    display(cpuBurst, waitTime, turnAround, arrival);
}

/*
Shortest Job First Non-Preemptive
*/
void SJFNON(process cpuBurst)
{
    cout << "Enter arrival time for each process:" << endl;
    vector<int> arrival;
    int aTime;
    for (unsigned int i = 0; i < cpuBurst.size(); i++)
    {
        cin >> aTime;
        arrival.push_back(aTime);
    }
    vector<int> waitTime;
    vector<int> turnAround;

    waitTime.push_back(0);
    turnAround.push_back(cpuBurst.front().first);

    for (unsigned int i = 1; i < cpuBurst.size(); i++)
    {
        waitTime.push_back(waitTime[i - 1] + cpuBurst[i - 1].first);
        turnAround.push_back(turnAround[i - 1] + cpuBurst[i].first);
    }

    for (unsigned int i = 0; i < cpuBurst.size(); i++)
    {
        waitTime[i] -= arrival[i];
        turnAround[i] -= arrival[i];
    }
    display(cpuBurst, waitTime, turnAround, arrival);
}

/*
Shortest Job First Preemptive
*/
void SJFPRE(process cpuBurst)
{
    cout << "Enter Arrival Time for each process" << endl;
    vector<int> arrival;
    int input;
    for (unsigned int i = 0; i < cpuBurst.size(); i++)
    {
        cin >> input;
        arrival.push_back(input);
    }
    
}

/*
Priority Scheduling
*/
void PS(process cpuBurst)
{
    cout << "Enter priority for the processes" << endl;
    vector<int> priority;
    int input;
    for (unsigned int i = 0; i < cpuBurst.size(); i++)
    {
        cin >> input;
        priority.push_back(input);
    }
}


/*
Round Robin
*/
void RR(process cpuBurst)
{
    cout << "Enter Quantum Time" << endl;
    int quantum;
    cin >> quantum;

    int maxIndex = max_element(cpuBurst.begin(), cpuBurst.end()) - cpuBurst.begin();

    cout << "The sequence of CPU Sceduling is :" << endl;
    vector<int> waitTime(0, cpuBurst.size());
    string processSequence = "";
    while (cpuBurst[maxIndex].first > 0)
    {
        for_each(cpuBurst.begin(), cpuBurst.end(),
                 [&](pair<int, char> &element) {
                     if (element.first > 0)
                     {
                         element.first -= quantum;
                         processSequence += element.second;
                     }
                 });
    }
    cout << processSequence;
    vector<int> turnaround(cpuBurst.size(), 0);
    vector<int> arrival(cpuBurst.size(), 0);
    display(cpuBurst, waitTime, turnaround, arrival);
}

int main(int argc, char const *argv[])
{
    process cpuBurst;
    int burst;
    char name = 'A';
    cout << "Enter the cpu burst time: enter -1 to stop" << endl;
    do
    {
        cin >> burst;
        cpuBurst.emplace_back(burst, name);
        name++;
    } while (cpuBurst.back().first != -1);
    cpuBurst.resize(cpuBurst.size() - 1);

    FCFS(cpuBurst);
    SJFNON(cpuBurst);
    RR(cpuBurst);
    return 0;
}
