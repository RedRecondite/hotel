void main(void)
{
int &num = random(2, 0);
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
if (&result == 1)
{
say_stop("I suppose I COULD use some sleep...", 1);
wait(100);
fade_down();
wait(1500);
&num += 1;
if (&num >= 2)
{
&num = 0;
}
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
if (&num == 1)
{
say_stop_xy("`4You are a pony.", 1, 30);
wait(300);
say_stop_xy("`4Not a horse!", 10, 30);
wait(300);
say_stop_xy("`4And don't let anyone ever tell you otherwise...", 20, 30);
wait(200);
}
fade_up();
wait(200);
say_stop("Jeez, this bed makes me have some screwed up dreams...", 1);
wait(100);
}
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