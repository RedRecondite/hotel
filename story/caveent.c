void main(void)
{
sp_touch_damage(&current_sprite, -1);
}

void touch(void)
{
sp_touch_damage(&current_sprite, 0);
freeze(1);
sp_nodraw(1, 1);
int &hold = create_sprite(318, 203, 5, 452, 1);
sp_seq(&hold, 452);
wait(1500);
script_attach(1000);
fade_down();
&player_map = 300;
load_screen();
draw_screen();
sp_x(1, 301);
sp_y(1, 284);
sp_nodraw(1, 0);
unfreeze(1);
fade_up();
kill_this_task();
}