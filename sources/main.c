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
    window_manager_t *window_manager = NULL;

    if (errorh != 0)
        return errorh;
    // awake => before game start
    window_manager = awake(curr_scene, window_manager);
    // start => all is ready, game start
    errorh = start(curr_scene, window_manager);
    // main_loop => loop for the whole game
    errorh = main_loop(curr_scene, window_manager);
    sfRenderWindow_destroy(window_manager->rwin);
    return errorh;
}
