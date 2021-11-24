//
//  RASViewController.m
//  RoberAdSDK
//
//  Created by RoberLucky on 11/24/2021.
//  Copyright (c) 2021 RoberLucky. All rights reserved.
//

#import "RASViewController.h"
#import <AdSDKMavlFrameWork/MavlAdExtend.h>
@interface RASViewController ()

@end

@implementation RASViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    NSString *version = [[MavlAdManager sharedMopubManager] getCurrentSDKVersion];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
