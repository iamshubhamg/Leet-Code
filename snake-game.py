import pygame as pg
import random
pg.init()

win_w,win_h=900,600
win=pg.display.set_mode((win_w,win_h))
pg.display.set_caption('snake Game')

x,y,s_h,s_w=win_w/2,win_h/2,10,10
apx,apy=random.randint(0,win_w-10),random.randint(0,win_h-10)
ap_w,ap_h=10,10

loop_run,snake_run=True,True
esc_condition=True
ap_ct=0
direction=''
red,green,blue=(255,0,0),(0,255,0),(0,0,255)
font=pg.font.SysFont(None,25)

snake_list=[[x,y],[x,y+s_h]]   #defines the structure of the snake
##    =================================================================

'''def esc_msg(text,color):
    msg=font.render(text,True,color)
    win.blit(msg,(win_w/2,win_h/2))
    pg.display.update()'''





##    =================================================================

while loop_run:
    pg.time.delay(100)
    for event in pg.event.get():
       # print(event)
        if event.type==pg.QUIT:
            loop_run=False
            
    key=pg.key.get_pressed()
    ''' while not esc_condition:
        key=pg.key.get_pressed()
        win.fill((255,255,0))
        esc_msg('press e to exit',(0,0,0))
        print('##')
        if key[pg.K_UP]:
            #run=False
            esc_condition=True'''
        
## movement
    if key[pg.K_LEFT] or key[pg.K_a]:
            direction='left'
            #snake_list[1][0]=snake_list[0][0]+10
            
            
            
    elif key[pg.K_RIGHT] or key[pg.K_d]:
            
            #snake_list[1][0]=snake_list[0][0]-10
        
            direction='right'

    elif key[pg.K_UP] or key[pg.K_w]:
            #snake_list[1][1]=snake_list[0][1]-10
          
            direction='up'
           
    elif key[pg.K_DOWN] or key[pg.K_s]:
            #snake_list[1][1]=snake_list[0][1]+10
            direction='down'
            
    if direction=="up":
        y-=10
    elif direction=="down":
        y+=10
    elif direction=="left":
        x-=10
    elif direction=="right":
        x+=10

#==========================================
    snake_list.pop()
    snake_list.insert(0,[x,y])
    #snake_list[0][0]=x
    #snake_list[0][1]=y
    
    
        
   # elif key[pg.K_ESCAPE]or key[pg.K_W]:
    #    esc_condition=False
        
    pg.display.update()
        
        
        
##screen out situation        

    if snake_list[0][0]<0:
        x=win_w
    elif snake_list[0][0]>win_w:
        x=0
    elif snake_list[0][1]<0:
        y=win_h
    elif snake_list[0][1]>win_h:
        y=0
## apple 
    if (apx<=snake_list[0][0]<apx+ap_w or apx<snake_list[0][0]+s_w<apx+ap_w)\
        and (apy<=snake_list[0][1]<apy+ap_h or apy<snake_list[0][1]+s_h/2<apy+ap_h):
        
        ap_ct+=1
        snake_list.append([apx,apy])
        apx,apy=random.randint(0,win_w-10),random.randint(0,win_h-10)



    win.fill((255,255,255))

    
   
    """    for i in range(len(snake_list)):
        if snake_list[i]==1:
            color=blue
        else:
            color=green
        pg.draw.rect(win,color,(x,y+(i*s_h),s_w,s_h))
        pg.draw.rect(win,(0,0,0),(x-1,y+(i*s_h)-1,s_w+1,s_h+1),1)
    """
##snake ======================
    for i in range(len(snake_list)):
        pg.draw.rect(win,(0,255,0),(snake_list[i][0],snake_list[i][1],s_w,s_h))
        pg.draw.rect(win,(0,0,0),(snake_list[i][0],snake_list[i][1],s_w+1,s_h+1),1)

    
    pg.draw.rect(win,(255,0,0),(apx,apy,ap_w,ap_h))
    pg.display.update()


pg.quit()
