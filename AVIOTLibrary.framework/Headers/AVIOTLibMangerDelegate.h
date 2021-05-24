//
//  AVIOTLibMangerDelegate.h
//  AVIOTLibrary
//
//  Created by wrt_ios on 2021/1/12.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <AVIOTLibrary/AVIOTLibCallBackDelegate.h>

NS_ASSUME_NONNULL_BEGIN

//返回成功的回调数据
typedef void(^LibSccuessBlock)(NSDictionary *jsonDic);

//返回失败的回调
typedef void(^LibFailureblock)(NSError * error);

@protocol AVIOTLibMangerDelegate <NSObject>


/// 初始化SDK
/// @param token  申请得到的token
-(void)initLib:(NSString *)token launchOptions:(NSDictionary *)launchOptions;


/// 注销SDK 用来完全退出app时调用
-(void)unInitLib;


/// 初始化 流媒体
-(void)initMediaLib:(AVIOTCallTypes)callType;


/// 注销流媒体
-(void)unInitMediaLib;


/// 日志控制
/// @param log 日志控制开关
-(void)setLog:(BOOL)log;


/// 加入设置代理
/// @param delgeate  当前需要回调的类
-(void)addDelegate:(id<AVIOTLibCallBackDelegate>)delgeate;


/// 移除代理   当你退出当前界面调用
/// @param delgeate 当前回调的类
-(void)removeDelegate:(id<AVIOTLibCallBackDelegate>)delgeate;



/// 获取验证码
/// @param username 手机号
/// @param sccuessBlock  成功回调
/// @param failureBlock  失败回调
-(void)getSmsVerify:(NSString *)username sccuess:(LibSccuessBlock)sccuessBlock  failure:(LibFailureblock)failureBlock;



/// 注册用户
/// @param username 手机号
/// @param sccuessBlock 成功回调
/// @param failureBlock 失败回调
-(void)registerUser:(NSString *)username sccuess:(LibSccuessBlock)sccuessBlock  failure:(LibFailureblock)failureBlock;


/// 登录
/// @param username 手机号码
/// @param smsVerify 验证码
-(void)login:(NSString *)username smsVerify:(nullable NSString *)smsVerify;


/// 退出登录
-(void)logOut;



/// 获取房间ID
/// @param admin 小区管理员账号
/// @param phaseid 期编号
/// @param buildingid 栋编号
/// @param unitid 单元编号
/// @param floorid 楼层编号
/// @param roomid 房间编号
/// @param sccuessBlock 成功回调
/// @param failureBlock 失败回调
-(void)getRoomId:(NSString *)admin phase:(NSString *)phaseid building:(NSString *)buildingid unit:(NSString *)unitid floor:(NSString *)floorid room:(NSString *)roomid sccuess:(LibSccuessBlock)sccuessBlock  failure:(LibFailureblock)failureBlock;


/// 绑定房间
/// @param rid  房间ID
/// @param roomId  房间标识id
/// @param sccuessBlock 成功回调
/// @param failureBlock 失败回调
-(void)bindRoom:(NSString *)rid roomId:(NSString *)roomId sccuess:(LibSccuessBlock)sccuessBlock  failure:(LibFailureblock)failureBlock;


/// 解绑房间
/// @param roomId 房间标示ID
/// @param sccuessBlock  成功回调
/// @param failureBlock 失败回调
-(void)unBindRoom:(NSString *)roomId sccuess:(LibSccuessBlock)sccuessBlock  failure:(LibFailureblock)failureBlock;


/// 获取房间列表
/// @param sccessBlock 成功的回调
/// @param failureBlock 失败的回调
-(void)getBindRoomList:(LibSccuessBlock)sccessBlock failure:(LibFailureblock)failureBlock;

/// 获取主机列表
/// @param sccuessBlock 成功的回调
/// @param failureBlock 失败回调
-(void)getBindHostListWithsccuess:(LibSccuessBlock)sccuessBlock  failure:(LibFailureblock)failureBlock;



/// 发送指令消息
/// @param msgJsonDic 请求消息json字符串
/// @param cmd 命令
-(void)sendMessage:(NSDictionary *)msgJsonDic cmd:(int)cmd;


/// 设置视频窗口
/// @param mRemoteView 远程视频窗口
-(void)setVideoView:(nullable UIView *)mRemoteView;


/// 开始对讲
/// @param type 对讲类型
-(void)startIntercom:(AVIOTCallTypes)type;


/// 停止对讲
-(void)stopIntercom;

@end

NS_ASSUME_NONNULL_END
