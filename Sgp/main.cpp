#include <iostream>
#include <fstream>
#include <cstring>
#include <ctime>
#include <cstdlib>
using namespace std;
void heart(){
    cout << R"(
      ()              ()
    ((  ))          ((  ))
  ((      ))      ((      ))
((          ))  ((          ))
((            )(            ))
  ((                      ))
    ((                  ))
      ((              ))
        ((          ))
          ((      ))
            ((  ))
              ())" << endl;
}
void attack(){
    cout << R"(
                           $ $ $
                         .%    $
                       .%     .$
                     .%     .%
                   .%     .%
                 .%     .%
               .%     .%
             .%     .%
           .%     .%
         .%     .%
 ,',   .%     .%
',  ',%     .%
  ',      .%
  ,'    ,%
.'    ,  ',
',  ,' ', ,'
  ''     ')" << endl;
}
void miss(){
    cout << R"(

                   .%
                 .%| '%
               .%  |  '%
             .%    |   '%
           .%     .%    '%
         .%     .%  '%   '%
 ,',   .%     .%      '%  \$
',  ',%     .%          '%/$
  ',      .%
  ,'    ,%
.'    ,  ',
',  ,' ', ,'
  ''     ')" << endl;
}
void types(int i){
    if(i == 0){
        cout << R"(

      ______
 |   // ___\\__
 |   || |  ___|
 |   || |_____|   ,^^^,
 |     /|    /\  /  |  \
 |    //|    |\\/   |   \
<=>  // |    | ',-------,'
(Oo)/;  | __ |   \  |  /
 *      ||  ||    \_|_/
        ||  ||
        ||_ ||_
        |__>|__>)" << endl;
    } else if(i == 1){
        cout << R"(
                  /&\
    /*\      /\  /&&&)
   /   \    (&&\/&&&&)
  /     \   (&&&&&&&/
 /       \   \&&&&&/
/_________\    ~
   |  77|    <(0)>
   |  />)\  <((0))>
  /  /    \___| |
  | /______\__| |]
  |  ||    |  | |
  |  ||    |  | |
  |  %%    |  | |
  |________|  |_|)" << endl;
    } else if(i == 2){
        cout << R"(
   _||_     _
  | 1 1|   (_)
  | /n\|   (_)
 ,'/___\___| |
/  ||   ___| |]
|  ||   |  | |
|  OO   |  | |
|   __  |  | |
 | |  | |  | |
 | |  | |  |_|
 | \  | \
 |__} |__})" << endl;
    }
}
void enemies(int i){
    if(i == 0){
        cout << R"(
           ________
          /        \
      ^\(( (@)  (@) ))/^
          (   ;;   )
           ( (AA) )
            (____)
         ____|  |____
        /   !!  !!   \
       /  | !!  !! |  \
,^,   /  /| !!  !! |\  \
$ $  /  / | !!  !! | \  \
 $ $ ! /  | !!  !! |  \  \,
 _$_$_!   | !!  !! |  | ,&,|
  (Oo)    |***()***|  O(&&&)
  ****    |********|(&&&&&&&&&&)
          |   ||   |(&&&&&&&&&&(@)
          |   ||   |(&&&&&&&&&&) (@)
          |   ||   |(&&&&&&&&&&)
          |   ||   | **********    (@)
          |   ||   |
         /,^^,||,^^,\
         |____||____|              (@)(@) (@))" << endl;
    } else if(i == 1){
        cout << R"(
          ,---------,
         {          }
         {0\    /0  }
         {           }
 ________{   (  )     }________
{                              }
{__                          __}
   {                        }
  {__                      }
     {__                  }______
      __{                        }
     {                          }
      {                    ,,,  },,,}
       (,,  ,,''',,,'',   }   ',,,,'
          ''           ''')" << endl;
    } else if(i == 2){
        cout << R"(
          ________
     _____|######|_____
     \    | 0  0 |    /
      \   |  ;;  |   /
       \  | VwwV |  /
  ______\  \____/  /______
,'      ''''''''|]        ',
|               |],        |
|               /  \       |
|              /    \      |
|             /   |\ \     |
|            /    | \ \    |
|           /     |  \ \   |
|          /______| <;  \  |
|         /__[]___|   }}}  |
|        /   /\   |        |
|       /|  |  |  |        |
|      / |  |  |  |        |
|     /  |  |  |  |        |
|    /   |  |  |  |        |
|   /    |  |  |  |        |
|  /     |  |  |  |        |
| /      |  |  |  |        |
|/      / [] \/ [] \       |
|_______|____||____|_______|)" << endl;
    } else if(i == 3){
        cout << R"(
                 _|_|_|_
               ,'       ',
               | [O] [O] |
               |   | |   |
               |  (,_,)  |
    ,~~~~~~~~~,|  #####  |,~~~~~~~~~,
    (            #[___]#            )
   (             #######             )
  (       _       #####       _       )
 (       )/********###********\(       )
(       )/          !          \(       )
(      )|     0     !     0     |(      )
(     )  \         ,!,         /  (     )
 (   )    \______,'   ',______/    (   )
(    )    (    (   )|(   )    )    (    )
(    )    (    (___)|(___)    )    (    )
(    )    (    (   )|(   )    )    (    )
(    )    (    (___)|(___)    )    (    )
(    )    (    (   )|(   )    )    (    )
(   )     (    (___)|(___)    )     (   )
 | |      (                   )      | |
/   \__   (___________________)   __/   \
|||||__|  (--------[&]--------)  |__|||||
|||||    (                     )    |||||
         (                     )
        (          ___          )
        (          ) (          )
       (          )   (          )
       (          )   (          )
       (          )   (          )
        (________)     (________)
        (       )       (       )
         (     )         (     )
         (     )         (     )
        (       )       (       )
        (       )       (       )
        (       )       (       )
         (     )         (     )
         (     )         (     )
        /       ',     ,'       \
       /_ _ _ _ __;   ;__ _ _ _ _\
       |_|_|_|_|__|   |__|_|_|_|_|)" << endl;
    } else if(i == 4){
        cout << R"(
        ____________________
       //-----------------( \        /\_ _/\
      //                 // \\      /  __ __\
     //                 //   \\    /   () () \____u_
    //                 //   ()\\__/  /VVVVVVVVVVVVVV|
   ( )                //   ()        |
    \\                \\  ()      _  \AAAAAAAAAAAAAA|
     \\                \\|       | ',.____.>--------'
      \\                \|       |         ______
       \\                /       |\\      //  }}}
        \\   ____       /       )  \',__,'/
\',      \\,'    ',____/       )\\  ' -- '_____
 \ ',     /        \__/       )  \',___,'/  }}}
  \  ',__/   ,'',            )    ' -- '
   \        /    \          /
    ',____,'      ',______,')" << endl;
    }
}
struct Type
{
    char name[10];
    int health;
    int attack;
    int heal;
    int accuracy;
};

int n, m;
Type type[4], P, enemy[5], E, P1, P2;
const int NMAX = 1000;
void Read()
{
    fstream input;
    input.open("Types.txt", ios::in);
    input >> n;
    for (int i = 0; i < n; i++)
    {
        input >> type[i].name;
        input >> type[i].attack;
        input >> type[i].health;
        input >> type[i].heal;
        input >> type[i].accuracy;
    }
    input >> m;
    for(int i = 0; i < m; i++){
        input >> enemy[i].name;
        input >> enemy[i].attack;
        input >> enemy[i].health;
        input >> enemy[i].heal;
        input >> enemy[i].accuracy;
    }
    input.close();
}

int RandomNumber(){
        srand(time(0));
       return rand()%100;
}
void Game1()
{
    while (P1.health > 0 && P2.health > 0)
    {
        char action[NMAX];
        // Player 1 turn
        int ok = 0;
        while (ok == 0)
        { // Available type
            cout << "\n Player 1 turn: ";
            cin >> action;
            if (strcmp(action, "ATTACK") == 0 || strcmp(action, "HEAL") == 0)
            {
                if (strcmp(action, "ATTACK") == 0)
                {
                    int random = RandomNumber();
                    if(random <= P1.accuracy){
                        P2.health -= P1.attack;
                        attack();
                        cout << "\nPlayer 1 dealt " << P1.attack << " damage to Player 2, he now has " << P2.health << " health"<<endl;
                    } else {
                        miss();
                        cout<<"\nPlayer 1 missed"<<endl;
                    }
                }
                else if (strcmp(action, "HEAL") == 0)
                {
                    P1.health += P1.heal;
                    heart();
                    cout << "\nPlayer 1 healed " << P1.heal << " health, he now has " << P1.health << " health"<<endl;
                }
                ok = 1;
            }
            if (ok == 0)
                cout << "\nThis action is not available" << endl;
        }
        if (P2.health <= 0)
            break;
        // Player 2 turn
        ok = 0;
        while (ok == 0)
        { // Available type
            cout << "\n Player 2 turn: ";
            cin >> action;
            if (strcmp(action, "ATTACK") == 0 || strcmp(action, "HEAL") == 0)
            {
                if (strcmp(action, "ATTACK") == 0)
                {
                    int random = RandomNumber();
                    if(random <= P2.accuracy){
                        P1.health -= P2.attack;
                        attack();
                        cout << "\nPlayer 2 dealt " << P2.attack << " damage to Player 1, he now has " << P1.health << " health"<<endl;
                    } else {
                        miss();
                        cout<<"\nPlayer 2 missed"<<endl;
                    }
                }
                else if (strcmp(action, "HEAL") == 0)
                {
                    P2.health += P2.heal;
                    heart();
                    cout << "\nPlayer 2 healed " << P2.heal << " health, he now has " << P2.health << " health"<<endl;
                }
                ok = 1;
            }
            if (ok == 0)
                cout << "\nThis action is not available" << endl;
        }
    }
}
void Game2()
{
    int i = 0;
    while (P.health > 0 && i < m){
        strcpy(E.name, enemy[i].name);
        E.attack = enemy[i].attack;
        E.health = enemy[i].health;
        E.heal = enemy[i].heal;
        E.accuracy = enemy[i].accuracy;
        enemies(i);
        cout << "You are now fighting the " << E.name << " that has " << E.attack << " attack, " << E.health << " health, " << E.heal << " heal and " << E.accuracy << "% accuracy." << endl;
        while(E.health > 0 && P.health > 0){
            char action[NMAX];
            int ok = 0;
            while (ok == 0)
            { // Available type
                cout << "\nWhat do you want to do?" << endl;
                cin >> action;
                if (strcmp(action, "ATTACK") == 0 || strcmp(action, "HEAL") == 0)
                {
                    if (strcmp(action, "ATTACK") == 0)
                    {
                        int random = RandomNumber();
                        if(random <= P.accuracy){
                            E.health -= P.attack;
                            attack();
                            cout << "\nPlayer dealt " << P.attack << " damage to "<< E.name << ", he now has " << E.health << " health"<<endl;
                        } else {
                            miss();
                            cout<<"\nPlayer missed"<<endl;
                        }
                }
                else if (strcmp(action, "HEAL") == 0)
                {
                    P.health += P.heal;
                    heart();
                    cout << "\nPlayer healed " << P.heal << " health, he now has " << P.health << " health"<<endl;
                }
                ok = 1;
                }
                if (ok == 0)
                    cout << "\nThis action is not available" << endl;
            }
            if (E.health <= 0)
                break;
            int Eaction;
            Eaction = RandomNumber() % 3;
            if(Eaction == 0 || Eaction == 1){
                int random = RandomNumber();
                if(random <= E.accuracy){
                    P.health -= E.attack;
                    attack();
                    cout << "\n" << E.name << " dealt " << E.attack << " damage, you now have " << P.health << " health" << endl;
                } else {
                    miss();
                    cout << E.name << " missed" << endl;
                }
            } else if(Eaction == 2){
                E.health += E.heal;
                heart();
                cout << "\n" << E.name << " healed " << E.heal << " health, he now has " << E.health << " health" << endl;
            }
        }
        if(E.health <= 0){
            cout << "You deafeted the " << E.name << endl;
            cout << "You have gained 10 health and 3 upgrades" << endl;
            cout << "You can upgrade you ATTACK, your HEAL or your ACCURACY" << endl;
            P.health += 10;
            cout << "What do you want to upgrade" << endl;
            int ct = 3;
            char upgrade[10];
            while(ct > 0){
                cin >> upgrade;
                if(strcmp(upgrade, "ATTACK") == 0){
                    P.attack += 4;
                    cout << "You upgraded your ATTACK, it is now " << P.attack << endl;
                    ct--;
                } else if(strcmp(upgrade, "HEAL") == 0){
                    P.heal += 3;
                    cout << "You upgraded your HEAL, it is now " << P.heal << endl;
                    ct--;
                } else if(strcmp(upgrade, "ACCURACY") == 0 && P.accuracy < 100){
                    P.accuracy += 5;
                    cout << "You upgraded your ACCURACY, it is now " << P.accuracy << endl;
                    ct--;
                } else if(strcmp(upgrade, "ACCURACY") == 0 && P.accuracy >= 100)
                    cout << "Your accuracy is already maxed, you can no longer upgrade it" << endl;
                else
                    cout << "This upgrade is not available" << endl;
            }
        }
        i++;
    }
}

int main()
{
    Read();
    char userType[NMAX];
    cout << "Do you want to play SINGLEPLAYER or MULTIPLAYER" << endl;
    int ok = 0;
    while(ok == 0){
        cin >> userType;
        if(strcmp(userType, "SINGLEPLAYER") == 0){
            cout << "\nPlayer Types: " << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << type[i].name << " attack:" << type[i].attack << " health:" << type[i].health << " heal:" << type[i].heal << " accuracy: " << type[i].accuracy << "%"<< endl;
    }
    cout << endl;

    // Asign Player
    int ok = 0;
    while (ok == 0)
    { // Available type
        cout << "Player type: ";
        cin >> userType;
        for (int i = 0; i < n; i++)
        {
            if (strcmp(userType, type[i].name) == 0)
            { // Asign player type
                strcpy(P.name, type[i].name);
                P.attack = type[i].attack;
                P.health = type[i].health;
                P.heal = type[i].heal;
                P.accuracy = type[i].accuracy;
                ok = 1;
                types(i);
                break;
            }
        }
        if (ok == 0)
            cout << "This type is not available" << endl;
    }

    cout << "\nYou can either ATTACK or HEAL" << endl;

    Game2();

    if (P.health <= 0)
        cout << "\n\n You lost!" << endl;
    else
        cout << "\n\n You won!" << endl;
    return 0;
        } else if(strcmp(userType, "MULTIPLAYER") == 0){
            cout << "\nPlayer Types: " << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << type[i].name << " attack:" << type[i].attack << " health:" << type[i].health << " heal:" << type[i].heal << " accuracy: " << type[i].accuracy << "%"<< endl;
    }
    cout << endl;
            // Asign Player 1
    int ok = 0;
    while (ok == 0)
    { // Available type
        cout << "Player 1 type: ";
        cin >> userType;
        for (int i = 0; i < n; i++)
        {
            if (strcmp(userType, type[i].name) == 0)
            { // Asign player type
                strcpy(P1.name, type[i].name);
                P1.attack = type[i].attack;
                P1.health = type[i].health;
                P1.heal = type[i].heal;
                P1.accuracy = type[i].accuracy;
                ok = 1;
                types(i);
                break;
            }
        }
        if (ok == 0)
            cout << "This type is not available" << endl;
    }

    // Asign Player 2
    ok = 0;
    while (ok == 0)
    { // Available type
        cout << "Player 2 type: ";
        cin >> userType;
        for (int i = 0; i < n; i++)
        {
            if (strcmp(userType, type[i].name) == 0)
            { // Asign player type
                strcpy(P2.name, type[i].name);
                P2.attack = type[i].attack;
                P2.health = type[i].health;
                P2.heal = type[i].heal;
                P2.accuracy = type[i].accuracy;
                ok = 1;
                types(i);
                break;
            }
        }
        if (ok == 0)
            cout << "This type is not available" << endl;
    }

    cout << "\nYou can either ATTACK or HEAL";

    Game1();

    if (P1.health <= 0)
        cout << "\n\n Player 2 won!" << endl;
    if (P2.health <= 0)
        cout << "\n\nPlayer 1 won!" << endl;
    return 0;
        } else
            cout << "Unavailable" << endl;

    }
}
