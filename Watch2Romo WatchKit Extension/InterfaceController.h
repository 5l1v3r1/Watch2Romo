//
//  InterfaceController.h
//  Watch2Romo WatchKit Extension
//
//  Created by Ishihara Junya on 2015/08/07.
//  Copyright (c) 2015年 Tsukurusha. All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>

@interface InterfaceController : WKInterfaceController

- (IBAction)forward;
- (IBAction)right;
- (IBAction)left;
- (IBAction)backward;
- (IBAction)stop;

@end
