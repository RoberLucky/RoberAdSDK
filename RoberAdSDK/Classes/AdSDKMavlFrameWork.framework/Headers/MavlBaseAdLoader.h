//
//  MavlBaseAdLoader.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/5/10.
//

#import <Foundation/Foundation.h>
#import "MoPub.h"
#import "MavlAdPlacementInfo.h"
#import "MavlAdLoaderDelegate.h"
NS_ASSUME_NONNULL_BEGIN


@interface MavlBaseAdLoader : NSObject

@property (nonatomic, weak)id<MavlAdLoadCallBackDelegate> delegate;

@property (nonatomic, strong) NSString     *adUnitId;

@property (nonatomic, strong) MavlAdPlacementInfo     *loaderInfo;

- (instancetype)initWithPlacementInfo:(MavlAdPlacementInfo *)info;

- (void)requestAdWithPlacementinfo;

- (void)showAdForView:(UIView *__nullable)view;

- (void)hideAdForView:(UIView *__nullable)view;

- (BOOL)adIsReadyForShow;

- (void)destoryAd;

// 注意⚠️：该方法仅用于插屏和rv的自定义显示
- (void)showAdForViewWithCustomVC:(UIViewController *)customVC;
// 注意⚠️：该方法仅用于RV奖励的获得展示
- (NSArray*)getAvailableRewards;

- (UIViewController *)mavlVisibleViewController;

- (UIViewController *)mavlGetVisibleViewControllerFrom:(UIViewController *)vc;

@end

NS_ASSUME_NONNULL_END
