void main( void )
{
sp_brain(&current_sprite, 3);
sp_speed(&current_sprite, 1);
sp_hitpoints(&current_sprite,1);
sp_base_walk(&current_sprite,20);
}
void die()
{
int &ddie = sp_editor_num(&current_sprite);
if (&ddie != 0)
editor_type(&ddie,8);
}