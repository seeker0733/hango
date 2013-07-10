//
//  DetailViewController.h
//  test
//
//  Created by seeker on 13-7-10.
//  Copyright (c) 2013年 seeker. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
