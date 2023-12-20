#include <iostream>
#include <algorithm>
using namespace std;

// Structure representing a workshop
struct Workshop {
    int start_time, duration, end_time;
};

// Structure representing available workshops
struct Available_Workshops {
    int n;
    Workshop* workshops;
};

// Function to initialize the Available_Workshops structure
Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* aw = new Available_Workshops{n, new Workshop[n]};
    for (int i = 0; i < n; ++i)
        aw->workshops[i] = {start_time[i], duration[i], start_time[i] + duration[i]};
    return aw;
}

// Function to calculate the maximum number of workshops
int CalculateMaxWorkshops(Available_Workshops* ptr) {
    sort(ptr->workshops, ptr->workshops + ptr->n, [](const Workshop& a, const Workshop& b) { return a.end_time < b.end_time; });
    int maxWorkshops = 0, lastEndTime = 0;
    for (int i = 0; i < ptr->n; ++i)
        if (ptr->workshops[i].start_time >= lastEndTime) ++maxWorkshops, lastEndTime = ptr->workshops[i].end_time;
    return maxWorkshops;
}

int main() {
    // Example usage
    int start_time[] = {1, 3, 0, 5, 8, 5};
    int duration[] = {2, 2, 1, 2, 1, 2};
    int n = sizeof(start_time) / sizeof(start_time[0]);

    Available_Workshops* workshops = initialize(start_time, duration, n);

    cout << "Maximum Workshops: " << CalculateMaxWorkshops(workshops) << endl;

    // Clean up memory
    delete[] workshops->workshops;
    delete workshops;

    return 0;
}

/*'A student signed up for  workshops and wants to attend the maximum number of workshops where no two workshops overlap. You must do the following: Implement 2  structures: 1.struct Workshop having the following members: oThe workshop\'s start time. oThe workshop\'s duration. oThe workshop\'s end time. 2.struct Available_Workshops having the following members: a.An integer,  n (the number of workshops the student signed up for). b.An array of type Workshop array having size n. Implement  2  functions: 1.Available_Workshops* initialize (int start_time[], int duration[], int n) 2.int CalculateMaxWorkshops(Available_Workshops* ptr)'*/
/*Explanation:

The Workshop structure represents a workshop with start time, duration, and end time.

The Available_Workshops structure contains the number of workshops (n) and an array of workshops.

The initialize function creates an Available_Workshops structure and initializes its workshops based on the input arrays.

The CalculateMaxWorkshops function sorts the workshops based on end time and calculates the maximum number of workshops a student can attend without overlapping.

The main function demonstrates the usage by initializing workshops, calculating and printing the maximum number of workshops, and cleaning up memory.*/
