#include "Game.h"

int main() {
    srand(time(nullptr));

    // HeavyHero* heavy_hero = new HeavyHero{};
    // Hero* hero = new Hero{};
    //
    // heavy_hero = new ShieldDecorator(heavy_hero);
    // heavy_hero = new HorseDecorator(heavy_hero);
    // heavy_hero = heavy_hero->RemoveBuff("Horse");

    // heavy_hero = AppendBuffToHeavyHero(heavy_hero);
//    hero->PerformAttack(heavy_hero);
    // std::cout << "==========================" << std::endl;
    // hero->PerformAttack(heavy_hero);

    Game game{};
    game.Run();
    return 0;
}