#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "PangleAdapterConfiguration.h"
#import "PangleBannerCustomEvent.h"
#import "PangleInterstitialCustomEvent.h"
#import "PangleNativeAdAdapter.h"
#import "PangleNativeAdRenderer.h"
#import "PangleNativeCustomEvent.h"
#import "PangleRewardedVideoCustomEvent.h"

FOUNDATION_EXPORT double MoPub_Pangle_AdaptersVersionNumber;
FOUNDATION_EXPORT const unsigned char MoPub_Pangle_AdaptersVersionString[];

