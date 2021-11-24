//
//  MavlFirebaseEcpmConfig.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/7/9.
//

#import <Foundation/Foundation.h>
#if __has_include(<MoPub/MoPub.h>)
#import <MoPub/MoPub.h>
#elif __has_include(<MoPubSDKFramework/MoPub.h>)
#import <MoPubSDKFramework/MoPub.h>
#else
#import "MoPub.h"
#endif


#define FirebaseEcpmURL(bundleId) [NSString stringWithFormat:@"https://ads.adpub.co/fan_cpm_%@_ios.json",bundleId]
#define FirebaseDataStrKey @"FirebaseDataStrKey"
#define FirebaseDataTimeKey @"FirebaseDataTimeKey"


NS_ASSUME_NONNULL_BEGIN
@interface MavlFirebaseEcpmConfig : NSObject


// 创建config的类方法

/// 返回处理之后的字段数据，包括FAN name、epcm、placementId
/// @param impdata mopub的数据信息
+ (NSDictionary *)getImpressionData:(MPImpressionData *)impdata;

// 解析线上firebase中桶的数据，暂存本地
+ (void)loadFirebaseStorage;


/// 解析firebase桶的数据信息，转换为dic
/// @param storageJsonStr 桶的json字符串
/// @param data impression data数据
+ (NSDictionary *)changeFirebaseDataToDic:(NSString *)storageJsonStr impressiondata:(MPImpressionData *)data;


/// 存储字符串到本地
/// @param cacheStr 存储的字段
/// @param key            存储key值
+ (void)saveStr:(NSString *)cacheStr withKey:(NSString *)key;


/// 从本地获取存储的字段
/// @param key 存储key值
+ (NSString *)getCacheStr:(NSString *)key;


@end

NS_ASSUME_NONNULL_END
