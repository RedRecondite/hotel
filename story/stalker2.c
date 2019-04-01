void main
sp_base_walk(&current_sprite,340)
sp_speed(&current_sprite,1)
sp_timing(&current_sprite,33)
sp_hitpoints(&current_sprite,20)

lup:

if (random(10,1) == 1)
sp_follow(&current_sprite,1)

if (random(30,1) == 1)
sp_follow(&current_sprite,0)

wait(500)
goto lup

}

void talk
freeze(1)
freeze(&current_sprite)
sp_follow(&current_sprite,0)

if (&stalkdin == 6)
{
say_stop("Just leave me alone, guy.",1)
wait(500)
say("`3S-sorry, senpai!",&current_sprite)
&stalkdin = 665
goto egress
}

if (&stalkdin == 5)
{
say_stop("Really, you're bothering me.",1)
wait(250)
say("`3.....",&current_sprite)
wait(500)
goto egress
}

if (&stalkdin == 4)
{
say_stop("You're kind of starting to weird me out.",1)
say("`3.....",&current_sprite)
wait(500)
goto egress
}

if (&stalkdin == 3)
{
say_stop("What do you want, an autograph?",1)
say("`3.....",&current_sprite)
wait(500)
goto egress
}

if (&stalkdin == 2)
{
say_stop("You're following me, aren't you?",1)
say("`3.....",&current_sprite)
wait(500)
goto egress
}


if (&stalkdin == 1)
{
say_stop("Err... Do you want something?",1)
say("`3.....",&current_sprite)
wait(500)
goto egress
}

if (&stalkdin == 0)
{
say_stop("Hello.",1)
say("`3.....",&current_sprite)
wait(500)
goto egress
}





void hit
playsound(12,22050,&current_sprite,0)

egress:
sp_speed(&current_sprite,4)
sp_timing(&current_sprite,0)
int &dix = random(4,1)
if (&dix == 1)
move_stop(&current_sprite,8,-200,1)
if (&dix == 2)
move_stop(&current_sprite,2,600,1)
if (&dix == 3)
move_stop(&current_sprite,4,-200,1)
if (&dix == 4)
move_stop(&current_sprite,6,800,1)
unfreeze(1)
&stalkdin += 1
sp_active(&current_sprite,0)


void die
&stalkdin = 666
add_exp(5000,1)
}

