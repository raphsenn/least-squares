#ifndef APPLICATION_HPP
#define APPLICATION_HPP

// Include SFML Graphics
#include "./SFML/Graphics.hpp"

// Standard Library
#include <vector>
#include <tuple>
#include <cstdlib>

// Include custom header files
#include "./linear.hpp"
#include "./squared.hpp"
#include "./exp.hpp"

//Represents an application with an SFML window for data visualization.
class Application {
  private:
    int WIDTH;  // Width of the window
    int HEIGHT; // Height of the window

    int WIDTH_PLOT; // Width of the plot area
    int HEIGHT_PLOT;  // Height of the plot area

    sf::RenderWindow window;  // SFML Window
    sf::View view;  // Current view
    sf::Vector2f lastMousePos;  // Last mouse position

    std::vector<std::tuple<float, float>> data; // Original data
    std::vector<std::tuple<float, float>> function_data;  // Fitted data

  public:
    // Constructs an Application object with specified width and height.
    // @param w Width of the window.
    // @param h Height of the window.
    Application(int w, int h);

     // Draws the specified dataset with the given color.
     // @param dataset Vector of tuples representing data points.
     // @param color Color used for drawing the dataset.
    void draw_data(const std::vector<std::tuple<float, float>>& dataset, const sf::Color& color);

    // Draws the entire application.
    void draw();

    // Changes the window view based on the provided SFML event.
    void change_view(sf::Event& event);

    // Updates the application state.
    void update();
   
    // Runs the SFML window loop.
    void run();
};
#endif // APPLICATION_HPP
