//
//  STESimpleTextDocument.h
//  SimpleTextEditor
//
//  Created by Onur Ak on 3/27/13.
//  Copyright (c) 2013 Onur Ak. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SimpleTextDocumentDelegate;

@interface SimpleTextDocument : UIDocument

@property (copy, nonatomic) NSString* documentText;
@property (weak, nonatomic) id<SimpleTextDocumentDelegate> delegate;

@end

@protocol SimpleTextDocumentDelegate <NSObject>
@optional
- (void)documentContentsDidChange:(SimpleTextDocument*)document;
@end
