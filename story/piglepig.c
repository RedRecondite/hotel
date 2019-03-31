//pig le pig
void main
sp_timing(&current_sprite,33)
sp_hitpoints(&current_sprite,10)
sp_base_walk(&current_sprite,40)
sp_brain(&current_sprite,4)
sp_speed(&current_sprite,1)

wait(250)
if (get_sprite_with_this_brain(3,1) > 0)
{
if (get_sprite_with_this_brain(9,1) > 0)
say("#That vile monster is harassing my friends! Please help, kind stranger!",&current_sprite)
}

}

void die
int &crap = sp_editor_num(&current_sprite)
if (&crap != 0)
editor_type(&crap,1)
}

void talk
if (get_sprite_with_this_brain(9,1) > 0)
say("`#AAHH",&current_sprite)

if (get_sprite_with_this_brain(9,1) == 0)
{
if (get_sprite_with_this_brain(3,1) == 0)
{
say("`#Duckolyn, Beakrice, FeatherHeather.... *sob*",&current_sprite)
}
else
{
say("`#Thank you, kind stranger! May the Sky Sow bless you with many mud baths.",&current_sprite)
}
}
}