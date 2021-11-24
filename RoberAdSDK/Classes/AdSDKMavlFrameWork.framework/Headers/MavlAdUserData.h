//
//  MavlAdUserData.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/5/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MavlAdUserData : NSObject

/// 根据info.plist中的id组，进行adapter的初始化操作
- (NSDictionary *)getMopubAdaptersAppIdFormInfoPlist;

- (NSString *)getAdcolonyId;

- (NSArray *)getAdcolonyZoneIds;

- (NSString *)getFyberAppId;

- (NSString *)getIronsourceAppId;

- (NSString *)getSmattoAppId;

- (NSString *)getVungleAppId;

- (NSString *)getInMobiAppId;
- (NSString *)getPangleAppId;

- (NSString *)getDoneConfigAppId;

- (NSString *)getApsConfigAppId;

- (NSString *)getBannerRefreshTimeAppId;


@end

NS_ASSUME_NONNULL_END
