#include <random>


int getRandomStep (int maxStep){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(0, maxStep);
    return distrib(gen);
}