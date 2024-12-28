#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Player {
public:
    string name;
    int score;

    Player(string name, int score) : name(name), score(score) {}
};

class Checker {
public:

    bool operator() (const Player& a, const Player& b) const {
        if (a.score != b.score) {
            return a.score > b.score;
        }
        return a.name < b.name;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Player> players;


    for (int i = 0; i < n; i++) {
        string name;
        int score;
        cin >> name >> score;
        players.push_back(Player(name, score));
    }


    sort(players.begin(), players.end(), Checker());


    for (const Player &player : players) {
        cout << player.name << " " << player.score << endl;
    }

    return 0;
}
