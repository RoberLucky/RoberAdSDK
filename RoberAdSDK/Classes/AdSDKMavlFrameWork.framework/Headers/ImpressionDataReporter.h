//
//  ImpressionDataReporter.h
//  MavliOSUtilSDK
//
//  Created by iMac on 2021/8/28.
//

#import <Foundation/Foundation.h>
#if __has_include(<MoPub/MoPub.h>)
#import <MoPub/MoPub.h>
#elif __has_include(<MoPubSDKFramework/MoPub.h>)
#import <MoPubSDKFramework/MoPub.h>
#else
#import "MoPub.h"
#endif


NS_ASSUME_NONNULL_BEGIN


@interface ImpressionDataReporter : NSObject

//关于相关top10、top20等的firebase Config key字段与其，对应的numberValue传值
@property (nonatomic, strong)   NSArray         *FBConfigNumValueAry;
// 获取已经设置的adjust token
@property (nonatomic, strong) NSDictionary      *adjustTokenDic;

+ (instancetype)shared;

- (void)report:(MPImpressionData *)impressionData;

@end

NS_ASSUME_NONNULL_END
