#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
    string nama;

    Player(const char *nama)
    {
        Player::nama = nama;
        cout << "Player " << Player::nama << " telah dibuat" << endl;
    }

    ~Player()
    {
        cout << "Player " << Player::nama << " telah dihapus" << endl;
    }
};

void membuatStackPlayer(Player *&pointer)
{
    Player playerstack = Player("Ucup");
    pointer = &playerstack;
}

void membuatHeapPlayer(Player *&pointer)
{
    Player *playerHeap = new Player("Dadang");
    pointer = playerHeap;
    delete playerHeap;
}

Player returnStackPlayer()
{
    Player stackPlayer = Player("stack dibuat");
    return stackPlayer;
}

Player *returnHeapPlayer()
{
    Player *heapPlayer;
    heapPlayer = new Player("heap dibuat");
    return heapPlayer;
}
int main(int argc, char const *argv[])
{
    {
    }

    Player *playerPointer1;
    membuatStackPlayer(playerPointer1);
    cout << (*playerPointer1).nama << endl; // segmentation fault

    Player *playerPointer2;
    membuatHeapPlayer(playerPointer2);

    cout << "\nReturn Object" << endl;
    // cout << playerPointer2->nama << endl;
    // playerPointer2->nama = "Acak acakan";
    // cout << playerPointer2->nama << endl;
    Player newStackPlayer = returnStackPlayer();
    Player *newHeapPlayer = returnHeapPlayer();
    cout << newHeapPlayer->nama << endl;
    delete newHeapPlayer;
    return 0;
}
