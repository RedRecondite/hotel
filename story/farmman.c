void main(void)
{
sp_speed(&current_sprite, 1);
sp_brain(&current_sprite, 16);
sp_base_walk(&current_sprite, 410);
}

void talk(void)
{
freeze(1);
freeze(&current_sprite);
say_stop("Mr. SmileStein!?", 1);
wait(100);
say_stop(`9Uh, no. Do all farmers look alike to you?", &current_sprite);
wait(100);
say_stop("Uh ...", 1);
wait(100);
say_stop("... ... no?", 1);
unfreeze(1);
unfreeze(&current_sprite);
}

void hit(void)
{
say(`9Don't hit a man with a sickle, son.", &current_sprite);
}