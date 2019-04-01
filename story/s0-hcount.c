void main(void)
{
 int &x = sp_x(&current_sprite, -1);
 int &y = sp_y(&current_sprite, -1);
 &y -= 50;
 int &crap;
 
 &y = sp_y(&current_sprite, -1);
 &crap = create_sprite(&x, &y, 0, 381, 1);
}