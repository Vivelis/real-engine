/*
** EPITECH PROJECT, 2021
** real-engine
** File description:
** main_loop.c
*/

#include "obj_ori.h"

// main_loop => loop for the whole game
int main_loop(scene_t *curr_w, window_manager_t *w_manager)
{
    while (sfRenderWindow_isOpen(w_manager->rwin)) {
        sfRenderWindow_clear(w_manager->rwin, sfBlack);
        // // physics
        // // fixed_update => use time for things like movement
        // fixed_update();
        // // collision_update => check collisions
        // collision_update();
        // // trigger_update => check triggers
        // trigger_update();

        // // inputs
        // input_update();

        // // game logic
        // // update => game logic
        // update();
        // // anim_update => manage animations
        // anim_update();
        // // late_update => things to do just before render
        // late_update();

        // // rendering
        // // render_scene => render everything
        // render_scene();
        // // render_ui => render ui (in front)
        // render_ui();

        // // pausing
        // check_pause();

        // // decommissioning
        // check_quit();
    }
}
