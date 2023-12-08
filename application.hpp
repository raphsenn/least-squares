#include "./SFML/Graphics.hpp"

class Application {

  private:
    // Window 
    int WIDTH;
    int HEIGHT;
    sf::RenderWindow window;  
  
  public:
    Application(int w, int h); // Constructor
    void run(); // runs the sfml-window-loop

};
