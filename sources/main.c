/*
** EPITECH PROJECT, 2021
** starter-c
** File description:
** main.c
*/

#include "objects.h"
#include <stddef.h>

int main(int argc, const char **argv)
{
    int errorh = description_demand(argc, argv);
    struct scene_s *main_scene = NULL;

    if (errorh != 0) {
        return errorh;
    create_scene(main_scene);
    if (main_scene != NULL)
        main_loop(main_scene);
    destroy_scene(main_scene);
    return 0;
}
