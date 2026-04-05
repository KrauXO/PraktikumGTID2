#include <GL/glut.h>

void stack(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_QUADS);
	    glColor3f(0.0f, 0.0f, 1.0f);
	    glVertex3f(0.1f, 0.1f, 0.0f);
	    glVertex3f(-0.1f, 0.1f, 0.0f);
	    glVertex3f(-0.1f, -0.1f, 0.0f);
	    glVertex3f(0.1f, -0.1f, 0.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	    glColor3f(0.0f, 0.0f, 1.0f);
	    glVertex3f(0.125f, 0.1f, 0.0f);
	    glColor3f(1.0f, 0.0f, 0.0f);
	    glVertex3f(0.325f, 0.1f, 0.0f);
	    glColor3f(0.0f, 0.0f, 1.0f);
	    glVertex3f(0.325f, -0.1f, 0.0f);
	    glVertex3f(0.125f, -0.1f, 0.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	    glColor3f(0.0f, 0.0f, 1.0f);
	    glVertex3f(-0.125f, 0.1f, 0.0f);
	    glVertex3f(-0.325, 0.1f, 0.0f);
	    glVertex3f(-0.325f, -0.1f, 0.0f);
	    glVertex3f(-0.125f, -0.1f, 0.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	    glColor3f(0.0f, 0.0f, 1.0f);
	    glVertex3f(0.0125f, 0.3f, 0.0f);
	    glColor3f(1.0f, 0.0f, 0.0f);
	    glVertex3f(0.2125f, 0.3f, 0.0f);
	    glColor3f(0.0f, 0.0f, 1.0f);
	    glVertex3f(0.2125, 0.1f, 0.0f);
	    glVertex3f(0.0125f, 0.1f, 0.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	    glColor3f(0.0f, 0.0f, 1.0f);
	    glVertex3f(-0.0125f, 0.1f, 0.0f);
	    glVertex3f(-0.2125f, 0.1f, 0.0f);
	    glVertex3f(-0.2125, 0.3f, 0.0f);
	    glVertex3f(-0.0125f, 0.3f, 0.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	    glColor3f(0.0f, 0.0f, 1.0f);
	    glVertex3f(-0.1f, 0.5f, 0.0f);
	    glVertex3f(0.1f, 0.5f, 0.0f);
	    glVertex3f(0.1f, 0.3f, 0.0f);
	    glColor3f(1.0f, 0.0f, 0.0f);
	    glVertex3f(-0.1f, 0.3f, 0.0f);
	glEnd();
	glFlush();
}

int main (int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Tumpukan Kotak");
	glutDisplayFunc(stack);
	glClearColor(0.9f, 0.9f, 0.9f, 1.0f);
	glutMainLoop();
}
