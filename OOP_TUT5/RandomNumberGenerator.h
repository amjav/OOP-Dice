#pragma once
#include <time.h>
class RandomNumberGenerator
{
    public:
        // constructors
        RandomNumberGenerator();

        // assessors
        int GetRandomValue(int) const;

    private:
        // supporting functions
        void Seed();
};

