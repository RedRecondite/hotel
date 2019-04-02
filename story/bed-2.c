void main(void)
{
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
say_stop("I guess I could use some sleep...", 1);
wait(100);
fade_down();
wait(1500);
int &random = random(1, 0);
if (&random == 0)
{
say_xy("`7Hello, Dink.", 1, 30);
wait(2000);
say_xy("`7It's me, the man of your dreams!", 2, 30);
wait(3000);
say_xy("`7Don't tell anyone I spoke to you!", 3, 30);
wait(4000);
say_xy("`7It'll be...our little secret...", 4, 30);
wait(4000);
}
if (&random == 1)
{
say_xy("`4You are a pony.", 1, 30);
wait(3000);
say_xy("`4Not a horse!", 2, 30);
wait(3000);
}
fade_up();
wait(200);
say_stop("This bed makes me have some screwed up dreams...", 1);
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