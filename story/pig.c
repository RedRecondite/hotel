//le pig
void main
sp_timing(&current_sprite,33)
sp_hitpoints(&current_sprite,10)
sp_base_walk(&current_sprite,40)
sp_brain(&current_sprite,4)
sp_speed(&current_sprite,1)
}

void die
int &crap = sp_editor_num(&current_sprite)
if (&crap != 0)
editor_type(&crap,8)
}