void talk( void )
{
freeze(1);
choice start();
set_y 240
set_title_color 15
title_start();
Talk to this creature?
title_end();
"Meh"
"Meh"
choice end();

if(&result == 1)
{
say_stop("`$What'ya doin' duck?", 1);
say_stop("`4Participating...", &current_sprite);
say_stop("`$And? How do you feel about it?", 1);
say_stop("`4Participative...", &current_sprite);
say_stop("`$Descriptive, descriptive...", 1);
say_stop("`4Will you leave me alone?", &current_sprite);
say_stop("`$Hey, I'm just trying to make conversation here", 1);
unfreeze(1);
}
if(&result == 2)
{
unfreeze(1);
}
}