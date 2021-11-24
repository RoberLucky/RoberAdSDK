//
//  MavlAdBaseManager.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/5/10.
//

#import <Foundation/Foundation.h>
#import "MavlAdLoaderDelegate.h"
#import "MavlAdPlacementInfo.h"
#import "MavlAdManagerDelegate.h"
#import "MavlApsLoader.h"
#import "MavlFirebaseEcpmConfig.h"
NS_ASSUME_NONNULL_BEGIN

UIKIT_EXTERN int const EXPIRATION_TIME_MILLISECONDS;//超时时间

// 网络状态类型
typedef enum {
    NetworkStatusTypeNoConnect = 0,
    NetworkStatusTypeWiFi = 1,
    NetworkStatusTypeWAN = 2
} NetworkStatusType;

@interface MavlAdBaseManager : NSObject<MavlAdLoadCallBackDelegate>

@property (nonatomic, weak)id<MavlAdManagerDelegate> delegate;

@property (nonatomic, strong) MavlAdPlacementInfo  *mavlInfo;

@property (nonatomic, strong) NSArray    *retryTimeAry;

@property (nonatomic, assign) int         retryTimes;

- (instancetype)initWithPlacementInfo:(MavlAdPlacementInfo *)info;

- (void)loadAdWithPlacementinfo;

- (void)showAdForBackview:(UIView *__nullable)view;

- (void)hideAdForBackview:(UIView *__nullable)view;

- (void)destoryAd;

- (BOOL)adIsReady;

// 关于加载重试机制的方法
- (void)resetRetryTimes;

- (double)getRetryTime;

- (void)updateRetryTimes;

// 修改Impression Data的数据，用于ECPM修正
- (MPImpressionData *)changeImpressionDataWithFanData:(MPImpressionData *)data;

// 获取当前的网络状态
- (NetworkStatusType)getCurrentNetworkStatus;

// 获取当前的网络制式，仅在NetworkStatusType == NetworkStatusTypeWAN的条件下使用，仅支持手机网络
- (NSString *)getNetType;

@end

NS_ASSUME_NONNULL_END
