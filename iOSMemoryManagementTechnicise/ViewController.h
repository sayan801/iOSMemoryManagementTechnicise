//
//  ViewController.h
//  iOSMemoryManagementTechnicise
//
//  Created by Souman Paul on 5/10/16.
//  Copyright © 2016 chandra shekhar sengupta. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GoogleMapViewController.h"

@class GoogleMapViewController;

@interface ViewController : UIViewController



@property (strong, nonatomic) UIWindow *window;
// The navigation controller.
@property(strong, nonatomic) UINavigationController *navigationController;

@property (strong, nonatomic) GoogleMapViewController *GoogleMapViewController;


- (IBAction)LoadGoogleMap:(id)sender;


@end
