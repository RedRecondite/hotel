void main(void)
{
sp_touch_damage(&current_sprite, -1);
}

void touch(void)
{
sp_touch_damage(&current_sprite, 0);
say("It is locked!", 1);
}

void talk(void)
{
say("`%For sale - see Charlie.", &current_sprite);
}

void hit(void)
{
say("How dare you prevent me from trespassing!", 1);
}