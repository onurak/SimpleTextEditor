//
//  DetailViewController.h
//  SimpleTextEditor
//
//  Created by Onur Ak on 3/27/13.
//  Copyright (c) 2013 Onur Ak. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
