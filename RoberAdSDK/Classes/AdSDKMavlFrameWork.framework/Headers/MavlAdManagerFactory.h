//
//  MavlBaseAdManager.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/5/10.
//

#import <Foundation/Foundation.h>
#import "BannerAdManager.h"
#import "NativeAdManager.h"
#import "IntertitialAdManager.h"
#import "RewardAdManager.h"
#import "MavlAdPlacementInfo.h"
NS_ASSUME_NONNULL_BEGIN

@interface MavlAdManagerFactory : NSObject


+(MavlAdBaseManager*)createAdManagerWithInfo:(MavlAdPlacementInfo *)type;

@end

NS_ASSUME_NONNULL_END
