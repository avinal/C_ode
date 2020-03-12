/*
D:\C\diskMgmt.cpp
Avinal Kumar
January 21, 2020
Disk management algorithms
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <functional>
#include <string>

const int LAST = 199;

/*
First Come First Served
*/
int FCFS(std::vector<int> request)
{
    int traverse = 0;
    int first = request.front(), interchange = 1;
    for (int i = 0; i < request.size(); i++)
    {
        if (request[i] > interchange * request[i + 1])
        {
            traverse += abs(request[i] - first);
            first = request[i];
            interchange *= -1;
        }
    }
    return traverse;
}

/*
Shortest Seek Time First
*/
int SSTF(std::vector<int> request)
{
    std::sort(request.begin(), request.end());
    for (int x : request)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return request.back() - request.front();
}

/*
Disk Scan 
*/
int SCAN(std::vector<int> request)
{
    int traverse = LAST - request[0];
    int interchange = 1;
    for (int i = 1; i < request.size() - 2; i++)
    {
        if (request[i] > interchange * request[i + 1])
        {
            traverse += 199;
            interchange *= -1;
        }
    }
    traverse += request.back();
    return traverse;
}

/*
Circular Scan
*/
int CSCAN(std::vector<int> request)
{

    int traverse = LAST - request[0];
    int i;
    for (i = 1; i < request.size() - 2; i++)
    {
        if (request[i] < request[i + 1])
        {
            traverse += 199;
        }
    }
    traverse += request.back();
    return traverse;
}

/*
Function Map for calling function by name
*/
std::map<std::string, std::function<int(std::vector<int>)>> algoMap =
    {{"fcfs", FCFS},
     {"sstf", SSTF},
     {"scan", SCAN},
     {"cscan", CSCAN}};

int main(int argc, char const *argv[])
{
    std::cout << "Enter the algo name followed by no. of request and requests(MAX=199)" << std::endl;
    std::cout << "Eg. sstf 20 30 41" << std::endl;
    std::string algo;
    int number, query;
    std::vector<int> requests;
    std::cin >> algo;
    std::cin >> number;
    for (int i = 0; i < number; i++)
    {
        std::cin >> query;
        requests.push_back(query);
    }

    std::cout << "Number of cylinder traversed is = "
              << algoMap[algo](requests) << std::endl;
    return 0;
}
