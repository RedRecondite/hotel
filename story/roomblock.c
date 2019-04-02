void main(void)
{
sp_nodraw(&current_sprite, 1);
sp_hard(&current_sprite, 1);
if (&story < 2)
{
sp_touch_damage(&current_sprite, -1);
}
wait(1);
draw_hard_sprite(&current_sprite);
}

void touch(void)
{
freeze(1);
sp_touch(damage(&current_sprite, 0);
move(1, 4, 368, 0);
say("It's locked!", 1);
unfreeze(1);
wait(500);
sp_touch(damage(&current_sprite, -1);
}