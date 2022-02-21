/*
** EPITECH PROJECT, 2021
** real-engine
** File description:
** obj_ori.h
*/

#ifndef _OBJ_ORI_H_
    #define _OBJ_ORI_H_
    #define FPS 60
    #include <SFML/Graphics.h>

// types
typedef struct {
    sfRectangleShape *rect_sh;
    sfTime start_time;
    sfVector2f start_pos;
    sfVector2f arrival_pos;
}plane_t;

typedef struct {
    sfCircleShape *circle_sh;
}tower_t;


// objects
typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfFloatRect anim_rect;
    sfTime t_anim;
    sfTime t_physics;
    sfVector2f move_rect;
    struct object_fcts {
        void *(*builder)(struct object_s *obj, void *);
        void *(*update)(struct object_s *obj, void *);
        void *(*destroy)(struct object_s *obj, void *);
    }fcts;
    union {
        plane_t plane;
        tower_t tower;
    }obj_data;
}object_t;

typedef struct {
    sfRenderWindow *rwin;
    sfVideoMode vmode;
}window_manager_t;

typedef struct {
    object_t *obj_array;
    object_t *ui_array;
}scene_t;

// manage_objects.c
object_t *create_plane(void);

// manage_scenes.c
int create_scene(char *path);

// manage_window.c
sfRenderWindow *init_window(const sfVideoMode vmode, const char *wname);

#endif