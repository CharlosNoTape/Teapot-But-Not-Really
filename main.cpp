#include <gl/freeglut.h>

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glutSolidCube(.5);
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE);
	glutInitDisplayMode(GLUT_RGB);

	glutInitWindowSize(300, 300);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Square Man, It's a square");

	glutDisplayFunc(display);

	glutMainLoop();

	return 0;
}