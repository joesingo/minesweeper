#ifndef GRAPHICS_H
#define GRAPHICS_H

#define MAX_BUTTON_LENGTH 10

struct Button {
    char label[MAX_BUTTON_LENGTH];

    // The coordinates of the CENTER of the button
    int x;
    int y;
};

int init_allegro(int width, int height, ALLEGRO_DISPLAY **display,
                 ALLEGRO_EVENT_QUEUE **event_queue, ALLEGRO_TIMER **timer);
void draw_cell(struct Game *game, int x, int y, int hovered);
void draw_game(struct Game *game);
void draw_button(struct Button *button, int hovered);

struct Button *get_clicked_button(struct Button **buttons, int count, int mouse_x,
                                  int mouse_y);
int get_clicked_cell(struct Game *game, int mouse_x, int mouse_y, int *x_ptr,
                     int *y_ptr);
#endif