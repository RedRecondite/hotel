void main
sp_nodraw(&current_sprite,1)
sp_nohit(&current_sprite,1)

sp_editor_num(&current_sprite)
editor_type(&return,1)
make_global_int("&stalkdin",0)

int &dix = sp_x(&current_sprite,-1)
int &diy = sp_y(&current_sprite,-1)
script_attach(1000)
int &old_map = &player_map
int &stalker

stalkieloop:

if (&old_map != &player_map)
{
&old_map = &player_map
&dix = sp_x(1,-1)
&diy = sp_y(1,-1)
wait(500)
&stalker = create_sprite(&dix,&diy,16,341,1)
sp_script(&stalker,"stalker2")
}
else
{
if (&stalker == 0)
{
&stalker = create_sprite(&dix,&diy,16,341,1)
sp_script(&stalker,"stalker2")
}
}
wait(500)

if (&stalkdin == 666)
kill_this_task

goto stalkieloop
}