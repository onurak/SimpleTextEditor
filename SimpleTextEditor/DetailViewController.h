//
//  DetailViewController.h
//  SimpleTextEditor
//
//  Created by Onur Ak on 3/27/13.
//  Copyright (c) 2013 Onur Ak. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SimpleTextDocument.h"

@interface DetailViewController : UIViewController <SimpleTextDocumentDelegate>

@property (strong, nonatomic) NSURL *detailItem;
@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (weak, nonatomic) IBOutlet UITextView *textView;

@end
