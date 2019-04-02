void main(void)
{
sp_speed(&current_sprite, 1);
sp_brain(&current_sprite, 16);
sp_base_walk(&current_sprite, 330);
}

void talk(void)
{
say("`#Stay away, dude.", &current_sprite);
}

void hit(void)
{
say("`#Stop hitting on me!", &current_sprite);
}