//
//  NativeAdManager.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/5/10.
//

#import "MavlAdBaseManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface NativeAdManager : MavlAdBaseManager

- (void)loadAdWithPlacementinfo:(Class)nativeClass;

@end

NS_ASSUME_NONNULL_END
