#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

// Target string
const string TARGET = "methinks it is like a weasel";

// Function to generate a random string of length 28
string generate_random_string() {
    const string CHARACTERS = "abcdefghijklmnopqrstuvwxyz ";
    string random_string;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, CHARACTERS.size() - 1);

    for (int i = 0; i < TARGET.size(); i++) {
        random_string += CHARACTERS[dis(gen)];
    }
    return random_string;
}

// Function to score the similarity of two strings
double score_string(const string &generated, const string &target) {
    int match_count = 0;
    for (size_t i = 0; i < target.size(); i++) {
        if (generated[i] == target[i]) {
            match_count++;
        }
    }
    return (double)match_count / target.size();
}

// Function to simulate the infinite monkey algorithm
void infinite_monkey() {
    string best_string = generate_random_string();
    double best_score = score_string(best_string, TARGET);
    int iterations = 0;

    // Random generator setup for hill climbing
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, TARGET.size() - 1);
    const string CHARACTERS = "abcdefghijklmnopqrstuvwxyz ";

    while (best_score < 1.0) {
        string new_string = best_string;

        // Modify one character at random
        int random_index = dis(gen);
        new_string[random_index] = CHARACTERS[dis(gen)];

        // Score the new string
        double new_score = score_string(new_string, TARGET);

        // Keep the new string if it improves the score
        if (new_score > best_score) {
            best_string = new_string;
            best_score = new_score;
        }

        // Print progress every 1000 iterations
        iterations++;
        if (iterations % 1000 == 0) {
            cout << "Iteration " << iterations
                 << ": Best string so far: \"" << best_string
                 << "\" with score: " << best_score * 100 << "%" << endl;
        }
    }

    // Final output
    cout << "\nTarget string matched after " << iterations << " iterations!" << endl;
    cout << "Final string: \"" << best_string << "\"" << endl;
}

int main() {
    infinite_monkey();
    return 0;
}
