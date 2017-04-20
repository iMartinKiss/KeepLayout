//
//  KeepLayout.h
//  Keep Layout
//
//  Created by Martin Kiss on 28.1.13.
//  Copyright (c) 2013 Triceratops. All rights reserved.
//

#ifdef __cplusplus

#import <Foundation/Foundation.h>

#else 

@import Foundation;

#endif


FOUNDATION_EXPORT double KeepLayoutVersionNumber;
FOUNDATION_EXPORT const unsigned char KeepLayoutVersionString[];



#import "KeepTypes.h"
#import "KeepAttribute.h"
#import "KeepView.h"
#import "KeepArray.h"
#import "KeepLayoutConstraint.h"

#if TARGET_OS_IPHONE
#import "UIViewController+KeepLayout.h"
#import "UIScrollView+KeepLayout.h"
#endif
