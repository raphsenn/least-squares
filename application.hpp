#ifndef APPLICATION_HPP
#define APPLICATION_HPP
#include "./SFML/Graphics.hpp"
#include <vector>
#include <tuple>

class Application {

  private:
    // Window 
    int WIDTH;
    int HEIGHT;
    sf::RenderWindow window;  
    sf::View view;
    sf::Vector2f lastMousePos;
    
    std::vector<std::tuple<int, int>> data;
  
  public:
    Application(int w, int h); // Constructor
    void draw();
    void change_view(sf::Event& event);
    void update();
    void run(); // runs the sfml-window-loop

};
#endif // APPLICATION_HPP
