//
//  MavlAdManagerDelegate.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/5/11.
//

#import <Foundation/Foundation.h>
#import "MoPub.h"

NS_ASSUME_NONNULL_BEGIN

@protocol MavlAdManagerDelegate<NSObject>

@required // 必须实现
- (void)adManagerDidLoad:(MavlAdPlacementInfo*)info;

- (void)adManagerLoadFailed:(MavlAdPlacementInfo*)info errorInfo:(NSError*)error;

@optional

- (void)adManagerDidLoad:(MavlAdPlacementInfo*)info adSize:(CGSize)size;

- (void)adManagerWillAppear:(MavlAdPlacementInfo*)info;

- (void)adManagerDidDisappear:(MavlAdPlacementInfo*)info;

- (void)adManagerDidExpire:(MavlAdPlacementInfo*)info;

- (void)adManagerDidClick:(MavlAdPlacementInfo*)info;

- (void)adManagerImpressionData:(MavlAdPlacementInfo*)info impressionData:(MPImpressionData *)data;

// 用于工具的关闭RV回调请求，同时会带过来奖励的获取情况
- (void)adManagerDidDisappear:(MavlAdPlacementInfo *)info rewardAvailable:(BOOL)availabel;

- (void)rewardedVideoAdManagerDidFailToPlayForAdUnitID:(MavlAdPlacementInfo*)info error:(NSError*)error;

- (void)rewardedVideoBackRewardManagerForAdUnitID:(MavlAdPlacementInfo*)info reward:(NSDictionary *)reward;


@end

NS_ASSUME_NONNULL_END
