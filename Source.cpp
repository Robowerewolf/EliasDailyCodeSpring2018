#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;

	al_init();
	al_init_primitives_addon();

	timer = al_create_timer(.02);

	display = al_create_display(800, 800);

	event_queue = al_create_event_queue();

	al_register_event_source(event_queue, al_get_timer_event_source(timer));

	bool redraw = true;

	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_start_timer(timer);

	while (1) {
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if (ev.type == ALLEGRO_EVENT_TIMER) {


			//redraw at every tick of the timer
			redraw = true;
		}
		if (redraw) {
			redraw = false;
			//RandomWord();
			al_flip_display();
		}

		int r = (rand() % 255 + 1);
		int g = (rand() % 255 + 1);
		int b = (rand() % 255 + 1);
		int x = (rand() % 800 + 1);
		int y = (rand() % 800 + 1);
		int f = (rand() % 100 + 1);
		int s = (rand() % 100 + 1);

		al_draw_filled_circle(x, y, f, al_map_rgb(r, g, b));
		al_draw_triangle(x, y, f, s, x, y, al_map_rgb(r, g, b), s);


	}
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);
	al_destroy_timer(timer);
}