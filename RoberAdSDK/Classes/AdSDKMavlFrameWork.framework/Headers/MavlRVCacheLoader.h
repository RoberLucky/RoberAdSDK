//
//  MavlRVCacheLoader.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/5/10.
//

#import "MavlBaseAdLoader.h"
#import "MPRewardedAds.h"

NS_ASSUME_NONNULL_BEGIN

@interface MavlRVCacheLoader : MavlBaseAdLoader

@property (nonatomic, strong) NSString     *backupAdUnitId;

//- (void)addBackupWIthAdUnitID:(NSString *) backupAdUnitId;

@end

NS_ASSUME_NONNULL_END
