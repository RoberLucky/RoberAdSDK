//
//  MavlBannerLoader.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/3/24.
//

#import "MavlBaseAdLoader.h"
#import "MoPub.h"
#import "PureLayout.h"
NS_ASSUME_NONNULL_BEGIN

// 广告加载的状态
typedef enum {
    B_Idle = 0,  // 初始化进程
    B_Loading,   // 加载中
    B_Loaded,    // 加载完成
    B_Showing,   // 加载完成并显示状态
    B_Hide,      // 加载完成并显示状态
    B_Failed     // 加载失败
} AdBannerState;

@interface MavlBannerLoader : MavlBaseAdLoader

@property(nonatomic, assign) AdBannerState           bannerState;
@property (nonatomic, strong) MPAdView* adView;

@end

NS_ASSUME_NONNULL_END
