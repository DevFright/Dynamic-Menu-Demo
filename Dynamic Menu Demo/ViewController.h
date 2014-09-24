//
//  ViewController.h
//  Dynamic Menu Demo
//
//  Created by Martin Bateson on 9/4/14.
//  Copyright (c) 2014 Pleiades Apps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

- (IBAction)menuAction:(id)sender;

@property (weak, nonatomic) IBOutlet UIButton *menuButton;
@property (weak, nonatomic) IBOutlet UIImageView *myView;
@property (nonatomic,retain) NSArray * menuItems;

@property (nonatomic, strong) UIView *viewForMenu;
@property (nonatomic, strong) UITableView *viewForTable;
@property (nonatomic, strong) UIDynamicAnimator *animator;

-(void)setupMenuView;

-(void)showMenu:(BOOL)yesNo;

@property (nonatomic) IBOutlet UIVisualEffectView *blurView;

@end
