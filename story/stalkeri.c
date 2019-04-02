//Intro stalker, hint to player that stalker is south
void main(void)
{
sp_brain(&current_sprite, 9);
sp_base_walk(&current_sprite, 340);
sp_speed(&current_sprite, 1);
freeze(&current_sprite);
wait(1000);
move_stop(&current_sprite, 2, 500, 1);
int &hold = sp_editor_num(&current_sprite);
if (&hold != 0)
{
editor_type(&hold, 1);
}
sp_active(&current_sprite, 0);
}