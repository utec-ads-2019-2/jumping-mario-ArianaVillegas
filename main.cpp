#include <iostream>

using namespace std;

void jumps(unsigned int numwalls){
    unsigned int upper=0;
    unsigned int lower=0;
    unsigned int start, next; cin >> start;
    for (unsigned int i=1; i<numwalls; i++){
        cin >> next;
        if (start < next) upper++;
        else if (start > next) lower++;
        start = next;
    }
    printf("%u %u\n",upper,lower);
}

int main() {
    unsigned int numcases, numwalls;
    cin >> numcases; numcases++;
    for (int i=1; i<numcases; i++){
        cin >> numwalls;
        printf("Case %u: ",i);
        jumps(numwalls);
    }

    return EXIT_SUCCESS;
}

