float64 x
float64 y                                               #机器人实际位置，xy
int64 error                                             #本节点错误字
int32 status                                        #本节点状态
float64 distance                                #霍尔定位偏差值
int32 hall_location                            #霍尔定位值
int32 lift_son_loc_cali                     #标定的子道位置
int32 lift_current_loc                      #当前实时举升位置
int32 lift_horseshoe_en                 #马蹄光电是否到位
int32 state_motor_or_son            #当前的是在子道还是母道，=2母道,=1子道 =0既不在子道也不再母道
int32 state_lift_down_or_up         #当前是在顶升还是下降状态。 =2下降  =1上升 =0 既不在顶升也不在下降
int32 hall_rfid_en                              #霍尔和RFID读到