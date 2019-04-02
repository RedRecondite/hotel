//To move the sprite a random direction/speed in dir1 (up and right)

void main
{
	int &randx = random(4, 1);
	int &randy = random(-4, -1);
	//sp_timing(&current_sprite, 33);
	sp_move_x(&current_sprite, &randx);
	sp_move_y(&current_sprite, &randy);
	&randy = random(1000, 100);
	wait(&randy);
	sp_move_x(&current_sprite, 0);
	sp_move_y(&current_sprite, 0);
}