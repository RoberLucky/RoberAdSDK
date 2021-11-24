//
//  ApsLoader.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/5/10.
//

#import <Foundation/Foundation.h>
#import <DTBiOSSDK/DTBiOSSDK.h>
NS_ASSUME_NONNULL_BEGIN

typedef enum {
    E_Idle = 0,
    E_Loading,
    E_Loaded,
    E_Failed
} AdState;


@interface ApsBannerAdCallback : NSObject<DTBAdCallback>
@property (nonatomic, assign) AdState loadState;
@property (nonatomic, strong) NSString* BannerKw;
@property(nonatomic, copy) void (^bannerLoadSuccess)(NSString *keyWords);
- (AdState) getLoadState;
- (NSString*)getKeywords;

@end

@interface ApsInterstitialAdCallback : NSObject<DTBAdCallback>
@property (nonatomic, assign) int loadState;
@property (nonatomic, strong) NSString* InterstitialKw;
@property(nonatomic, copy) void (^interstitialLoadSuccess)(NSString *keyWords);
- (int) getLoadState;
- (NSString*)getKeywords;

@end

@interface ApsRewardedVideoAdCallback : NSObject<DTBAdCallback>
@property (nonatomic, assign) int loadState;
@property (nonatomic, strong) NSString* RewardedKw;
@property(nonatomic, copy) void (^rewardVideoLoadSuccess)(NSString *keyWords);
- (int) getLoadState;
- (NSString*)getKeywords;

@end

@interface ApsMrecAdCallback : NSObject<DTBAdCallback>
@property (nonatomic, assign) int loadState;
@property (nonatomic, strong) NSString* MrecKw;
@property(nonatomic, copy) void (^mrecLoadSuccess)(NSString *keyWords);
- (int) getLoadState;
- (NSString*)getKeywords;

@end

@interface MavlApsLoader : NSObject

+ (instancetype)sharedSingleton;

- (void)setApsIdsByAppid:(NSString*)appid BannerID:(NSString*)bannerId MrecID:(NSString*)mrecId InterstitialID:(NSString*)interstitialID RewardID:(NSString*)rewardID TestMode:(NSString*)testMode MopubIds:(NSArray *) idsAry;

- (NSString*)getBannerKeywords;
- (void)loadBanner;

- (NSString*)getMrecKeywords;
- (void)loadMrec;

- (NSString*)getInterstitialKeywords;
- (void)loadInterstitial;

- (NSString*)getRewardedKeywords;
- (void)loadRewarded;

- (NSArray*)getMopubIds;

@property (nonatomic, strong)  ApsBannerAdCallback * apsBannerAdCallback;
@property (nonatomic, strong)  ApsMrecAdCallback * apsMrecAdCallback;
@property (nonatomic, strong)  ApsInterstitialAdCallback * apsInterstitialAdCallback;
@property (nonatomic, strong)  ApsRewardedVideoAdCallback * apsRewardedVideoAdCallback;
@property (nonatomic, strong)  NSArray   *mopubIdsAry;

@end

NS_ASSUME_NONNULL_END
