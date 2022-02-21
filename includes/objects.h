/*
** EPITECH PROJECT, 2021
** real-engine
** File description:
** objects.h
*/

#ifndef _OBJECTS_H_
    #define _OBJECTS_H_
    #include <SFML/Graphics.h>

// objects
struct object_s {
    sfSprite *sprite;
    sfTexture *Texture;
    sfFloatRect rect;
    sfTime t_anim;
    sfTime t_physics;
    struct fcts {
        void *(*builder)(struct object_s *obj, void *);
        void *(*update)(struct object_s *obj, void *);
        void *(*destroy)(struct object_s *obj, void *);
    };
};

struct scene_s {
    sfWindow *win;
    struct object_s *objs;
};



#endif