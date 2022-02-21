/*
** EPITECH PROJECT, 2021
** real-engine
** File description:
** manage_objects.c
*/

#include "objects.h"
#include <stddef.h>

struct object_s *create_plane(void)
{
    struct object_s *plane = NULL;
    unsigned int width = 10;
    unsigned int height = 10;

    plane = malloc(sizeof(struct object_s));
    if (plane == NULL)
        return NULL;
    plane->sprite = sfSprite_create();
    plane->sprite = sfTexture_create(width, height);
    plane->rect.width = width;
    plane->rect.height = height;
    plane->rect.left = 0;
    plane->rect.top = 0;
}
