//
//  ViewController.m
//  iOSMemoryManagementTechnicise
//
//  Created by Souman Paul on 5/10/16.
//  Copyright © 2016 chandra shekhar sengupta. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)LoadGoogleMap:(id)sender {
    
    // Override point for customization after application launch.
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.GoogleMapViewController = [[GoogleMapViewController alloc] initWithNibName:@"GoogleMapViewController" bundle:nil];
    self.window.rootViewController = self.GoogleMapViewController;
    [self.window makeKeyAndVisible];
}
@end
