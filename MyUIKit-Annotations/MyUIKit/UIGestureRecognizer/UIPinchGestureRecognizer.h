//
//  UIPinchGestureRecognizer.h
//  UIKit
//
//  Created by 白开水ln on 16/-/-.
//  Copyright (c) 2008-2015 Apple Inc. All rights reserved.
//  https://custompbwaters.github.io    http://www.jianshu.com/p/e5b995ecf44d
//
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIGestureRecognizer.h>

NS_ASSUME_NONNULL_BEGIN

// Begins:  when two touches have moved enough to be considered a pinch
// Changes: when a finger moves while two fingers remain down
// Ends:    when both fingers have lifted

NS_CLASS_AVAILABLE_IOS(3_2) __TVOS_PROHIBITED @interface UIPinchGestureRecognizer : UIGestureRecognizer

@property (nonatomic)          CGFloat scale;               // scale relative to the touch points in screen coordinates
@property (nonatomic,readonly) CGFloat velocity;            // velocity of the pinch in scale/second

@end

NS_ASSUME_NONNULL_END
