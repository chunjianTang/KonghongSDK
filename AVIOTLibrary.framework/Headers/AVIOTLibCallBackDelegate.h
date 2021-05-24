//
//  AVIOTLibCallBackDelegate.h
//  AVIOTLibrary
//
//  Created by wrt_ios on 2021/1/13.
//

#import <Foundation/Foundation.h>

#import <AVIOTLibrary/AVIOTType.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AVIOTLibCallBackDelegate <NSObject>

@optional

/// 命令的回调
/// @param dic 回调的内容
/// @param cmd 回调命令
-(void)AVIOTLibclientReceiveData:(NSDictionary * _Nullable)dic cmd:(AVIOTCallBackStatus)cmd;

@end

NS_ASSUME_NONNULL_END
