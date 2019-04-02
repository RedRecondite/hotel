void main(void)
{
sp_touch_damage(&current_sprite, -1);
}

void touch(void)
{
sp_touch_damage(&current_sprite, 0);
say("It is locked!", 1);
move(1, 2, 298, 0);
wait(100);
sp_touch_damage(&current_sprite, -1);
}

void talk(void)
{
say("`%For sale - see Charlie.", &current_sprite);
}

void hit(void)
{
say("I didn't want to go into your cabin anyway.", 1);
}