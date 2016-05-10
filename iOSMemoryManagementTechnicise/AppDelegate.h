//
//  AppDelegate.h
//  iOSMemoryManagementTechnicise
//
//  Created by chandra shekhar sengupta on 10/05/16.
//  Copyright © 2016 chandra shekhar sengupta. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "ViewController.h"

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


// The navigation controller.
@property(strong, nonatomic) UINavigationController *navigationController;

@property (strong, nonatomic) ViewController *ViewController;


@end

