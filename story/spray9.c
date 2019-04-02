//To move the sprite a random direction/speed in dir9 (up and right)
//Don't ask what this is used for.

void main
{
	int &randx = random(4, 1);
	int &randy = random(-4, -2);
	
	sp_move_x(&current_sprite, &randx);
	sp_move_y(&current_sprite, &randy);
	&randy = random(750, 75);
	wait(&randy);
	sp_move_x(&current_sprite, 0);
	sp_move_y(&current_sprite, 0);
}