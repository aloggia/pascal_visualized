//
// Created by alogg on 2/28/2023.
//
#include <iostream>
#include "pascals_triangle.h"



using namespace std;

GLdouble width, height;
int wd;

void init() {
    width = 1000;
    height = 500;
}

/* Initialize OpenGL Graphics */
void initGL() {
    // Set "clearing" or background color
    glClearColor(0.2f, 0.2f, 0.2f, 0.5f); // Black and opaque
}


/* Handler for window-repaint event. Call back when the window first appears and
 whenever the window needs to be re-painted. */
void display() {
    // Tell OpenGL to use the whole window for drawing
    glViewport(0, 0, width, height); // DO NOT CHANGE THIS LINE (unless you're on a Mac running Catalina)

    // Do an orthographic parallel projection with the coordinate
    // system set to first quadrant, limited by screen/window size
    glMatrixMode(GL_PROJECTION); // DO NOT CHANGE THIS LINE
    glLoadIdentity(); // DO NOT CHANGE THIS LINE
    glOrtho(0.0, width, height, 0.0, -1.f, 1.f); // DO NOT CHANGE THIS LINE

    // Clear the color buffer with current clearing color
    glClear(GL_COLOR_BUFFER_BIT); // DO NOT CHANGE THIS LINE

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); // DO NOT CHANGE THIS LINE

    /*
     * Draw here
     */
    glColor3f(0.72f, 0.82f, 0.33f);
    glBegin(GL_QUADS);
    glVertex2i(60, 100);
    glVertex2i(60, 140);
    glVertex2i(100, 140);
    glVertex2i(100, 100);
    glEnd();

    glColor3f(0.72f, 0.82f, 0.33f);
    glBegin(GL_TRIANGLES);
    glVertex2i(200, 400);
    glVertex2i(200, 190);
    glVertex2i(270, 140);
    glEnd();



    glFlush();  // Render now
}


// http://www.theasciicode.com.ar/ascii-control-characters/escape-ascii-code-27.html
void kbd(unsigned char key, int x, int y)
{
    // escape
    if (key == 27) {
        glutDestroyWindow(wd);
        exit(0);
    }

    glutPostRedisplay();
}

void kbdS(int key, int x, int y) {
    switch(key) {
        case GLUT_KEY_DOWN:

            break;
        case GLUT_KEY_LEFT:

            break;
        case GLUT_KEY_RIGHT:

            break;
        case GLUT_KEY_UP:

            break;
    }

    glutPostRedisplay();
}

void drawPascalsTriangle(int numRows) {

};

int* recursivePascal(int * valueArray, int size) {
    return nullptr;
};


int main() {
    std::cout << "Hello, World from pascals_triangle" << std::endl;
    return 0;
}