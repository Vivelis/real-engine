/*
** EPITECH PROJECT, 2021
** starter-c
** File description:
** manage_scenes.c
*/

#include "objects.h"

int create_scene(struct scene_s *scene)
{
    build_objs(scene->objs);
    return 0;
}

int update_scene(struct scene_s *scene)
{
    update_objs(scene->objs);
    return 0;
}
