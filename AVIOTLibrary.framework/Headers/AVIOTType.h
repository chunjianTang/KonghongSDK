//
//  AVIOTType.h
//  AVIOTLibrary
//
//  Created by AVIOT_ios on 2021/1/13.
//

#ifndef AVIOTType_h
#define AVIOTType_h

typedef NS_ENUM(NSInteger,AVIOTCallTypes)
{
    CallType_VideoCalling, //主叫开启视频 只有单纯视频，没有语音
    CallType_VoiceCalling, //主叫开锁语音音频
    CallType_VideoCalled,  //被叫开启视频
    CallType_VoiceCalled   //被叫开启语音音频
};

typedef NS_ENUM(NSInteger, AVIOTDeviceType) {
    AVIOTDeviceTypeHost = 1,//主机
    AVIOTDeviceTypeHostB2 = 2,//B2主机
    AVIOTDeviceTypeExtern = 3,//分机
    AVIOTDeviceTypeSmallGate = 4,//小门口机
    AVIOTDeviceTypeManager = 5,//管理机
    AVIOTDeviceTypeWall = 6,//围墙机
    AVIOTDeviceTypePhone = 7//手机
};

typedef NS_ENUM(NSInteger,AVIOTCallBackStatus)
{
    AVIOT_CALLSTATUS_CALLINGFAILED = 100,   //呼叫失败
    AVIOT_CALLSTATUS_CALL_IN,   //电话来电
    AVIOT_CALLSTATUS_CALLOVER,  //通话结束
    AVIOT_CALLSTATUS_CALL_OUT_ANSWERED, //对方摘机
    AVIOT_CALLSTATUS_CALL_OUT_NOANSWERED,  //对方不存在或者不在线
    AVIOT_CALLSTATUS_ANSWERED,    //主机已被接听，通话中
    AVIOT_CALLSTATUS_VIDEO_FPS,   //视频fps 帧率和码率的改变
    AVIOT_CALLSTATUS_VIDEO_TIME,  //视频播放时间
    AVIOT_STATUS_LOGINING,   //登录中
    AVIOT_STATUS_LOGIN_SUCESS,  //登录成功
    AVIOT_STATUS_LOGIN_FAILED,  //登录失败
    AVIOT_LADDERSTATUS_LADDERINGFAILED, //呼梯失败
    AVIOT_LADDERSTATUS_LADDERSUCCESS,   //呼梯成功
    AVIOT_UNLOCKSTATUS_UNLOCKINGFAILED, //开锁失败
    AVIOT_UNLOCKSTATUS_UNLOCKSUCCESS,   //开锁成功
    AVIOT_STATUS_SERVER_EXP,    //服务异常
    AVIOT_STATUS_PARAMETER_NULL,  //参数存在空
    AVIOT_STATUS_TOKEN_FAIL,    //Token 失败
    AVIOT_STATUS_TOKEN_EXPIRED,  //Token 过期
    AVIOT_STREAMING_SERVICE_DISCONNECT,    //流媒体服务断开
    AVIOT_STATUS_HOSTHANGUP,          //主机挂断
    AVIOT_STATUS_UN_VERIFICATION,     //未收到验证回复
    AVIOT_STATUS_TIMEOUT,         //超时，发送命令超时
    AVIOT_STATUS_SERVER_TIMEOUT,  //消息服务器连接超时
    AVIOT_STATUS_OFFLINE,          //掉线了
};


#endif /* AVIOTType_h */
