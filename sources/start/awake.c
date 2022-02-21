/*
** EPITECH PROJECT, 2021
** real-engine
** File description:
** awake.c
*/

#include "obj_ori.h"

// awake => before game start
window_manager_t *awake(scene_t *g_manager)
{
    window_manager_t *w_manager = NULL;
    sfVideoMode vmode = {800, 600, 32};
    const char *wname = "My_defender";

    w_manager = init_window(vmode, wname);
    return w_manager;
}
