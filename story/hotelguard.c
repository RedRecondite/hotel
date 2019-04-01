//he is intro boi
void main
{
 if (&story == 1)
 {
 goto end;
 }

 move_stop(1, 8, 231)
 freeze(1);
 freeze(&custom_sprite);
 say_stop("What are you doing here?", 1);
 wait(200);
 say_stop("`1Guarding this here hotel.", &current_sprite);
 wait(200);
 say_stop("I see. What is this hotel called?", 1);
 wait(200);
 say_stop("`1The Dink Hotel. The best inn around.", &current_sprite);
 wait(200);
 say_stop("We'll see about that!", 1);
 status bar
 &update_status = 1;
 draw_status();
 unfreeze(1);
 unfreeze(&custom_sprite);
 &story += 1;

 end:
}