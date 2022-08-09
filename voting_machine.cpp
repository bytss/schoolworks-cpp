/*
 No. 12 | Programming 1 Finals
 */

#include <iostream>

using namespace std;

int main()
{
    int candidates = 3, totalVotes = 0;
    string candidateName[candidates] = {};
    int candidatesVotes[candidates] = {};
    bool swapped;

    // store data
    for(int i = 0; i < candidates; i++){
        // store candidate name
        cout << "Enter Candidates Name: ";
        cin >> candidateName[i];

        // store candidate votes
        cout << "Enter his/her Total Votes: ";
        cin >> candidatesVotes[i];

        // sum all of the candidate votes
        totalVotes += candidatesVotes[i];
    }

    // bubble sorting
    for(int j = 0; j < candidates; j++){
        swapped = false;

        // check the value if is higher or lower
        for(int k = 0; k < candidates - j; k++){
            if(candidatesVotes[k] > candidatesVotes[k + 1]){
                swap(candidatesVotes[k], candidatesVotes[k + 1]);
                swap(candidateName[k], candidateName[k + 1]);
                swapped = true;
            }
        }

        if(!swapped)
            break;
    }

    // display
    for(int l = candidates; l > 0; l--)
        cout << candidateName[l] << " : " << candidatesVotes[l] << endl;

    // display total votes
    cout << "Total Votes: " << totalVotes << endl;

    return 0;
}