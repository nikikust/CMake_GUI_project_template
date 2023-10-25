#pragma once
#include <DataOperations/DataStorage.h>
#include <Modules/Window.h>


class Painter
{
public:
    Painter(DataStorage& data_storage, Window& window);
    Painter() = delete;
    Painter(Painter&) = delete;
    Painter(Painter&&) = delete;
    ~Painter();

    // --- //

    void draw_point(sf::Vector2i position, float rad);
    void draw_line(sf::Vector2i A, sf::Vector2i B, float width = 1.f);

    void set_color(sf::Color color);

private:
    DataStorage& data_storage_;
    Window&      window_;

    sf::CircleShape    point_brush;
    sf::RectangleShape line_brush;

    sf::Color brush_color {255, 255, 255, 255};
};
