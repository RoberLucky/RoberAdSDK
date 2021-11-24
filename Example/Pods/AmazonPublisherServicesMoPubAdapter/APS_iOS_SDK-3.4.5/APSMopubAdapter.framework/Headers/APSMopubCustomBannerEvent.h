/*
* Copyright 2020 Amazon.com,
* Inc. or its affiliates. All Rights Reserved.
* Licensed under the Amazon Software License (the "License").
* You may not use this file except in compliance with the
* License. A copy of the License is located at
* http://aws.amazon.com/asl/
* or in the "license" file accompanying this file. This file is
* distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
* CONDITIONS OF ANY KIND, express or implied. See the License
* for the specific language governing permissions and
* limitations under the License.
*/

#import <Foundation/Foundation.h>
#if __has_include(<MoPub/MoPub.h>)
    #import <MoPub/MoPub.h>
#elif __has_include(<MoPubSDKFramework/MoPub.h>)
    #import <MoPubSDKFramework/MoPub.h>
#elif __has_include(<MoPubSDk/MPInlineAdAdapter.h>)
    #import <MoPubSDk/MPInlineAdAdapter.h>
#else
    #import "MPInlineAdAdapter.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface APSMopubCustomBannerEvent : MPInlineAdAdapter <MPThirdPartyInlineAdAdapter>

@end

NS_ASSUME_NONNULL_END
