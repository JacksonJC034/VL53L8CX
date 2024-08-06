int32 task_state # 任务状态
int32 initializing   #系统初始化         =1初始化完成,=0自检中,=2初始化失败
int32 checking    #系统自检               同上
int32 releasing     #松轴中                      =1松轴,=0锁轴
int32 driving       #行走中                         =1行走中,=0不在行走
int32 fine_positioning   #定位状态OK         =1OK, =0.不OK
int32 on_tag               #=1在标签上,=0不在标签上                
int32 on_track              #=1在轨道,=0不在轨道
int32 error              #错误中
int32 warning       #警告中
int32 estop             #急停中
int32 sleeping       #休眠中
int32 load                  #载货中
int32 charging          #充电中
int32 mode # 模式
int32 stand_alone_state #弃用