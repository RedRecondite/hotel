//Periodical bleeding
void duck
{
int &temp1
int &temp2
int &temp3
int &temp4

bleed
random(5000,0)
wait(&return)
&temp2 = sp_x(&current_sprite,-1)
&temp3 = sp_y(&current_sprite,-1)
&temp4 = random(2,188)
&temp1 = create_sprite(&temp2,&temp3,0,&temp4,1)
sp_nohit(&temp1,1)
sp_seq(&temp1,&temp4)
wait(100)
goto bleed
}