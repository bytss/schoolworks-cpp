#include <iostream>

using namespace std;

// sort an array using bubble sorting (function)
void sort(string name[], int votes[], int x) {

    for (int i = 1; i < x; i++) {
        bool swapped = false;

        for (int j = 0; j < x - i; j++) {
            if (votes[j] > votes[j + 1]) {
                swap(votes[j], votes[j + 1]);
                swap(name[j], name[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            return;
        }
    }
}

int sum_votes(int total, int candidate_votes){

    return total += candidate_votes;
}

int main()
{
    int candidates = 15, votes = 0;
    string candidate_name[candidates];
    int candidate_votes[candidates];

    for(int i = 0; i < candidates; i++){

        cout << "Enter the name of candidate no." << i + 1 << ": ";
        cin >> candidate_name[i];

        cout << "Enter his/her total votes received: ";
        cin >> candidate_votes[i];

        votes = sum_votes(votes, candidate_votes[i]);
    }

    sort(candidate_name, candidate_votes, candidates);


    int j = candidates;
    while(j > 0){
        j--;
        cout << "Name: " << candidate_name[j] << " | Votes Received: " << candidate_votes[j] << endl;
    }

    cout << "Total Votes: " << votes << endl;

    return 0;
}
