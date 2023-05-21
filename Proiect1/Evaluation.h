#include <vector>
#include <algorithm>
#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Evaluation 
{
public:
    
    Evaluation(vector <T>& objects);

    vector<T>& getSortedObjects();
    
    double getAverageNumberOfTasks();

private:
    vector<T> _objects; 
};

