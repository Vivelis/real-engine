/*
** EPITECH PROJECT, 2021
** real-engine
** File description:
** manage_window.c
*/

#include <stdlib.h>
#include "obj_ori.h"

sfRenderWindow *init_window(sfVideoMode w_mode, const char *w_name)
{
    sfRenderWindow *window = NULL;

    window = sfRenderWindow_create(w_mode, w_name, sfClose | sfResize, NULL);
    if (!window)
        return NULL;
    sfRenderWindow_setFramerateLimit(window, 120);
    return window;
}
