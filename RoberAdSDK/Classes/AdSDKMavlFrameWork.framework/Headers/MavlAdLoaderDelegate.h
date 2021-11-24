//
//  MavlAdLoaderDelegate.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/5/10.
//

#import <Foundation/Foundation.h>
#import "MoPub.h"
NS_ASSUME_NONNULL_BEGIN

@protocol MavlAdLoadCallBackDelegate <NSObject>

@required // 必须实现
- (void)adDidLoad:(NSString*)adunitId;

- (void)adLoadFailed:(NSString*)adunitId errorInfo:(NSError*)error;

@optional

// 用于banner成功的回调，传送给unity宽高
- (void)adDidLoad:(NSString*)adunitId adSize:(CGSize)size;

- (void)adWillAppear:(NSString*)adunitId;

- (void)adDidDisappear:(NSString*)adunitId;

- (void)adDidClick:(NSString*)adunitId;

- (void)adDidExpire:(NSString*)adunitId;

- (void)adImpressionData:(NSString*)adunitId impressionData:(MPImpressionData *)data;

- (void)rewardedVideoAdDidFailToPlayForAdUnitID:(NSString*)adunitId error:(NSError*)error;

- (void)rewardedVideoBackRewardForAdUnitID:(NSString*)adunited reward:(NSDictionary *)reward;

@end

NS_ASSUME_NONNULL_END
