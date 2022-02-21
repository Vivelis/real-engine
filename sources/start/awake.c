/*
** EPITECH PROJECT, 2021
** real-engine
** File description:
** awake.c
*/

#include "obj_ori.h"

// awake => before game start
sfRenderWindow *awake(scene_t *g_manager)
{
    sfRenderWindow *wdow = NULL;
    sfVideoMode vmode = {800, 600, 32};
    const char *wname = "My_defender";

    wdow = init_window(vmode, wname);
    if (wdow == NULL)
        my_puterror("real-engine:init_window", 84);
    return wdow;
}
