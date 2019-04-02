void main(void)
{
//if you add a dream, raise maxdreams by 1 so it will cycle properly
int &maxdreams = 3;
int &num = random(&maxdreams, 0);
}

void talk(void)
{
freeze(&current_sprite);
freeze(1);
say_stop("This bed looks awfully comfy, but the pillow smells funny...", 1);
choice_start();
"Take a nap"
"Wet the bed"
"I'm not tired"
choice_end();

//1st choice (Dreams)
if (&result == 1)
{
say_stop("I suppose I COULD use some sleep...", 1);
wait(100);
fade_down();
wait(1500);
&num += 1;
if (&num >= &maxdreams)
{
&num = 0;
}

//Dream 1
if (&num == 0)
{
say_stop_xy("`7Hello, Dink.", 1, 30);
wait(500);
say_stop_xy("`7It's me, the man of your dreams!", 10, 30);
wait(600);
say_stop_xy("`7Don't tell anyone I spoke to you!", 20, 30);
wait(600);
say_stop_xy("`7It'll be...our little secret...", 30, 30);
wait(200);
}

//Dream 2
if (&num == 1)
{
say_stop_xy("`4You are a pony.", 1, 30);
wait(300);
say_stop_xy("`4Not a horse!", 10, 30);
wait(300);
say_stop_xy("`4And don't let anyone ever tell you otherwise...", 20, 30);
wait(200);
}

//Dream 3
if (&num == 2)
{
  wait(500);
  playsound(1, 12050, 10000, 1, 0);
  say_stop_xy("`4QUUUUAAAAAAAAAAAAACK", 1, 30);
  wait(500);
  int &crap = create_sprite(464,180, 3, 21, 1);
  &temphold = &crap;
  sp_basewalk(&temphold, 20);
  sp_speed(&temphold, 2);
  sp_script(&temphold, "die5");
  fade_up();
  wait(1000);
  say_stop("I don't think I want to know where you came from...", 1);
  wait(100);
  say_stop("0QUACK!", &temphold);
  wait(200);
}

//etc...

fade_up();
wait(200);
say_stop("Jeez, this bed makes me have some screwed up dreams...", 1);
wait(100);

}

//2nd choice (unfunny joke)
if (&result == 2)
{
say_stop("No! I'm not gonna do that.", 1);
wait(100);
say_stop("....". 1);
wait(400);
say_stop("That joke downstairs WAS pretty funny though.", 1);
wait(100);
say_stop("....". 1);
wait(1000);
say_stop("Alright fine, but it's just gonna be a tinkle!", 1);
wait(100);
}

unfreeze(&current_sprite);
unfreeze(1);
}

void hit( void )
{
say("It's not truly a Dink Hotel until I've hit everything in here.", 1);
}