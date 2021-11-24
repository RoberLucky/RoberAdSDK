//
//  MavlBannerRefreshLoader.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/5/10.
//

#import "MavlBaseAdLoader.h"
#import "MavlBannerLoader.h"
#import "MoPub.h"
#import "PureLayout.h"

NS_ASSUME_NONNULL_BEGIN

@interface MavlBannerRefreshLoader : MavlBannerLoader

@property (nonatomic, assign) AdBannerState secondBannerState;

@property (nonatomic, strong) MPAdView* secondAdView;


@end

NS_ASSUME_NONNULL_END

