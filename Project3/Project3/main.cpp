#include <iostream>
#include "SDL.h"
#include "Game.h"
using namespace std;

Game *game = nullptr;

int main(int argc, char* argv[]) {

	game = new Game;
	game->init("Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, true);
	while (game->running()) {
		game->handleEvent();
		game->update();
		game->render();

	}
	game->clean();

	return 0;





	/*if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		cout << "SDL_Init Error: " << SDL_GetError() << endl;
		return 1;
	}

	SDL_Window *win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
	if (win == nullptr) {
		cout << "SDL_CreateWindow Error: " << SDL_GetError() << endl;
		return 2;
	}

	SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (ren == nullptr) {
		cout << "SDL_CreateRenderer Error: " << SDL_GetError() << endl;
		return 3;
	}

	SDL_Surface *bmp = SDL_LoadBMP("hello.bmp");
	if (bmp == nullptr) {
		cout << "SDL_LoadBMP Error: " << SDL_GetError() << endl;
		system("pause");
		return 4;
	}
	
	SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, bmp);
	SDL_FreeSurface(bmp);
	if (tex == nullptr) {
		cout << "SDL_CreateTextureFromSurface Error: " << SDL_GetError() << std::endl;
		return 5;
	}

	SDL_RenderClear(ren);
	SDL_RenderCopy(ren, tex, NULL, NULL);
	SDL_RenderPresent(ren);

	SDL_Delay(2000);

	SDL_DestroyTexture(tex);
	SDL_DestroyRenderer(ren);
	SDL_DestroyWindow(win);
	SDL_Quit();
	return 0;*/
}





/*#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <string.h>
#include <tchar.h>
#include "sqlite3.h"

using namespace std;

// Основная функция - аналог int main() в консольном приложении:
int WINAPI WinMain(HINSTANCE hInstance, // дескриптор экземпляра приложения
	HINSTANCE hPrevInstance, // в Win32 не используется
	LPSTR lpCmdLine, // нужен для запуска окна в режиме командной строки
	int nCmdShow) // режим отображения окна
{
	// Функция вывода окна с кнопкой "ОК" на экран (о параметрах позже)
	MessageBox(NULL, "Привет, мир!!!", "Оконная процедура", MB_OK);
	return NULL; // возвращаем значение функции
}
*/
/*
int main(int argc, char* argv[])
{
	sqlite3 *db;
	int rc;
	tstring msg;

	rc = sqlite3_open("test.db", &db);

	if (rc) {
		msg = "Can't open database: %s\n" + (string)sqlite3_errmsg(db);
		MessageBox(NULL, msg, "Доступ к базе данных", MB_OK);
		exit(0);
	}
	else {
		msg = "Opened database successfully\n";
		MessageBox(NULL, msg, "Доступ к базе данных", MB_OK);
	}
	sqlite3_close(db);

	system("pause");
}*/