/*=======================================================================
  Author      : Raghuram Iyer Razzy-R									
  Description : this class loads and renders Images.           
                
  created on  : 08/04/2013                                             
  Last Edited : 08/04/2013                                             
 =======================================================================*/
#include "AppGameState.h"
#pragma once
class Images
{
public:
	Images(void);
	GLuint m_handler;
	int    loadImage(const char* filename);
	int    drawImage(float x,float y,int width,int height);
<<<<<<< HEAD
<<<<<<< HEAD
	int imageWidth;
		SDL_Surface* TextureImage;
	int imageHeight;
=======
	float imageWidth;
	float imageHeight;
	int	drawSubImage(float x,float y,float width,float height,float xpos,float ypos) ;
>>>>>>> bbb1d59beee851fe9fb835c5dcaa1e1df6abdf1d
=======
	float imageWidth;
	float imageHeight;
	int	drawSubImage(float x,float y,float width,float height,float xpos,float ypos) ;
>>>>>>> bbb1d59beee851fe9fb835c5dcaa1e1df6abdf1d
	~Images(void);
};

