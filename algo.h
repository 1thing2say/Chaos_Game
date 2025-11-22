#ifndef ALGO_H
#define ALGO_H

using namespace std;
using namespace sf;

void drawPoint(vector<Vector2f>& a, vector<Vector2f>& b, RenderWindow& w) 
// a == points, b == verticies
{
    cout << "Iteration: " << a.size() << endl;
    int random = rand() % 3;

    // Pick a random vertex and calculate 
    // the midpoint with the point.
    unsigned int x_coord = (a.back().x + b[random].x) / 2;
    unsigned int y_coord = (a.back().y + b[random].y) / 2;

    // Then create and draw a new point in the midpoint
    a.push_back(Vector2f(x_coord, y_coord));
    RectangleShape rect(Vector2f(10,10));
	rect.setPosition(Vector2f(a.back().x, a.back().y));
	rect.setFillColor(Color::Magenta);
	w.draw(rect);


}

#endif