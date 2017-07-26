#pragma once

//making code easier to type with "using namespace"
using namespace sf;

//setting my functions inside the header file
void InitGame();
void setTileType(int, int, int);
void setTileStyle();
void SaveData();
void LoadData();
void LevelEditor();

//setting all my variables that will be used inside 
//my Timber.cpp
int hRes;
int vRes;

int tileWidth;
int tileHeight;
int tileSize;

int row;
int column;

int count = 0;
int tRow = 0;
int tCol = 0;

//Sprite spriteButton;
//Texture textureButton;

Texture textureButton;
Sprite spriteButton;

Texture textureRefreshButton;
Sprite spriteRefreshButton;

Sprite tileType[4];

Texture textureTile[4];
Sprite spriteTile[8][8];

int TileStyle[8][8];
int fileData[64];

Texture textureSaveButton;
Sprite spriteSaveButton;

Texture textureLoadButton;
Sprite spriteLoadButton;

Texture textureDirt;
Sprite spriteDirt;

Texture textureDirtTwo;
Sprite spriteDirtTwo;

Texture textureStone;
Sprite spriteStone;

Texture textureGrass;
Sprite spriteGrass;

Texture textureRefreshButton;
Sprite spriteRefreshButton;