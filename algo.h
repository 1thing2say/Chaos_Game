#ifndef ALGO_H
#define ALGO_H

using namespace std;
using namespace sf;

void drawPoint(vector<Vector2f>& a, vector<Vector2f>& b, RenderWindow& w, double size) 
// a == points, b == verticies
{
    cout << "Iteration: " << a.size() << endl;
    int random = rand() % 3;

    // Pick a random vertex and calculate 
    // the midpoint with that point.
    unsigned int x_coord = (a.back().x + b[random].x) / 2;
    unsigned int y_coord = (a.back().y + b[random].y) / 2;

    // Then create and draw a new point in the midpoint
    a.push_back(Vector2f(x_coord, y_coord));
    for (int i = 0; i < a.size(); i++)
    {
        RectangleShape rect(Vector2f(size, size));
	    rect.setPosition(Vector2f(a[i].x, a[i].y));
	    rect.setFillColor(Color::White);
	    w.draw(rect);
    }

    // For debugging
    cout << "Vertices: " << b.size() << endl;
	cout << "Points: " << a.size() << endl;

    // Uncomment to slow down algorithm
    //this_thread::sleep_for(chrono::milliseconds(50));
}

#endif
