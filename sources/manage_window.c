/*
** EPITECH PROJECT, 2021
** real-engine
** File description:
** manage_window.c
*/

#include "obj_ori.h"

window_manager_t *init_window(const sfVideoMode vmode, const char *wname)
{
    window_manager_t *w_manager = NULL;

    w_manager = malloc(sizeof(window_manager_t));
    if (w_manager == NULL)
        return NULL;
    w_manager->vmode = vmode;
    w_manager->rwin = sfRenderWindow_create(vmode, wname, sfClose | sfResize, NULL);
    sfRenderWindow_setFramerateLimit(w_manager->rwin, FPS);
    return w_manager;
}
