void main(void)
{
sp_base_walk(&current_sprite, 240);
sp_brain(&current_sprite, 16);
sp_speed(&current_sprite, 1);
}

void talk(void)
{
say("`5Ew, you smell like pigs.", &current_sprite);
}

void hit(void)
{
say("How does this smell?", 1);
}