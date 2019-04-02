//le fat pig
//Feed it and enjoy the show. Perhaps "enjoy" is the wrong word.

void main
{
	sp_timing(&current_sprite,33);
	sp_hitpoints(&current_sprite,10);
	sp_base_walk(&current_sprite,40);
	sp_brain(&current_sprite,4);
	sp_speed(&current_sprite,1);
}

void die
{
	int &crap = sp_editor_num(&current_sprite);
	if (&crap != 0);
	editor_type(&crap,8);
}

void talk
{
	if (get_sprite_with_this_brain(9, 0) > 0)
	{
		say("No time to look at pigs now!", 1);
		return;
	}
	
	freeze(1);
	freeze(&current_sprite);
	
	say_stop("This pig looks hungry.", 1);
	
	int &pigfeed = compare_weapon("item-pig");
	if (&pigfeed)
	{
		//pig feed is armed
		choice_start();
		"Feed the pig"
		"Don't feed the pig"
		choice_end();
		
		if (&result == 1)
		{
			int &size = sp_size(&current_sprite, -1);
			if(&size == 225)
			{
				explode();
			}
			else
			{
				int &grunt;
				&grunt = random(2, 2);
				playsound(&grunt, 8000, 0, &current_sprite, 0);
				&size += 25;
				sp_size(&current_sprite, &size);
			}
		}
	}
	else
	{
		say_stop("If only I had some food for it...", 1);
	}
		
	unfreeze(1);
	unfreeze(&current_sprite);
}

void explode
{
	wait(500);
	playsound(5, 4000, 0, &current_sprite, 1);  //why doesn't this play?
	int &x = sp_x(&current_sprite, -1);
	int &x2 = sp_x(&current_sprite, -1);
	int &y2 = sp_y(&current_sprite, -1);
	int &wait = 20;
	int &size = sp_size(&current_sprite, -1);
	int &sizestep = 10;
	int &dir;
	
	//get approx location of the pig's sprayhole
	int &seq = sp_pseq(&current_sprite, -1);
	if(&seq == 41)
	{
		&x2 += 25;
		&y2 -= 35;
		&dir = 9;
	}
	if(&seq == 43)
	{
		&x2 -= 25;
		&y2 -= 35;
		&dir = 7;
	}
	if(&seq == 47)
	{
		&x2 += 24;
		&y2 -= 8;
		&dir = 3;
	}
	if(&seq == 49)
	{
		&x2 -= 24;
		&y2 -= 8;
		&dir = 1;
	}
	
	//You don't want to be standing here.
	&x += 3;
	sp_x(&current_sprite, &x);
	spray(&x2, &y2, &dir);
	wait(&wait);
	&x -= 6;
	sp_x(&current_sprite, &x);
	spray(&x2, &y2, &dir);
	wait(&wait);
	&x += 6;
	sp_x(&current_sprite, &x);
	spray(&x2, &y2, &dir);
	wait(&wait);
	&x -= 6;
	sp_x(&current_sprite, &x);
	spray(&x2, &y2, &dir);
	wait(&wait);
	&x += 6;
	&size -= &sizestep;
	sp_size(&current_sprite, &size);
	sp_x(&current_sprite, &x);
	spray(&x2, &y2, &dir);
	wait(&wait);
	&x -= 6;
	sp_x(&current_sprite, &x);
	spray(&x2, &y2, &dir);
	wait(&wait);
	&x += 6;
	&size -= &sizestep;
	sp_size(&current_sprite, &size);
	sp_x(&current_sprite, &x);
	spray(&x2, &y2, &dir);
	wait(&wait);
	&x -= 6;
	sp_x(&current_sprite, &x);
	spray(&x2, &y2, &dir);
	wait(&wait);
	&x += 6;
	&size -= &sizestep;
	sp_size(&current_sprite, &size);
	sp_x(&current_sprite, &x);
	spray(&x2, &y2, &dir);
	wait(&wait);
	&x -= 6;
	sp_x(&current_sprite, &x);
	wait(&wait);
	&x += 6;
	&size -= &sizestep;
	sp_size(&current_sprite, &size);
	sp_x(&current_sprite, &x);
	spray(&x2, &y2, &dir);
	wait(&wait);
	&x -= 6;
	&size -= &sizestep;
	sp_size(&current_sprite, &size);
	sp_x(&current_sprite, &x);
	spray(&x2, &y2, &dir);
	wait(&wait);
	&x += 6;
	sp_x(&current_sprite, &x);
	spray(&x2, &y2, &dir);
	wait(&wait);
	&x -= 6;
	&size -= &sizestep;
	sp_size(&current_sprite, &size);
	sp_x(&current_sprite, &x);
	wait(&wait);
	&x += 6;
	&size -= &sizestep;
	sp_size(&current_sprite, &size);
	sp_x(&current_sprite, &x);
	spray(&x2, &y2, &dir);
	wait(&wait);
	&x -= 6;
	&size -= &sizestep;
	sp_size(&current_sprite, &size);
	sp_x(&current_sprite, &x);
	wait(&wait);
	&x += 6;
	&size -= &sizestep;
	sp_size(&current_sprite, &size);
	sp_x(&current_sprite, &x);
	spray(&x2, &y2, &dir);
	wait(&wait);
	&x -= 6;
	&size -= &sizestep;
	sp_size(&current_sprite, &size);
	sp_x(&current_sprite, &x);
	wait(&wait);
	&x += 3;
	sp_x(&current_sprite, &x);
	sp_size(&current_sprite, 100);
	wait(1500);
	spray(&x2, &y2, &dir);
	spray(&x2, &y2, &dir);
	spray(&x2, &y2, &dir);
	spray(&x2, &y2, &dir);
	spray(&x2, &y2, &dir);
	wait(1000);
	//Dink says something witty here
freeze(1);
say_stop("Well, I, uh, that was something.", 1);
wait(100);
int &count = count_item("item-sw2");
if (&count == 0)
{
add_item("item-sw2", 438, 20);
wait(100);
say_stop("Weird, that pig projectile pooped a claw sword into my backpack.", 1);
wait(100);
say_stop("Talk about convenient!", 1);
}
unfreeze(1);
}

void spray
{
	//&arg1 =x, &arg2 = y, &arg3 = direction to aim
	
	int &temp;
	int &randx;
	int &randy;
	
	&temp = random(16, 1);
	&temp = create_sprite(&arg1, &arg2, 11, 97, &temp);
	if (&arg3 == 1)
	{
		sp_script(&temp, "spray1");
	}
	if (&arg3 == 3)
	{
		sp_script(&temp, "spray3");
	}
	if (&arg3 == 7)
	{
		sp_script(&temp, "spray7");
	}
	if (&arg3 == 9)
	{
		sp_script(&temp, "spray9");
	}
	
}
