// Goblin with spiked clubs
void main()
{
int &mcounter;
int &getx;
sp_brain(&current_sprite,16);
sp_speed(&current_sprite,1);
sp_distance(&current_sprite,50);
sp_range(&current_sprite,45);
sp_frame_delay(&current_sprite,50);
sp_timing(&current_sprite,0);
sp_base_walk(&current_sprite,780);
sp_base_attack(&current_sprite,770);
sp_defense(&current_sprite,3);
sp_strength(&current_sprite,25);
sp_touch_damage(&current_sprite,0);
sp_hitpoints(&current_sprite,70);
sp_gold(&current_sprite,1);
sp_exp(&current_sprite,300);
preload_seq(772);
preload_seq(774);
preload_seq(776);
preload_seq(778);
preload_seq(780);
preload_seq(785);
preload_seq(781);
preload_seq(783);
preload_seq(787);
preload_seq(789);
}
void attack()
{
playsound(27,22050,0,&current_sprite,0);
&mcounter = random(1000,0);
sp_attack_wait(&current_sprite,&mcounter);
if (random(6,1) == 1)
{
sp_seq(&current_sprite,780);
sp_frame(&current_sprite,1);
}
}
void hit()
{
playsound(28,22050,0,&current_sprite,0);
sp_touch_damage(&current_sprite,-1);
if (sp_brain(&current_sprite,-1) == 16)
{
sp_brain(&current_sprite,9);
sp_target(&current_sprite,&enemy_sprite);
sp_touch_damage(&current_sprite,10);
}
sp_gold(&enemy_sprite,-1);
if (&return == 1)
sp_target(&current_sprite,1);
}
void die()
{
&getx = sp_editor_num(&current_sprite);
if (&getx != 0)
editor_type(&getx,6);
}
void talk( void )
{
if (sp_brain(&current_sprite,-1) == 9)
return

 int &randy = random(4, 1);
 if (&randy == 1)
 say("`4Gro'k ki owab dakis gedi!", &current_sprite);
 if (&randy == 2)
 say("`4Tig glock sigre!", &current_sprite);
 if (&randy == 3)  
 say("`4Oston tewers inat'l meen o mistary!", &current_sprite);
 if (&randy == 4)
 say("`4Hoglim dack byork!", &current_sprite);
}