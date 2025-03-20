#include <iostream>
#include <raylib.h>
#include "sky.hpp"
#include "star.hpp"
#include <vector>
using namespace std;

void render(const vector<star>stars)
{
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "my star_project");
    SetTargetFPS(60); 
    int ufo_x=300;
    int ufo_y=400;
    while (WindowShouldClose()==false)
    {
        
        ClearBackground(BLUE);
        for (const auto &i : stars)
        {
            if (IsKeyDown(KEY_LEFT))
            {
                ufo_x=ufo_x+5;
            }
            
            if (IsKeyDown(KEY_RIGHT))
            {
                ufo_x=ufo_x-5;
            }
            if (IsKeyDown(KEY_UP))
            {
                ufo_y=ufo_y+5;
            }
            
            if (IsKeyDown(KEY_DOWN))
            {
                ufo_y=ufo_y-5;
            }
            BeginDrawing();
            DrawCircle(i.get_pos_x(), i.get_pos_y(), i.get_brightness(), BLACK);
            DrawEllipse(ufo_x,ufo_y,55,35,GREEN);
            DrawEllipse(ufo_x-100,ufo_y-200,60,40,GREEN);
        }
            
        EndDrawing();
    }

    CloseWindow();
}

int main()
{
    vector<star> myvec;
    int main_star;
    cout << "enter the number of stars you want to see: " << endl;
    cin >> main_star;
star object2;
    sky object1;
    object1.set_stars(main_star);
    
    for (int i = 0; i < main_star; i++)
    {
        cout << "enter the coordinates and brightness for star " << endl;
        int x, y, b;
        cin >> x >> y >> b;
        object2.set_pos_x(x);
        object2.set_pos_y(y);
        object2.set_brightness(b);
        myvec.push_back(object2);
    }
    
    
    render(myvec);
    return 0;
}
