#include <cstdlib>
#include <ctime>
using namespace std;
class Dice{
private:
int _random;

void seedRandom(){
    static bool seeded = false;
    if(!seeded){
        srand(time(NULL));
    }
}
public:
Dice(int random){
_random = random;
seedRandom();
}

int roll(){
int result = rand()%_random+1;

return result;
}



};

