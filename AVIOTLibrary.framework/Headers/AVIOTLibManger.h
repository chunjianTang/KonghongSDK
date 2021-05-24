//
//  AVIOTLibManger.h
//  AVIOTLibrary
//
//  Created by wrt_ios on 2021/1/12.
//

#import <Foundation/Foundation.h>

#import <AVIOTLibrary/AVIOTLibMangerDelegate.h>


NS_ASSUME_NONNULL_BEGIN


@interface AVIOTLibManger : NSObject<AVIOTLibMangerDelegate>

/// 生成一个sdk 管理单例
+(instancetype)instancedShared;

@end

NS_ASSUME_NONNULL_END
