/*
** EPITECH PROJECT, 2021
** starter-c
** File description:
** main.c
*/

#include "obj_ori.h"
#include <stddef.h>

int main(int argc, const char **argv)
{
    int errorh = 0;
    scene_t *curr_scene = NULL;
    sfRenderWindow *wdow = NULL;

    if (errorh != 0)
        return errorh;
    // awake => before game start
    wdow = awake(curr_scene, wdow);
    // start => all is ready, game start
    errorh = start(curr_scene, wdow);
    // main_loop => loop for the whole game
    errorh = main_loop(curr_scene, wdow);
    sfRenderWindow_destroy(wdow);
    return errorh;
}
