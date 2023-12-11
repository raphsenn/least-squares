#ifndef APPLICATION_HPP
#define APPLICATION_HPP
#include "./SFML/Graphics.hpp"
#include <vector>
#include <tuple>
#include <cstdlib>

#include "./linear.hpp"
#include "./squared.hpp"


class Application {

  private:
    // Window 
    int WIDTH;
    int HEIGHT;
    sf::RenderWindow window;  
    sf::View view;
    sf::Vector2f lastMousePos;
    
    std::vector<std::tuple<float, float>> data; // raw data
    std::vector<std::tuple<float, float>> function_data; // f(data)
  
  public:
    Application(int w, int h); // Constructor
    void draw_data(const std::vector<std::tuple<float, float>>& dataset, const sf::Color& color);
    void draw();
    void change_view(sf::Event& event);
    void update();
    void run(); // runs the sfml-window-loop

};
#endif // APPLICATION_HPP
