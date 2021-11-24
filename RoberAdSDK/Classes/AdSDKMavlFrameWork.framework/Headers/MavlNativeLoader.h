//
//  MavlNativeLoader.h
//  MavlSDKDemo
//
//  Created by iMac on 2021/3/24.
//

#import "MavlBaseAdLoader.h"
#import "MoPub.h"
#import "PureLayout.h"
NS_ASSUME_NONNULL_BEGIN

@interface MavlNativeLoader : MavlBaseAdLoader

- (void)requestAdWithPlacementinfo:(Class)nativeClass;

@end

NS_ASSUME_NONNULL_END
