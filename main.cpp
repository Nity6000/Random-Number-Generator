#include <iostream>
#include <random>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    // implementation using random.h for random numbers to print
    std::random_device seed;
    std::mt19937 gen(seed());
    std::uniform_int_distribution<int> dist
    // The range of the number (MIN, MAX)
    (0, 999);

    // implementation using rand() for number of times to print
    srand(time(NULL));
    int numberOfTimes = rand() %
    // Number of times range, 1000 is exclusive
    1000;

    // Prints stuff on the console
    for (int i = 0; i < numberOfTimes; i++)
    {
        int random = dist(gen);
        cout << random << endl;
    }

    cout << "Random number printed " << numberOfTimes << " time(s) which was a random number\n" <<
            "Run program again for a different number\n";

    return 0;
}
