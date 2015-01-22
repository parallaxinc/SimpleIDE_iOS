//
//  SourceView.h
//  SimpleIDE
//
//  Created by Mike Westerfield on 4/30/14 at the Byte Works, Inc (http://www.byteworks.us/Byte_Works/Consulting.html).
//  Copyright (c) 2014 Parallax. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "Common.h"

@interface SourceView : UITextView <UITextViewDelegate>

@property (nonatomic) languageType language;

- (void) save;
- (void) setSource: (NSString *) text forPath: (NSString *) thePath;

@end
