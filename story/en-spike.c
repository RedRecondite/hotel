//spike monster
void main()
{
sp_base_walk(&current_sprite,840);
sp_speed(&current_sprite,3);
sp_timing(&current_sprite,30);
sp_defense(&current_sprite,10);
sp_hitpoints(&current_sprite,1);
sp_touch_damage(&current_sprite,-1);
sp_brain(&current_sprite,0);
sp_reverse(&current_sprite,1);
sp_nohit(&current_sprite,1);
sp_exp(&current_sprite,100);
int &sseq = sp_pseq(&current_sprite,-1);
int &getnum;
int &getbrain;
sp_pframe(&current_sprite,8)
}
void touch()
{
&getbrain = sp_brain(&current_sprite,-1);
if (&getbrain == 9)
{
hurt(&enemy_sprite,1);
wait(100);
hurt(&enemy_sprite,2);
wait(100);
hurt(&enemy_sprite,3);
wait(100);
hurt(&enemy_sprite,4);
wait(100);
hurt(&enemy_sprite,5);
wait(100);
hurt(&enemy_sprite,6);
wait(100);
hurt(&enemy_sprite,7);
wait(100);
hurt(&enemy_sprite,8);
wait(100);
hurt(&enemy_sprite,9);
wait(100);
hurt(&enemy_sprite,10);
wait(100);
hurt(&enemy_sprite,11);
wait(100);
hurt(&enemy_sprite,12);
wait(100);
}
if (&getbrain == 0)
{
sp_touch_damage(&current_sprite,0);
sp_seq(&current_sprite,&sseq);
sp_frame(&current_sprite,8);
sp_que(&current_sprite,0);
wait(500);
animate:
sp_brain(&current_sprite,9);
sp_target(&current_sprite,&enemy_sprite);
sp_touch_damage(&current_sprite,-1);
}
}
void die()
{
&getnum = sp_editor_num(&current_sprite);
editor_hold(&getnum,6);
if (screenlock(-1) == 1)
{
if (get_sprite_with_this_brain(9,&current_sprite) == 0)
{
if (get_sprite_with_this_brain(10,&current_sprite) == 0)
{
screenlock(0);
playsound(43,16050,0,0,0);
}
}
}
}
void hit()
{
playsound(13,18000,5000,&current_sprite,0);
&getbrain = sp_brain(&current_sprite,-1);
if (&getbrain == 0)
goto animate;
}