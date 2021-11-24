//
//  MavlAdManager.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/3/24.
//

#import <Foundation/Foundation.h>
#import <Mopub.h>
#import <GoogleMobileAds/GoogleMobileAds.h>
NS_ASSUME_NONNULL_BEGIN


@interface MavlAdManager : NSObject

@property(nonatomic, assign) BOOL    isSdkInitSuccess;


+ (nonnull instancetype)sharedMopubManager;

// 初始化sdk 填入mopubid
- (void)initMedtationWithSDKId:(NSString*)adUnitId;

- (BOOL)mavlInitSuccess;

/// 通过传入的宽自适配算出需要的广告size，此处控制显示广告视图的大小
/// 此方法需要在主线程中调用
/// @param width  传入的宽度，一般传入屏幕宽度
- (GADAdSize)getAdaptiveBannerAdSizeWithWidth:(CGFloat)width;



/// 通过远程控制，双banner加载间隔时长，仅用于双banner需求
/// @param time Mopub控制
- (void)setRefreshBannerTime:(NSInteger)time;

- (NSInteger)getRefreshBannerTime;

- (NSString *)getCurrentSDKVersion;

@end

NS_ASSUME_NONNULL_END
