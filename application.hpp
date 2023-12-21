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
#include "./slider.hpp"

//Represents an application with an SFML window for data visualization.
class Application {
  private:
    int WIDTH;  // Width of the window
    int HEIGHT; // Height of the window

    int WIDTH_PLOT; // Width of the plot area
    int HEIGHT_PLOT;  // Height of the plot area

    sf::RenderWindow window;  // SFML Window
    sf::Vector2f lastMousePos;  // Last mouse position

    std::vector<std::tuple<float, float>> data; // Original data
    std::vector<std::tuple<float, float>> function_data;  // Fitted data

    Slider slider_iterations; // Slider to adjust number of iterations in gauss newton algorithm

  public:
    // Constructs an Application object with specified width and height.
    // @param w Width of the window.
    // @param h Height of the window.
    Application(int w, int h);
    
    // Read data (.tsv files) from folder data
    void read_data();

     // Draws the specified dataset with the given color.
     // @param dataset Vector of tuples representing data points.
     // @param color Color used for drawing the dataset.
    void draw_data(const std::vector<std::tuple<float, float>>& dataset, const sf::Color& color);

    // Draws the entire application.
    void draw();

    // Updates the application state.
    void update();
   
    // Runs the SFML window loop.
    void run();
};
#endif // APPLICATION_HPP
