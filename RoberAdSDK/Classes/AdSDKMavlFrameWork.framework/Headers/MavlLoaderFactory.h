//
//  MavlLoaderFactory.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/5/10.
//

#import <Foundation/Foundation.h>
#import "MavlBannerLoader.h"
#import "MavlBannerRefreshLoader.h"
#import "MavlNativeLoader.h"
#import "MavlInterstatialLoader.h"
#import "MavlRewardVideoLoader.h"
#import "MavlRVCacheLoader.h"
#import "MavlAdPlacementInfo.h"
NS_ASSUME_NONNULL_BEGIN

@interface MavlLoaderFactory : NSObject

+(MavlBaseAdLoader*)createAdLoaderWithInfo:(MavlAdPlacementInfo*)info;

@end

NS_ASSUME_NONNULL_END
