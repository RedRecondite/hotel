//Headless duck
void main
{
sp_brain(&current_sprite,9)
sp_speed(&current_sprite,1)
sp_timing(&current_sprite,0)
sp_hitpoints(&current_sprite,1)
sp_base_walk(&current_sprite,110)
external("bleed","duck")
}
void die
{
int &getnum = sp_editor_num(&current_sprite)
if (&getnum != 0)
editor_type(&getnum,1)
}
void hit
{
sp_target(&current_sprite,0)
}