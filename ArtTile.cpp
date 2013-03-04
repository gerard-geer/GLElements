#include "ArtTile.h"

/*
Renders the Art Tile.
*/
virtual void ArtTile::draw(void) = 0

/*
Renders the Art Tile at the given location.
*/
virtual void ArtTile::draw(float x, float y, float z) = 0

/*
Renders the Art Tile at the given location and size.
*/
virtual void ArtTile::draw(float x, float y, float z, float width, float height) = 0

/*
Sets the location of the Art Tile.
*/
void ArtTile::setLocation(float newX, float newY, float newZ)
{
	x = newX;
	y = newY;
	z = newZ;	
}
	
/*
Changes the location of the Art Tile.
*/
void ArtTile::changeLocation(float changeX, float changeY, float changeZ)
{
	x += changeX;
	y += changeY;
	z += changeZ;
}
	
/*
Sets the size of the Art Tile.
*/
void ArtTile::setSize(float newWidth, float newHeight)
{
	width = newWidth;
	height = newHeight;
}
	
/*
Changes the size of the Art Tile.
*/
void ArtTile::changeSize(float changeWidth, float changeHeight)
{
	width += changeWidth;
	height += changeHeight;
}

/*
Returns the X location of this Animation.
*/
float ArtTile::getX(void)
{
	return x;
}

/*
Returns the Y location of this Art Tile.
*/
float ArtTile::getY(void)
{
	return y;
}

/*
Returns the Z location of this Art Tile.
*/
float ArtTile::getZ(void)
{
	return z;
}

/*
Returns the width of this Art Tile.
*/
float ArtTile::getWidth(void)
{
	return width;
}

/*
Returns the height of this Art Tile.
*/
float ArtTile::getHeight(void)
{
	return height;
}