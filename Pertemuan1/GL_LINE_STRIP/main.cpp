#include <GL/glut.h>

void strip(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(4.0f);
	glBegin(GL_LINE_STRIP);
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(0.25f, 0.25f, 0.0f);
		glVertex3f(-0.25f, -0.25f, 0.0f);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(-0.25f, 0.25f, 0.0f);
		glVertex3f(0.25f, -0.25f, 0.0f);
	glEnd();
	glFlush();
}

int main (int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Implementasi GL_LINES_STRIP");
	glutDisplayFunc(strip);
	glClearColor(0.9f, 0.9f, 0.9f, 1.0f);
	glutMainLoop();
}
