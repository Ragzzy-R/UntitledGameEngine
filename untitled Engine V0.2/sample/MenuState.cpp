#include "MenuState.h"
#include "AppGameState.h"
#include <iostream>
     
MenuState::MenuState(){
}

void MenuState::init(AppGameState *apg){
	GameState::init(apg);

	ss.loadImage("./tetris/SPLASHES_SHEET_41024x600.png");
	
	//man.loadImage("man.png");
}

void MenuState::render() {
	ss.drawImage(0,0,m_apg->containerWidth,m_apg->containerHeight);
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	fontRenderer.printWithShadow("PRESS ENTER TO CONTINUE",240,550);
	
	fontRenderer.printWithShadow("� Untitled Engine �!", 260, 220);
=======
>>>>>>> bbb1d59beee851fe9fb835c5dcaa1e1df6abdf1d
=======
>>>>>>> bbb1d59beee851fe9fb835c5dcaa1e1df6abdf1d
=======
>>>>>>> bbb1d59beee851fe9fb835c5dcaa1e1df6abdf1d

	fontRenderer.setColor(0xFF4040);
	fontRenderer.printWithShadow("PRESS ENTER TO CONTINUE",240,550);

	/*fontRenderer.setColor(0xADFF2F);
	fontRenderer.printWithShadow("Untitled �1Engine!", 260, 220);*/
}

void MenuState::update() {
	userPressed.pollEvents();
	if(userPressed.IsKeyPressed(SDLK_RETURN)) {
		//x+=5;
		m_apg->changeState("MainState");
	}
}

MenuState::~MenuState(void)
{
}
