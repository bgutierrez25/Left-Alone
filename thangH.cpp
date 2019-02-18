/*
 * author: Thang Hin
 */

void showThangPicture(int x, int y, GLuint textid)
{
    Rect r;
	glColor3ub(255,255,255);
	//static float angle = 0.0f;
	static int wid = 80;
	//wid += sin(angle) * 10;
	float fx = (float)x;
	float fy = (float)y;
	//float a = 0;
	//a+= sin(angle) * 10.0f;
	//fx += a;
	//angle += 0.2f;
	glPushMatrix();
	glTranslatef(fx,fy,0);
	//glRotatef(a, 0, 0, 1.0);
	glBindTexture(GL_TEXTURE_2D, textid);
	
	glBegin(GL_QUADS);
		glTexCoord2f(0.0f, 1.0f); glVertex2i(-wid,-wid);
		glTexCoord2f(0.0f, 0.0f); glVertex2i(-wid, wid);
		glTexCoord2f(1.0f, 0.0f); glVertex2i( wid, wid);
		glTexCoord2f(1.0f, 1.0f); glVertex2i( wid,-wid);
	glEnd();
	glPopMatrix();
    unsigned int c = 0x00ffff44;
    r.bot = y - 20;
    r.left = x - wid/2 - 200; //x
    r.center = 0;
    ggprint16(&r, 16, c, "Thang Hin");
     
}
