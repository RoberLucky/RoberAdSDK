//
//  MavlAdPlacementInfo.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/5/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum
{
    MoPubAdPositionBottomCenter = 0,
    MoPubAdPositionTopLeft,
    MoPubAdPositionTopCenter,
    MoPubAdPositionTopRight,
    MoPubAdPositionCentered,
    MoPubAdPositionBottomLeft,
    MoPubAdPositionBottomRight
} MoPubAdPosition;

// 广告类型
typedef enum {
    AdTypeBanner = 0,
    AdTypeNative = 1,
    AdTypeIntertitial = 2,
    AdTypeRewardVideo = 3,
} AdType;

// 广告加载类型
typedef enum {
    AdLoaderTypeBannerNormalLoader = 100,
    AdLoaderTypeBannerRefreshLoader = 101,
    AdLoaderTypeNativeLoader = 200,
    AdLoaderTypeIntertitialLoader = 300,
    AdLoaderTypeRVNormalLoader = 400,
    AdLoaderTypeRVBackupLoader = 401
} AdLoaderType;

// 广告Manager类型
typedef enum {
    AdLoadManagerTypeBannerManager = 0,
    AdLoadManagerTypeNativeManager,
    AdLoadManagerTypeIntertitialManagerr,
    AdLoadManagerTypeRVManager,
} AdLoadManagerType;

// mediationType
typedef enum {
    MediationTypeMopub = 0,
    MediationTypeAdmob = 1
} MediationType;

@interface MavlAdPlacementInfo : NSObject

@property (nonatomic, strong) NSString    *keywords;
@property (nonatomic, strong) NSString    *userdata;
@property (nonatomic, assign) BOOL         *isNative_banner; // 是否是native Banner的类型
@property (nonatomic, assign) float    banner_W;
@property (nonatomic, assign) float    banner_H;
@property (nonatomic, assign) float    refresh_time;
@property (nonatomic, assign) BOOL     enable_aps;        // 是否开启APS
@property (nonatomic, strong) NSString    *rv_customerid; // RV需要的特殊参数。可为空
@property (nonatomic, assign) float    latitude;
@property (nonatomic, assign) float    longitude;
@property (nonatomic, strong) NSString    *rv_extraMedtationJson; // RV需要的特殊参数。可为空
@property (nonatomic, strong) NSString    *adUnitId;
@property (nonatomic, strong) NSString    *backupRVId; // 双RV需要的第二个ID
@property (nonatomic, assign) AdType      adType;
@property (nonatomic, assign) AdLoaderType loaderType;
@property (nonatomic, assign) MediationType mediationType;
@property (nonatomic, assign) AdLoadManagerType managerType;
@property (nonatomic, assign) BOOL     enableReload;  // Reload the ad after loading failed.
@property (nonatomic, assign) BOOL     enableCache;  // Load another ad after add closed.

@end

NS_ASSUME_NONNULL_END
