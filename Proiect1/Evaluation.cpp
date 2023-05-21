#include "Evaluation.h"
#include <algorithm>
#include <numeric>

template <typename  T>
vector<T>& Evaluation<T>::getSortedObjects()
{
    return _objects;
}

template<typename T>
Evaluation<T>::Evaluation(vector<T>& objects) : _objects(objects)
{
    sort(_objects.begin(), _objects.end(), [](const T& a, const T& b) {
        return (a->get_number_tasks() > b->get_number_tasks());
        });
}

template <typename T>
double Evaluation<T>::getAverageNumberOfTasks() {
    const auto& sortedObjects = getSortedObjects();  

    double sum = std::accumulate(sortedObjects.begin(), sortedObjects.end(), 0.0, [](double acc, const auto& obj) {
        return acc + obj->get_number_tasks();
        });

    return sortedObjects.empty() ? 0 : sum / sortedObjects.size(); 
}




