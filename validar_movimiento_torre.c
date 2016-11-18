
int validar_movimiento_torre (int pos_ini_x,int pos_ini_y,int pos_x,int pos_y)
{


    if(pos_ini_x==pos_x && pos_ini_y!=pos_y)
    {
        return 0;
    }
    if(pos_ini_y==pos_y && pos_ini_x!=pos_x)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

