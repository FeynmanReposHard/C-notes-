/* Create two struct values and access their members.
 * Based on: Structures(1).pdf, page(s) 4-5.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

struct Pokemon {
    int hp,speed,attack;
};
int main(void) {
    struct Pokemon pikachu={50,100,60};
    struct Pokemon charizard={80,80,130};
    printf("Pikachu attack: %d\nCharizard attack: %d\n",
           pikachu.attack,charizard.attack);
    return 0;
}
