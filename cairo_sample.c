#include <cairo.h>

int main(int argc, char** argv)
{

	cairo_surface_t *surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, 400, 400);
	cairo_t *cairo = cairo_create(surface);

	cairo_set_source_rgba(cairo, 1.0, 0.0, 0.0, 1.0);
	cairo_rectangle(cairo, 100, 100, 200, 200);
	cairo_fill(cairo);

	cairo_surface_write_to_png(surface, "sample.png");

	cairo_destroy(cairo);
	cairo_surface_destroy(surface);

	return 0;
}
