//
//  RewardAdManager.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/5/10.
//

#import "MavlAdBaseManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface RewardAdManager : MavlAdBaseManager

- (void)showAdForViewWithCustomVC:(UIViewController *)customVC;

- (NSArray*)getAvailableRewards;

@end

NS_ASSUME_NONNULL_END
