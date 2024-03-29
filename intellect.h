#ifndef INTELLECT_H_INCLUDED
#define INTELLECT_H_INCLUDED

    #include "all_includes.h"
    #include "basic_classes.h"
    #include "global_vars.h"
    #include "loading_game.h"
    #include "controller.h"

    void do_intellectual_move(int);
    bool canGo(int, int, int);
    bool do_intellectual_move_with_general(int);
    bool do_intellectual_move_with_general_from_file(int);
    int priority(int, int, int);
    extern vector<General*> vecans;
    pii getBestCell(int);
    pii getAlmostBestCell(int);
    int dst(int,int,int,int);
    double priority_for_third(int x, int y, int color);

#endif // INTELLECT_H_INCLUDED
