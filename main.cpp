#include <iostream>
using namespace std;

int main(){

    int die1, die2, die3, counter = 0, rollCounter = 0;

    srand(time(NULL)); // seeding the random number generator
    do
    {
        die1 = rand() % 6+1;
        die2 = rand() % 6+1;
        die3 = rand() % 6+1;

        if(die1 == die2 && die1 == die3){
            counter++;
        }else{
            counter = 0;
        }

        rollCounter++;

    } while (counter != 2);

    cout<<"Two consecutive rolls in which all 3 dice showed the same number happened after "<<rollCounter<< " rolls"<<endl;
    system("pause>0");
    return 0;
    
}